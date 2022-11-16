#ifndef HOST_DEVICE_H
#define HOST_DEVICE_H

#ifdef __cplusplus
using mat4 = nvmath::mat4f;
using vec4 = nvmath::vec4f;
using vec3 = nvmath::vec3f;
#endif  // __cplusplus

#include "nvvkhl/shaders/dh_lighting.h"

struct PushConstant
{
  int frame;       // For RTX
  int maxDepth;    // For RTX
  int maxSamples;  // For RTX
  int materialId;  // For raster
  int instanceId;
};


#define MAX_NB_LIGHTS 1
#define GRID_SIZE 16

struct FrameInfo
{
  mat4  proj;
  mat4  view;
  mat4  projInv;
  mat4  viewInv;
  Light light[MAX_NB_LIGHTS];
  vec4  clearColor;
  vec3  camPos;
  int   nbLights;
  float envRotation;
  float maxLuminance;
};


#endif  // HOST_DEVICE_H
