//
// File: ohdjhlfcnohdhdba_xscal.cpp
//
// Code generated for Simulink model 'est_estimator'.
//
// Model version                  : 1.1142
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Tue May  1 11:58:17 2018
//
#include "rtwtypes.h"
#include "ohdjhlfcnohdhdba_xscal.h"

// Function for MATLAB Function: '<S24>/compute_of_global_points'
void ohdjhlfcnohdhdba_xscal(int32_T n, real32_T a, real32_T x_data[], int32_T
  ix0)
{
  int32_T b;
  int32_T k;
  b = (int32_T)((int32_T)(ix0 + n) - 1);
  for (k = ix0; k <= b; k++) {
    x_data[(int32_T)(k - 1)] *= a;
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
