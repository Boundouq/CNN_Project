#####################################################################################
###                                    CONVOLUTION                                ###
#####################################################################################

# The number of the picture that we will normalize
#IMAGE_NUM = 0

# Convolution stage between 0 and 2
#STAGE = 0

#The output image size
#X = [24, 12, 6]
#W = [3, 64, 32]
#B = [64, 32, 20]

# Output files
#image_convolution = 'Results/Convolution_Image_'+ str(IMAGE_NUM) + '_' + str(X[STAGE]) + '.txt'

# Input files
#image_matrix = 'Results/Normalization_Image_' + str(IMAGE_NUM) + '.txt'
#matrix = open(image_matrix, 'r')
#kernel = open('data/CNN_coeff_3x3.txt', "r")

# Output convolution matrix
#out_convolution = list()

# Parameters
#input = list()
#biases = list()
#weights = list()

#####################################################################################

# Get kernel matrix (biases and weights), for convolution nember "stage"
def get_kernel_matrix(kernel, stage, B, W):
    cnt = 0
    kernel.seek(0,0)
    b = []
    w = []
    while(1):
        line = kernel.readline()
        mot = line.split(': ')
        if mot[0] == 'tensor_name':
            cnt += 1
        if cnt == (2*stage) + 1:
            # get biases
            for i in range (B[stage] // 6 + 1):
                line = kernel.readline()
                line = line[1:len(line)]
                mot = line.split()
                if line[len(line) - 2] == ']':
                    line = line[:len(line) - 2]
                    mot = line.split()
                for elm in mot:
                    b.append(float(elm))
            #get weights
            line = kernel.readline()
            for n in range (3):
                x = []
                for m in range (3):
                    y = []
                    for l in range (W[stage]):
                        z = []
                        for i in range (B[stage] // 4):
                            line = kernel.readline()
                            line = line[5:]
                            mot = line.split()
                            index = line.find(']')
                            if index != -1:
                                line = line[:index]
                                mot = line.split()
                            for elm in mot:
                                z.append(float(elm))
                        y.append(z)
                    line = kernel.readline()
                    x.append(y)
                line = kernel.readline()
                w.append(x)
            return (b , w)

#####################################################################################

# Get image matrix
def get_matrix(image_matrix, stage, X,image_out):
    image_in = open(image_matrix, 'r')
    cnt = 0
    while(cnt < 3):
        cnt += 1
        map = []
        for i in range (X[stage]+2):
            line = image_in.readline()
            mot = line.split()
            list = []
            for elm in mot:
                list.append(float(elm))
            map.append(list)
        image_out.append(map)
        line = image_in.readline()
#####################################################################################

# Calculate convolution
def convolution(image, stage, kernl, bias, B,X,W):
    out = []
    for c in range (B[stage]):
        co = []
        for i in range (0, X[stage]):
            li = []
            for j in range (0, X[stage]):
                s = 0
                for l in range (W[stage]):
                    for m in range (3):
                        for n in range (3):
                            s += image[l][i+m][j+n] * kernl[m][n][l][c]

                # RELU
                s += bias[c]
                s = max(0,s)

                li.append(s)
            co.append(li)
        out.append(co)
    return out

#####################################################################################

# Create output convolution matrix file
def convo_matrix(image_convolution,out,B,X, stage):
    c = open(image_convolution, "w")
    for y in range(B[stage]):
        for i in range(X[stage]):
            for j in range(X[stage]):
                c.write(str(out[y][i][j]) + ' ')
            c.write('\n')
        c.write('\n')
    c.close()

#####################################################################################

#get_kernel_matrix(kernel,STAGE, biases, weights)

#get_matrix(matrix, STAGE, input)

#convolution(input,STAGE,weights,biases,out_convolution)

#convo_matrix(out_convolution, STAGE)
