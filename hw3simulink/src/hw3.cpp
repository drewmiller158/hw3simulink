/*
 * hw3.cpp
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

#include "hw3.h"
#include "rtwtypes.h"
#include "hw3_types.h"
#include "hw3_private.h"
#include <string.h>

/* Block signals (default storage) */
B_hw3_T hw3_B;

/* Block states (default storage) */
DW_hw3_T hw3_DW;

/* Real-time model */
RT_MODEL_hw3_T hw3_M_ = RT_MODEL_hw3_T();
RT_MODEL_hw3_T *const hw3_M = &hw3_M_;

/*
 * System initialize for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void hw3_EnabledSubsystem_Init(B_EnabledSubsystem_hw3_T *localB,
  P_EnabledSubsystem_hw3_T *localP)
{
  /* SystemInitialize for SignalConversion generated from: '<S7>/In1' incorporates:
   *  Outport: '<S7>/Out1'
   */
  localB->In1 = localP->Out1_Y0;
}

/*
 * Output and update for enable system:
 *    '<S4>/Enabled Subsystem'
 *    '<S5>/Enabled Subsystem'
 *    '<S6>/Enabled Subsystem'
 */
void hw3_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_hw3_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_hw3_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  if (rtu_Enable) {
    /* SignalConversion generated from: '<S7>/In1' */
    localB->In1 = *rtu_In1;
  }

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
}

