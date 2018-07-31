#include "layers.h"
#include "../util.h"
#include <math.h>


void Softmax(Layer current, Layer next, float *layer0, float *layer1){
	float exp_sum = 0.0;
	int channels = 10;
	int height = 1;
	int width = 1;
	int total_input = channels*width*height;

	for(int i=0; i<total_input; i++){
		#pragma HLS unroll
		float tmp =  exp(*(layer0+i));
		*(layer1+i) = tmp;
		exp_sum += tmp;
	}
	for(int i=0; i<total_input; i++){
		#pragma HLS unroll
		*(layer1+i) = (*(layer1+i))/exp_sum;
	}
}
