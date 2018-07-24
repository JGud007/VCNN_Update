#ifndef CAFFE_LAYER_DEF_H
#define CAFFE_LAYER_DEF_H
static int const nLayers = 4;
static float const dataScale= 0.00390625;
static int const nOutput = 10;
typedef enum {CONVOLUTION,POOLING_AVG,POOLING_MAX,RELU,INNERPRODUCT,SOFTMAX,RETURN_CALLBACK} LayerType;

typedef  struct {
    int id;
    LayerType type;
    /*
     # Meta Data
    All meta data for every type of layer are put here, for easy initialization. HLS C don't allow dynamic memory operation.
    Hopefully the complier will optimize the unused variable for us.(It should be able to.)
    */
    /* for convolutional layer
     the conv layer here won't take care about padding, since we gonna use pixel streaming,
     FPGA is best for streaming processing, fast and efficient*/

    int conv_filter_channels;
    int conv_filter_size;
    int conv_filter_num;
    int conv_stride;
    int conv_pad;

    /*for pooling layer*/
    int pl_kernel_size;
    int pl_stride;

    /*for inner product layer*/
    int ip_channel_num;
    int ip_output_num;


    int input_channel_num;
    int input_feature_map_height;
    int input_feature_map_width;

    float* input_data;
} Layer;

static int const nChannels = 1;
static int const imgWidth = 28;
static int const imgHeight = 28;
static int const nLayerTypes = 7;
extern float mean_image[1][28][28];

#define MEAN_IMAGE_TYPE float
#define INPUT_IMAGE_TYPE  int
    
extern LayerWeight  layers_weight[4];
extern Layer  layers[5];
#endif /* CAFFE_LAYER_DEF_H */