/* Model step function */
void hw3_step(void)
{
  SL_Bus_hw3_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_hw3_std_msgs_Float64 tmp;
  real_T vel_ego;
  boolean_T b_varargout_1;

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe' */
  /* MATLABSystem: '<S4>/SourceBlock' */
  b_varargout_1 = Sub_hw3_9.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S4>/SourceBlock' */
  hw3_EnabledSubsystem(b_varargout_1, &tmp, &hw3_B.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe2' */
  /* MATLABSystem: '<S6>/SourceBlock' */
  b_varargout_1 = Sub_hw3_11.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S6>/SourceBlock' */
  hw3_EnabledSubsystem(b_varargout_1, &tmp, &hw3_B.EnabledSubsystem_b);

  /* End of Outputs for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe2' */

  /* Outputs for Atomic SubSystem: '<Root>/Subscribe1' */
  /* MATLABSystem: '<S5>/SourceBlock' */
  b_varargout_1 = Sub_hw3_10.getLatestMessage(&tmp);

  /* Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  /* Start for MATLABSystem: '<S5>/SourceBlock' */
  hw3_EnabledSubsystem(b_varargout_1, &tmp, &hw3_B.EnabledSubsystem_o);

  /* End of Outputs for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of Outputs for SubSystem: '<Root>/Subscribe1' */

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  vel_ego = hw3_B.EnabledSubsystem.In1.Data;
  if (hw3_B.EnabledSubsystem_b.In1.Data < 0.0) {
    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = 0.0;
  } else {
    if ((hw3_B.EnabledSubsystem.In1.Data > -0.01) &&
        (hw3_B.EnabledSubsystem.In1.Data < 0.01)) {
      vel_ego = 0.01;
    }

    /* BusAssignment: '<Root>/Bus Assignment' */
    rtb_BusAssignment.Data = (hw3_B.EnabledSubsystem_b.In1.Data / vel_ego - 2.0)
      * 0.25 + hw3_B.EnabledSubsystem_o.In1.Data;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* Outputs for Atomic SubSystem: '<Root>/Publish' */
  /* MATLABSystem: '<S3>/SinkBlock' */
  Pub_hw3_8.publish(&rtb_BusAssignment);

  /* End of Outputs for SubSystem: '<Root>/Publish' */
}

/* Model initialize function */
void hw3_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) memset((static_cast<void *>(&hw3_B)), 0,
                sizeof(B_hw3_T));

  /* states (dwork) */
  (void) memset(static_cast<void *>(&hw3_DW), 0,
                sizeof(DW_hw3_T));

  {
    char_T b_zeroDelimTopic[17];
    char_T b_zeroDelimTopic_0[11];
    char_T b_zeroDelimTopic_1[9];
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_4[9] = "/rel_vel";
    static const char_T b_zeroDelimTopic_5[11] = "/cmd_accel";

    /* Start for Atomic SubSystem: '<Root>/Subscribe' */
    /* Start for MATLABSystem: '<S4>/SourceBlock' */
    hw3_DW.obj_d.matlabCodegenIsDeleted = false;
    hw3_DW.objisempty_l = true;
    hw3_DW.obj_d.isInitialized = 1;
    for (int32_T i = 0; i < 17; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_hw3_9.createSubscriber(&b_zeroDelimTopic[0], 1);
    hw3_DW.obj_d.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S4>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe2' */
    /* Start for MATLABSystem: '<S6>/SourceBlock' */
    hw3_DW.obj_o.matlabCodegenIsDeleted = false;
    hw3_DW.objisempty = true;
    hw3_DW.obj_o.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_hw3_11.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    hw3_DW.obj_o.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S6>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe2' */

    /* Start for Atomic SubSystem: '<Root>/Subscribe1' */
    /* Start for MATLABSystem: '<S5>/SourceBlock' */
    hw3_DW.obj_n.matlabCodegenIsDeleted = false;
    hw3_DW.objisempty_k = true;
    hw3_DW.obj_n.isInitialized = 1;
    for (int32_T i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_4[i];
    }

    Sub_hw3_10.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    hw3_DW.obj_n.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/SourceBlock' */
    /* End of Start for SubSystem: '<Root>/Subscribe1' */

    /* Start for Atomic SubSystem: '<Root>/Publish' */
    /* Start for MATLABSystem: '<S3>/SinkBlock' */
    hw3_DW.obj.matlabCodegenIsDeleted = false;
    hw3_DW.objisempty_lf = true;
    hw3_DW.obj.isInitialized = 1;
    for (int32_T i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_5[i];
    }

    Pub_hw3_8.createPublisher(&b_zeroDelimTopic_0[0], 1);
    hw3_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S3>/SinkBlock' */
    /* End of Start for SubSystem: '<Root>/Publish' */
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem' */
  hw3_EnabledSubsystem_Init(&hw3_B.EnabledSubsystem, &hw3_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2' */
  /* SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem' */
  hw3_EnabledSubsystem_Init(&hw3_B.EnabledSubsystem_b, &hw3_P.EnabledSubsystem_b);

  /* End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe2' */

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1' */
  /* SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem' */
  hw3_EnabledSubsystem_Init(&hw3_B.EnabledSubsystem_o, &hw3_P.EnabledSubsystem_o);

  /* End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Subscribe1' */
}

/* Model terminate function */
void hw3_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Subscribe' */
  /* Terminate for MATLABSystem: '<S4>/SourceBlock' */
  if (!hw3_DW.obj_d.matlabCodegenIsDeleted) {
    hw3_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe2' */
  /* Terminate for MATLABSystem: '<S6>/SourceBlock' */
  if (!hw3_DW.obj_o.matlabCodegenIsDeleted) {
    hw3_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe2' */

  /* Terminate for Atomic SubSystem: '<Root>/Subscribe1' */
  /* Terminate for MATLABSystem: '<S5>/SourceBlock' */
  if (!hw3_DW.obj_n.matlabCodegenIsDeleted) {
    hw3_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S5>/SourceBlock' */
  /* End of Terminate for SubSystem: '<Root>/Subscribe1' */

  /* Terminate for Atomic SubSystem: '<Root>/Publish' */
  /* Terminate for MATLABSystem: '<S3>/SinkBlock' */
  if (!hw3_DW.obj.matlabCodegenIsDeleted) {
    hw3_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S3>/SinkBlock' */
  /* End of Terminate for SubSystem: '<Root>/Publish' */
}
