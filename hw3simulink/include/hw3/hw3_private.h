/*
 * hw3_private.h
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

#ifndef hw3_private_h_
#define hw3_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "hw3.h"
#include "hw3_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void hw3_EnabledSubsystem_Init(B_EnabledSubsystem_hw3_T *localB,
  P_EnabledSubsystem_hw3_T *localP);
extern void hw3_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_hw3_std_msgs_Float64 *rtu_In1, B_EnabledSubsystem_hw3_T *localB);

#endif                                 /* hw3_private_h_ */
