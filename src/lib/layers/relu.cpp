#include "layers.h"
#include "../util.h"


// float* GET_INPUT_DATA(Layer l, int i, int j, int k) {
//     return l.input_data + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k);
// }

void Relu(Layer current, Layer next, float *layer0, float *layer1){
	#pragma HLS unroll
	int inputs = current.input_channel_num;
	int height = current.input_feature_map_height;
	int width = current.input_feature_map_width;
	int i,h,w;

	for(i=0;i<inputs;i++){
		for(h=0; h<height;h++){
			for(w=0;w<width;w++){
				#pragma HLS loop_flatten
				float data = *(GET_INPUT_DATA(current,i,h,w,layer0));
				if(data < 0){
					data = 0;
				}
				*(GET_INPUT_DATA(next,i,h,w,layer1)) = data;
			}
		}
	}
}
