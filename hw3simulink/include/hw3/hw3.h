/*
 * hw3.h
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

#ifndef hw3_h_
#define hw3_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "hw3_types.h"
#include <string.h>
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_hw3_T {
  SL_Bus_hw3_std_msgs_Float64 In1;     /* '<S7>/In1' */
};

/* Block signals (default storage) */
struct B_hw3_T {
  B_EnabledSubsystem_hw3_T EnabledSubsystem_b;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_hw3_T EnabledSubsystem_o;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_hw3_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_hw3_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_o;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_d;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_k;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_lf;             /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_hw3_T_ {
  SL_Bus_hw3_std_msgs_Float64 Out1_Y0; /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S7>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_hw3_T_ {
  SL_Bus_hw3_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                              * Referenced by: '<S1>/Constant'
                                              */
  SL_Bus_hw3_std_msgs_Float64 Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                * Referenced by: '<S4>/Constant'
                                                */
  SL_Bus_hw3_std_msgs_Float64 Constant_Value_n;/* Computed Parameter: Constant_Value_n
                                                * Referenced by: '<S5>/Constant'
                                                */
  SL_Bus_hw3_std_msgs_Float64 Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                * Referenced by: '<S6>/Constant'
                                                */
  P_EnabledSubsystem_hw3_T EnabledSubsystem_b;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_hw3_T EnabledSubsystem_o;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_hw3_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_hw3_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_hw3_T hw3_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_hw3_T hw3_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_hw3_T hw3_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void hw3_initialize(void);
  extern void hw3_step(void);
  extern void hw3_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_hw3_T *const hw3_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'hw3'
 * '<S1>'   : 'hw3/Blank Message'
 * '<S2>'   : 'hw3/MATLAB Function1'
 * '<S3>'   : 'hw3/Publish'
 * '<S4>'   : 'hw3/Subscribe'
 * '<S5>'   : 'hw3/Subscribe1'
 * '<S6>'   : 'hw3/Subscribe2'
 * '<S7>'   : 'hw3/Subscribe/Enabled Subsystem'
 * '<S8>'   : 'hw3/Subscribe1/Enabled Subsystem'
 * '<S9>'   : 'hw3/Subscribe2/Enabled Subsystem'
 */
#endif                                 /* hw3_h_ */
