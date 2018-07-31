#include "layers.h"
#include "../util.h"


// float* GET_INPUT_DATA(Layer l, int i, int j, int k) {
//     return l.input_data + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k);
// }

void Relu(Layer current, Layer next, float *layer0, float *layer1){
	#pragma HLS DATAFLOW

	int i,h,w;

	for(i=0;i<500;i++){
	#pragma HLS unroll
		for(h=0; h<1;h++){
			for(w=0;w<1;w++){
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
