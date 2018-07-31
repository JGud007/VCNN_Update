#ifndef VCNN_LAYERS_H
#define VCNN_LAYERS_H

#include "../../custom/caffe_model_layer.h"

void Convolution(Layer current, Layer next, float *layer0, float *layer1);
void Convolution2(Layer current, Layer next, float *layer0, float *layer1);
void PoolingMax(Layer current, Layer next, float *layer0, float *layer1);
void PoolingMax2(Layer current, Layer next, float *layer0, float *layer1);
void Relu(Layer current, Layer next, float *layer0, float *layer1);
void InnerProduct(Layer current, Layer next, float *layer0, float *layer1);
void InnerProduct2(Layer current, Layer next, float *layer0, float *layer1);
void Softmax(Layer current, Layer next, float *layer0, float *layer1);

#endif
