#include "util.h"

float* GET_INPUT_DATA(Layer l, int i, int j, int k, float *layerAddress) {
    return (layerAddress + (i)*(l.input_feature_map_height*l.input_feature_map_width) + (j)*l.input_feature_map_width + (k));
}
