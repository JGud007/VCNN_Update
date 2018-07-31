#include "layers.h"
#include "../util.h"
#include "../../custom/custom.h"


float conv_filter_weight[20*1*5*5] = {0.075086, 0.21285, 0.294989, -0.093877, 0.098303, 0.293782, 0.207722, -0.009876, -0.337228, 0.119972, 0.130475, -0.015433, -0.265942, -0.160793, 0.205039, 0.236356, 0.206696, -0.309913, -0.065267, -0.135538, 0.243747, 0.252394, -0.258249, 0.000308, -0.058548, -0.234398, -0.226132, 0.072005, -0.266494, 0.165509, -0.331372, -0.290538, -0.237183, -0.180851, 0.082, -0.103875, -0.276211, -0.05842, 0.216243, -0.01721, 0.097497, 0.02206, 0.302774, 0.186893, 0.058735, 0.240703, 0.143818, 0.220799, 0.314954, 0.279105, -0.074773, -0.287823, 0.038676, -0.271468, -0.242501, -0.020949, -0.229891, -0.038106, -0.049567, 0.11201, 0.163293, -0.044879, 0.156446, -0.266129, -0.06624, 0.221916, -0.146276, 0.198284, -0.261931, 0.189179, 0.205598, 0.004757, -0.288469, 0.04454, 0.162552, -0.193945, -0.284296, 0.31441, 0.254013, 0.131192, -0.259218, 0.318965, 0.400877, 0.138765, -0.044969, 0.164291, 0.446054, -0.101983, -0.018143, -0.326125, 0.157748, 0.179757, -0.072967, -0.357012, -0.097707, 0.068179, -0.242224, -0.006646, -0.205172, 0.080111, 0.089507, -0.108316, -0.279475, -0.334838, -0.068355, -0.17959, -0.395522, -0.092826, -0.256009, 0.178043, -0.350397, -0.159359, -0.031724, 0.158457, -0.144882, -0.277872, 0.199664, 0.013999, -0.0817, 0.063256, 0.236412, 0.007585, -0.047874, 0.084813, 0.311772, -0.168681, 0.051129, -0.124407, -0.231037, 0.060407, -0.002859, -0.257296, -0.373044, -0.017266, -0.165708, -0.238848, -0.225306, -0.214146, 0.062745, -0.282769, -0.079436, -0.198611, -0.050141, -0.02963, 0.023928, 0.190943, 0.148188, 0.290742, -0.047002, -0.215606, -0.100966, -0.11885, 0.388262, 0.433212, 0.267472, 0.308587, -0.140282, 0.269764, 0.193265, -0.018584, -0.257116, 0.048547, -0.3782, -0.25801, -0.317685, -0.341527, -0.219403, -0.425443, -0.375096, -0.033763, -0.103018, 0.041952, -0.083625, 0.080709, 0.179914, 0.054746, 0.164069, -0.00158, 0.018752, -0.140122, -0.286988, 0.114931, 0.065009, 0.320973, 0.029493, -0.206497, 0.00565, 0.377281, 0.475648, 0.136471, 0.003969, -0.019095, 0.370073, 0.284891, -0.209382, 0.136731, 0.373309, 0.135986, 0.129509, -0.201009, -0.107667, 0.119497, 0.365164, 0.339023, 0.027032, -0.310543, 0.043994, -0.150905, 0.147672, 0.038856, -0.295021, -0.333506, -0.249663, -0.370589, -0.339488, 0.151489, -0.233621, -0.076482, -0.088381, 0.110547, 0.238509, 0.087304, 0.005541, 0.116777, 0.256417, 0.231234, 0.211573, 0.128782, -0.284653, 0.042134, 0.033544, 0.231262, 0.425652, 0.127551, -0.09478, 0.163861, 0.087343, 0.350412, 0.187018, 0.27353, -0.151401, 0.21582, 0.019741, 0.352384, 0.051782, -0.237748, -0.189403, 0.145795, -0.121062, 0.241935, -0.134967, 0.126461, 0.091811, -0.281468, 0.070583, 0.091595, 0.03518, -0.042535, 0.06662, 0.25811, -0.283437, -0.15809, -0.143139, -0.025158, 0.34523, -0.10834, 0.070395, 0.100739, 0.20576, 0.308621, 0.132786, 0.285304, 0.109754, 0.261461, -0.125724, -0.280807, 0.151403, 0.109522, -0.060498, 0.062884, -0.326556, -0.053474, 0.36134, 0.307765, -0.203175, -0.103077, 0.186867, -0.033, -0.042062, -0.079431, -0.076532, -0.150579, -0.248639, -0.13885, 0.250306, -0.066807, -0.201764, 0.189963, 0.285853, 0.144361, 0.185374, 0.11041, 0.329585, 0.228447, 0.316557, 0.054476, 0.056783, 0.146199, 0.084676, -0.027814, -0.315078, -0.331311, -0.312567, -0.077904, 0.132915, -0.201831, 0.046026, -0.279537, -0.229286, -0.222683, -0.003258, -0.155931, 0.121958, -0.042511, 0.008027, -0.283073, -0.340224, -0.369793, -0.238198, -0.390743, 0.177891, -0.281347, -0.454076, -0.339573, -0.25013, 0.351676, 0.01996, 0.144663, 0.107345, 0.254635, 0.487818, 0.628506, 0.575738, 0.328576, 0.336214, -0.07965, 0.046213, 0.236313, 0.258658, 0.076413, 0.340212, 0.118729, 0.131734, 0.008326, -0.134633, -0.035237, 0.253209, 0.218975, 0.509634, 0.403535, -0.126072, 0.290278, 0.285474, 0.183068, 0.387419, -0.33282, -0.414584, -0.366456, -0.157006, 0.085062, -0.255432, -0.256928, -0.361496, -0.406009, -0.323197, -0.035482, 0.312074, 0.095776, 0.10845, 0.189142, -0.163928, 0.070338, 0.378212, 0.24472, 0.485222, -0.156269, -0.130992, 0.051037, 0.193353, 0.159176, 0.165076, -0.048595, -0.148194, -0.209712, -0.399996, -0.176603, -0.243111, -0.457849, -0.442917, 0.045398, -0.101495, 0.208913, 0.151693, 0.161354, -0.2962, -0.175318, 0.412097, 0.229526, 0.023905, -0.24511, 0.189895, 0.332175, 0.202383, -0.031897, 0.121734, 0.053819, 0.503258, 0.406909, 0.270333, -0.213466, 0.026115, 0.310099, 0.078728, -0.152014, -0.346291, 0.232515, 0.357098, -0.102891, -0.066489, -0.235702, 0.242741, 0.058943, -0.223569, -0.328294, -0.154015, 0.021458, 0.014943, -0.335606, -0.113995, -0.43967, -0.000422, -0.279268, -0.360671, -0.36382, -0.319217, 0.119138, -0.025519, -0.356086, -0.323967, -0.236944, -0.181663, 0.023893, -0.12731, -0.247985, -0.262861, 0.063304, -0.037038, -0.126561, 0.041969, -0.215809, 0.05032, 0.151322, -0.097355, -0.202635, 0.204868, -0.109634, 0.325035, 0.019003, -0.165155, 0.002733, -0.229677, 0.048622, 0.060547, 0.058428, 0.113615, -0.125564, -0.136579, 0.008202, -0.048765, 0.139105, -0.244556, -0.053739, -0.007554, -0.085241, 0.452921, -0.117815, -0.381992, -0.183735, 0.096437, 0.450776, 0.002427, -0.440406, 0.08322, 0.375457, 0.357556, -0.28632, -0.291771, 0.246667, 0.178238, 0.369939};
float conv_bias[20] = {-0.080922, -0.054016, 0.010864, -0.078121, -0.011839, 0.072157, -0.137894, -0.161596, -0.032325, -0.01468, -0.258716, -0.154862, 0.140349, -0.3088, -0.065761, 0.025168, -0.126911, 0.24899, -0.044372, 0.133308}; //conv_bias

