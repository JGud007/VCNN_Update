#include "layers.h"
#include "../util.h"

void Relu(Layer current, LayerWeight cw, Layer next) {

	int inputs = current.input_channel_num;
	int height = current.input_feature_map_height;
	int width = current.input_feature_map_width;

	int i,h,w;
	for(i=0;i<inputs;i++){
		for(h=0; h<height;h++){
			for(w=0;w<width;w++){
				float data = GET_INPUT_DATA(current,i,h,w);
				if(data < 0){
					data = 0;
				}
				GET_INPUT_DATA(next,i,h,w) = data;
			}
		}
	}
}