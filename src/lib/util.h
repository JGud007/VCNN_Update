//#ifdef VCNN_UTIL_H
//#define VCNN_UTIL_H

#include "layers/layers.h"
#include "../custom/custom.h"

float* GET_INPUT_DATA(Layer l, int i, int j, int k);

#define is_a_ge_zero_and_a_lt_b(a,b) (a>=0 && a<b)
#define INFINITY (1e99)


//#endif