inline float conv3d1(Layer current, int fn, int ksize, int channels, int h, int w, float *layer0){
	float r = 0;
	int offset = int(ksize/2);
	int karea = ksize*ksize;
	for (int c = 0; c<channels; c++){
		for (int i = -offset; i < offset+1; i++){
			for (int j = -offset; j<offset+1; j++)			{
				#pragma HLS loop_flatten
				float kernel_v = conv_filter_weight[c*(karea) + (offset+i)*ksize + (offset+j) + fn];
				float image_v = *(GET_INPUT_DATA(current, c, h+i, w+j, layer0));

				r+= kernel_v * image_v;
			}
		}
	}
	return r;
}

void Convolution(Layer current, Layer next, float *layer0, float *layer1){
	#pragma HLS DATAFLOW

	int ksize = 5;
	int fnum = 20;
	int stride = 1;
	int pad = 0;
	int channels = 1;
	int offset_idx = int(ksize/2) - pad;
	int height = 28-offset_idx;
	int width = 28-offset_idx;
	int filterSize = ksize*ksize*channels;

	for (int fn = 0; fn < fnum; fn++){
		#pragma HLS unroll
		for(int h = offset_idx, hc = 0; h < height; h+=stride, hc++){
			for(int w = offset_idx, wc = 0; w < width; w+=stride, wc++){
				#pragma HLS loop_flatten
				float temp = conv3d1(current, fn*filterSize, ksize, channels, h, w, layer0); //need change here
				*(GET_INPUT_DATA(next,fn,hc,wc,layer1)) = temp+conv_bias[fn];
			}
		}
	}
}
