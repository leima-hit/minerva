#pragma once
#include <vector>
#include <cstring>

#define ADD_GPU_IMPLEMENTED 0
#define SUB_GPU_IMPLEMENTED 0
#define MUL_GPU_IMPLEMENTED 0
#define DIV_GPU_IMPLEMENTED 0
//...

namespace minerva {

struct DeviceInfo {
  std::vector<std::string> CPUList; // for now # of CPU should be 1, which is local
  std::vector<int> GPUList; // GPUs assigned to this "device", suitable for CUDA call cudaSetDevice
  std::vector<int> numStreams; // # of streams available on each GPU
};

}
