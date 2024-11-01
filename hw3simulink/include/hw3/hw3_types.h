/*
 * hw3_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "hw3".
 *
 * Model version              : 1.2
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Thu Oct 31 09:59:00 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef hw3_types_h_
#define hw3_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_hw3_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_hw3_std_msgs_Float64_

struct SL_Bus_hw3_std_msgs_Float64
{
  real_T Data;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_P_T */

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slroscpp_internal_block_S_T */

/* Parameters for system: '<S4>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_hw3_T_ P_EnabledSubsystem_hw3_T;

/* Parameters (default storage) */
typedef struct P_hw3_T_ P_hw3_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_hw3_T RT_MODEL_hw3_T;

#endif                                 /* hw3_types_h_ */
