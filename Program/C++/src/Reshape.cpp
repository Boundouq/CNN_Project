/////////////////////////////////////////////////////////////////////////////////////
///                                  RESHAPE.CPP                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

#include "Reshape.h"

using namespace std;

void reshape(
  double tab_in[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE],
  double tab_out[WEIGHT_4_NUM]
){

  for(int i = 0; i < MAXPOOL_SIZE; i++){
    for(int j = 0; j < MAXPOOL_SIZE; j++){
      for(int c = 0; c < BIASE_3_NUM; c++){
        tab_out[c + i*3*20 + j*20]=tab_in[c][i][j];
      }
    }
  }
}
