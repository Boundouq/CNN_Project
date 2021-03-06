/////////////////////////////////////////////////////////////////////////////////////
///                                    MAXPOOL.H                                  ///
/////////////////////////////////////////////////////////////////////////////////////
#ifndef __MAXPOOL_H__
#define __MAXPOOL_H__

#include "KERNEL.h"

void maxpool_1(
  double tab_in[BIASE_1_NUM][IMAGE_1_WIDTH - 2][IMAGE_1_WIDTH - 2],
  double tab_out[WEIGHT_2_NUM][IMAGE_2_WIDTH][IMAGE_2_WIDTH]
);

void maxpool_2(
  double tab_in[BIASE_2_NUM][IMAGE_2_WIDTH - 2][IMAGE_2_WIDTH - 2],
  double tab_out[WEIGHT_3_NUM][IMAGE_3_WIDTH][IMAGE_3_WIDTH]
);

void maxpool_3(
  double tab_in[BIASE_3_NUM][IMAGE_3_WIDTH - 2][IMAGE_3_WIDTH - 2],
  double tab_out[BIASE_3_NUM][MAXPOOL_SIZE][MAXPOOL_SIZE]
);

#endif
