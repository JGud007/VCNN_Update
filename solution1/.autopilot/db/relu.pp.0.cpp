# 1 "VCNN/src/lib/layers/relu.cpp"
# 1 "VCNN/src/lib/layers/relu.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "C:/Xilinx/Vivado/2018.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "C:/Xilinx/Vivado/2018.1/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "VCNN/src/lib/layers/relu.cpp" 2
# 19 "VCNN/src/lib/layers/relu.cpp"
# 1 "VCNN/src/lib/layers/layers.h" 1



# 1 "VCNN/src/lib/layers/../../custom/caffe_model_layer.h" 1


static int const nLayers = 9;
static float const dataScale= 0.00390625;
static int const nOutput = 10;
typedef enum {CONVOLUTION,POOLING_AVG,POOLING_MAX,RELU,INNERPRODUCT,SOFTMAX,RETURN_CALLBACK} LayerType;

typedef struct {
    int id;
    LayerType type;
# 20 "VCNN/src/lib/layers/../../custom/caffe_model_layer.h"
    int conv_filter_channels;
    int conv_filter_size;
    int conv_filter_num;
    int conv_stride;
    int conv_pad;


    int pl_kernel_size;
    int pl_stride;


    int ip_channel_num;
    int ip_output_num;


    int input_channel_num;
    int input_feature_map_height;
    int input_feature_map_width;

    float* input_data;
} Layer;






typedef struct {

  int id;

  float *conv_filter_weight;
  float *conv_bias;


  float *ip_weight;
  float *ip_bias;

} LayerWeight;


static int const nChannels = 1;
static int const imgWidth = 28;
static int const imgHeight = 28;
static int const nLayerTypes = 7;
extern float mean_image[1][28][28];




extern LayerWeight layers_weight[9];
extern Layer layers[10];
# 5 "VCNN/src/lib/layers/layers.h" 2

using namespace std;



typedef void (*Layer_f) (Layer current, LayerWeight cw, Layer next);



void Convolution(Layer current, LayerWeight cw, Layer next);
void PoolingAvg(Layer current, LayerWeight cw, Layer next);
void PoolingMax(Layer current, LayerWeight cw, Layer next);
void Relu(Layer current, LayerWeight cw, Layer next);
void InnerProduct(Layer current, LayerWeight cw, Layer next);
void Softmax(Layer current, LayerWeight cw, Layer next);
void ReturnCallback(Layer current, LayerWeight cw, Layer next);



static Layer_f layer_dict[nLayerTypes] = {
  Convolution,
  PoolingAvg,
  PoolingMax,
  Relu,
  InnerProduct,
  Softmax,
  ReturnCallback
};
# 20 "VCNN/src/lib/layers/relu.cpp" 2
# 1 "VCNN/src/lib/layers/../util.h" 1
# 21 "VCNN/src/lib/layers/relu.cpp" 2

void Relu(Layer current, LayerWeight cw, Layer next) {

 int inputs = current.input_channel_num;
 int height = current.input_feature_map_height;
 int width = current.input_feature_map_width;

 int i,h,w;
 for(i=0;i<inputs;i++){
  for(h=0; h<height;h++){
   for(w=0;w<width;w++){
    float data = *(current.input_data + (i)*(current.input_feature_map_height*current.input_feature_map_width) + (h)*current.input_feature_map_width + (w));
    if(data < 0){
     data = 0;
    }
    *(next.input_data + (i)*(next.input_feature_map_height*next.input_feature_map_width) + (h)*next.input_feature_map_width + (w)) = data;
   }
  }
 }
}
