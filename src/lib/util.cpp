#include "util.h"
// #include "../custom/caffe_model_layer.h"


float* GET_INPUT_DATA(Layer l, int i, int j, int k) {
	switch (l.id) { 
		case 0:
			return (l.layer0 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 1:
			return (l.layer1 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 2:
			return (l.layer2 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 3:
			return (l.layer3 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 4:
			return (l.layer4 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 5:
			return (l.layer5 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 6:
			return (l.layer6 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 7:
			return (l.layer7 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
			break;
		case 8:
			return (l.layer8 + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
	} 


    // return l.input_data + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k);
}