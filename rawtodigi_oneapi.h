#ifndef RAWTODIGI_ONEAPI_H
#define RAWTODIGI_ONEAPI_H

#include <CL/sycl.hpp>

#include "pixelgpudetails.h"
#include "GPUSimpleVector.h"
#include "input.h"
#include "output.h"

namespace oneapi {
  void rawtodigi(const Input *input_d, Output *output_d,
                 const uint32_t wordCounter,
                 bool useQualityInfo, bool includeErrors, bool debug, cl::sycl::queue queue);
}

#endif  // RAWTODIGI_ONEAPI_H