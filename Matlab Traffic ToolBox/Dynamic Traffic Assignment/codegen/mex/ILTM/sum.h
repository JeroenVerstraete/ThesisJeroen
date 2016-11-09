/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef __SUM_H__
#define __SUM_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "ILTM_types.h"

/* Function Declarations */
extern real_T b_sum(const emlrtStack *sp, const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux b_sum value [8087];

#endif

extern void c_sum(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);
extern real_T d_sum(const emlrtStack *sp, const emxArray_boolean_T *x);

#ifdef __WATCOMC__

#pragma aux d_sum value [8087];

#endif

extern real_T sum(const emlrtStack *sp, const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux sum value [8087];

#endif
#endif

/* End of code generation (sum.h) */
