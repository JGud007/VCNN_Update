#include "layers.h"
#include "../util.h"
#include "../../custom/custom.h"

inline float max(Layer current, int channel, int h, int w, float *layer0){
	float r = -INFINITY;
	for (int i = 0; i < 2; i++){
		#pragma HLS unroll
		for (int j = 0; j < 2; j++){
			#pragma HLS loop_flatten
			float tmp =  *(GET_INPUT_DATA(current, channel, h+i, w+j, layer0));
			r = r > tmp ? r : tmp;
		}
	}
	return r;
}

void PoolingMax(Layer current, Layer next, float* layer0, float* layer1){
	#pragma HLS DATAFLOW

	int ksize = 2;
	int stride = 2;
	int channels = 20;
	int height = 24-stride+1;
	int width = 24-stride+1;
	float output[2880] = {0};

	for (int c = 0; c < channels; c++){
		#pragma HLS unroll
		for(int h = 0, hc = 0; h < height; h+=stride, hc++){
			for(int w = 0, wc = 0; w < width; w+=stride, wc++){
				#pragma HLS loop_flatten
				*(GET_INPUT_DATA(next,c,hc,wc,layer1)) = max(current, c, h, w, layer0);
			}
		}
	}
}

void PoolingMax2(Layer current, Layer next, float* layer0, float* layer1){
	#pragma HLS DATAFLOW

	int ksize = 2;
	int stride = 2;
	int channels = 50;
	int height = 8-stride+1;
	int width = 8-stride+1;
	float output[2880] = {0};

	for (int c = 0; c < channels; c++){
		#pragma HLS unroll
		for(int h = 0, hc = 0; h < height; h+=stride, hc++){
			for(int w = 0, wc = 0; w < width; w+=stride, wc++){
				#pragma HLS loop_flatten
				*(GET_INPUT_DATA(next,c,hc,wc,layer1)) = max(current, c, h, w, layer0);
			}
		}
	}
}

