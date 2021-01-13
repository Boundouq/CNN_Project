/////////////////////////////////////////////////////////////////////////////////////
///                               NORMALIZATION.H                                 ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __NORMALIZATION_H__
#define __NORMALIZATION_H__

#include "KERNEL.h"
#include "CNN_TYPES.h"

void normalization(
  int   image_in[IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2][WEIGHT_1_NUM],
  d_type    image_out[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH]
);

#endif