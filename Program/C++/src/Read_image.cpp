/////////////////////////////////////////////////////////////////////////////////////
///                                  READ_IMAGE.CPP                               ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <sstream>

#include "Read_image.h"

using namespace std;

#define IMG_SIZE 32 * 32 * 3

void read_image(
  string    image_in,
  double    image_out[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM]
){
  fstream image;
  image.open(image_in);
  char  type[128], tmp[128];
  int sx, sy;
  // ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> image_out[IMG_SIZE];
  // ac_fixed<DATA_WIDTH,DATA_WIDTH,false,AC_RND_INF,AC_SAT> img_out[IMG_SIZE];
  double img_out[24*24*3];
 /*
 Lecture fichier entree
*/
  if (image.is_open()) printf("file opened\n");
  image.getline(type, 128);
  image.getline(tmp, 128);
  while (tmp[0]== '#') image.getline(tmp, 128);
  sscanf(tmp, "%d %d\n", &sx, &sy);
  printf( "%d %d\n", sx, sy);
  int level;
  image>>level;
  int data;
  for(int i=0; i<sx*sy*3;i++)
   {
     image >> data;
     img_out[i] = (int)data;
   }
   // int l = 96 * 4;
   int l = 0;
   for (int i = 0; i < IMAGE_1_WIDTH - 2; i++){
     // l += 12;
     for(int j = 0; j < IMAGE_1_WIDTH - 2; j++){
       image_out[i][j][0] = img_out[l];
       image_out[i][j][1] = img_out[l+1];
       image_out[i][j][2] = img_out[l+2];
       l += 3;
     }
     // l += 12;
  }
  // ofstream simg_out("img_out.ppm");
  //
  // simg_out << "P3" << endl;
  // simg_out << 24<< " ";
  // simg_out <<  24<< endl;
  // simg_out <<  255 << endl;
  // for(int i=0; i<IMG_SIZE;i++)
  // {
  //  simg_out <<  (int)img_out[i] << endl;
  // }

}
