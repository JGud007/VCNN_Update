#ifndef VCNN_LAYERS_H
#define VCNN_LAYERS_H

#include "../../custom/caffe_model_layer.h"

using namespace std;



typedef void (*Layer_f) (Layer current, Layer next);

//you must take layer weight as input parameter, because they
//may in the external memory
void Convolution(Layer current, Layer next);
void Convolution2(Layer current, Layer next);
void PoolingMax(Layer current, Layer next);
void Relu(Layer current, Layer next);
void InnerProduct(Layer current, Layer next);
void InnerProduct2(Layer current, Layer next);
void Softmax(Layer current, Layer next);
void ReturnCallback(Layer current, Layer next);

//you don't need mean image here, just substract them in the main
// function
static Layer_f layer_dict[nLayerTypes] = {
		Convolution,
		Convolution2,
		PoolingMax,
		Relu,
		InnerProduct,
		InnerProduct2,
		Softmax,
		ReturnCallback
};


#endif
