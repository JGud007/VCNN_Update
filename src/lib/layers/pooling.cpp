#include "layers.h"
#include "../util.h"
#include "../../custom/custom.h"

inline float max(Layer current, int ksize, int channel, int h, int w, float *layer0){
	#pragma HLS unroll
	float r = -INFINITY;
	int karea = ksize*ksize;
	for (int i = 0; i < ksize; i++)
		for (int j = 0; j < ksize; j++)
		{
			float tmp =  *(GET_INPUT_DATA(current, channel, h+i, w+j, layer0));
			r = r > tmp ? r : tmp;
		}
	return r;
}

void PoolingMax(Layer current, Layer next, float* layer0, float* layer1){
	#pragma HLS unroll
	int ksize = current.pl_kernel_size;
	int stride = current.pl_stride;
	int channels = current.input_channel_num;
	int height = current.input_feature_map_height-stride+1;
	int width = current.input_feature_map_width-stride+1;
	float output[2880] = {0};

	for (int c = 0; c < channels; c++){
		for(int h = 0, hc = 0; h < height; h+=stride, hc++){
			for(int w = 0, wc = 0; w < width; w+=stride, wc++){
				*(GET_INPUT_DATA(next,c,hc,wc,layer1)) = max(current, ksize, c, h, w, layer0);
			}
		}
	}
}

