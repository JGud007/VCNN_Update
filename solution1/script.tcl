############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project VCNN_Update
set_top neural_net
add_files VCNN_Update/src/lib/util.h
add_files VCNN_Update/src/lib/util.cpp
add_files VCNN_Update/src/lib/layers/relu.cpp
add_files VCNN_Update/src/lib/layers/pooling.cpp
add_files VCNN_Update/src/lib/main.cpp
add_files VCNN_Update/src/lib/layers/layers.h
add_files VCNN_Update/src/lib/layers/inner_product2.cpp
add_files VCNN_Update/src/lib/layers/inner_product.cpp
add_files VCNN_Update/src/custom/custom.h
add_files VCNN_Update/src/lib/layers/convolution2.cpp
add_files VCNN_Update/src/lib/layers/convolution.cpp
add_files VCNN_Update/src/custom/caffe_model_layer.h
add_files VCNN_Update/src/custom/caffe_model_layer.cpp
add_files VCNN_Update/src/lib/layers/Softmax.cpp
add_files -tb VCNN_Update/src/custom/test.cpp -cflags "-Wno-unknown-pragmas"
add_files -tb VCNN_Update/src/custom/mnist/mnist_data.h -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xcvu9p-flga2104-2l-e}
create_clock -period 10 -name default
#source "./VCNN_Update/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -flow impl -rtl vhdl -format ip_catalog
