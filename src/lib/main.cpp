#include "./layers/layers.h"
#include "../custom/caffe_model_layer.h"
#include "util.h"
#include "../custom/custom.h"

void neural_net(MEAN_IMAGE_TYPE mean_image[nChannels][imgHeight][imgWidth], INPUT_IMAGE_TYPE input_image[nChannels][imgHeight][imgWidth], int* result){
#pragma HLS_DATAFLOW
	float layer0[784] = {0};
    float layer1[11520] = {0};
    float layer2[2880] = {0};
    float layer3[3200] = {0};
    float layer4[800] = {0};
    float layer5[500] = {0};
    float layer6[500] = {0};
    float layer7[10] = {0};
    float layer8[10] = {0};
    float layer9[10] = {0};


	for(int i = 0; i<nChannels; i++){
		for(int j = 0; j<imgHeight; j++){
			for(int k = 0; k<imgWidth; k++){
				float temp =  (input_image[i][j][k] - mean_image[i][j][k]) * dataScale;
				*GET_INPUT_DATA(layers[0], i,j,k,&layer0[0]) = temp;
			}
		}
	}

	Convolution(layers[0], layers[1], &layer0[0], &layer1[0]);
	PoolingMax(layers[1], layers[2], &layer1[0], &layer2[0]);
	Convolution2(layers[2], layers[3], &layer2[0], &layer3[0]);
	PoolingMax2(layers[3], layers[4], &layer3[0], &layer4[0]);
	InnerProduct(layers[4], layers[5], &layer4[0], &layer5[0]);
	Relu(layers[5], layers[6], &layer5[0], &layer6[0]);
	InnerProduct2(layers[6], layers[7], &layer6[0], &layer7[0]);
	Softmax(layers[7], layers[8], &layer7[0], &layer8[0]);

	float max_val = -10000;
	int max_idx = -1;
	for(int i = 0;i<nOutput;i++){
		if (*(&layer8[0]+i) > max_val) {
			max_idx = i;
			max_val = *(&layer8[0]+i);
		}
	}
	*result = max_idx;

}
