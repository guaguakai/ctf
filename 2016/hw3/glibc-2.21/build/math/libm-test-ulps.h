/* This file is automatically generated
   from ../sysdeps/x86_64/fpu/libm-test-ulps with gen-libm-test.pl.
   Don't change it - change instead the master files.  */


/* Maximal error of functions.  */
static const struct ulp_data func_ulps[] =
  {
    { "acos", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "acos_downward", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "acos_tonearest", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "acos_towardzero", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "acos_upward", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "acosh", CHOOSE (0, 1, 0, 0, 1, 0) },
    { "acosh_downward", CHOOSE (2, 0, 1, 1, 0, 0) },
    { "acosh_towardzero", CHOOSE (2, 0, 1, 1, 0, 0) },
    { "acosh_upward", CHOOSE (1, 1, 0, 1, 0, 0) },
    { "asin_downward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "asin_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "asin_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "asinh", CHOOSE (1, 1, 1, 1, 0, 1) },
    { "asinh_downward", CHOOSE (3, 1, 2, 1, 1, 1) },
    { "asinh_towardzero", CHOOSE (2, 1, 1, 1, 1, 1) },
    { "asinh_upward", CHOOSE (2, 2, 1, 2, 1, 1) },
    { "atan2", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "atan2_downward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "atan2_towardzero", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "atan2_upward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "atan_downward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "atan_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "atan_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "atanh", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "atanh_downward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "atanh_towardzero", CHOOSE (2, 0, 1, 2, 0, 1) },
    { "atanh_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "carg_downward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "carg_towardzero", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "carg_upward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "cbrt", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "cbrt_downward", CHOOSE (1, 2, 1, 1, 2, 1) },
    { "cbrt_towardzero", CHOOSE (1, 2, 0, 1, 2, 0) },
    { "cbrt_upward", CHOOSE (1, 3, 1, 1, 3, 1) },
    { "cos", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "cos_downward", CHOOSE (2, 1, 0, 2, 1, 0) },
    { "cos_tonearest", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "cos_towardzero", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "cos_upward", CHOOSE (2, 1, 0, 2, 1, 0) },
    { "cosh", CHOOSE (2, 1, 1, 1, 1, 1) },
    { "cosh_downward", CHOOSE (3, 1, 1, 2, 1, 1) },
    { "cosh_tonearest", CHOOSE (2, 1, 1, 1, 1, 1) },
    { "cosh_towardzero", CHOOSE (2, 1, 1, 1, 1, 1) },
    { "cosh_upward", CHOOSE (3, 1, 2, 2, 1, 2) },
    { "erf", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "erf_downward", CHOOSE (0, 0, 1, 0, 0, 1) },
    { "erf_towardzero", CHOOSE (0, 0, 1, 0, 0, 1) },
    { "erf_upward", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "erfc", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "erfc_downward", CHOOSE (3, 1, 3, 3, 1, 3) },
    { "erfc_towardzero", CHOOSE (2, 1, 3, 2, 1, 3) },
    { "erfc_upward", CHOOSE (3, 2, 2, 3, 2, 2) },
    { "exp10", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "exp10_downward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "exp10_tonearest", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "exp10_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "exp10_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "exp_downward", CHOOSE (0, 1, 0, 0, 1, 0) },
    { "exp_towardzero", CHOOSE (0, 1, 0, 0, 1, 0) },
    { "exp_upward", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "expm1", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "expm1_downward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "expm1_tonearest", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "expm1_towardzero", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "expm1_upward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "gamma", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "gamma_downward", CHOOSE (3, 2, 1, 3, 2, 1) },
    { "gamma_towardzero", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "gamma_upward", CHOOSE (2, 1, 3, 2, 1, 3) },
    { "hypot", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "hypot_downward", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "hypot_towardzero", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "hypot_upward", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "j0", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "j0_downward", CHOOSE (4, 2, 4, 4, 2, 4) },
    { "j0_towardzero", CHOOSE (5, 3, 2, 5, 3, 2) },
    { "j0_upward", CHOOSE (4, 3, 2, 4, 3, 2) },
    { "j1", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "j1_downward", CHOOSE (4, 3, 3, 4, 3, 3) },
    { "j1_towardzero", CHOOSE (4, 3, 2, 4, 3, 2) },
    { "j1_upward", CHOOSE (3, 3, 5, 3, 3, 5) },
    { "jn", CHOOSE (4, 4, 4, 4, 4, 4) },
    { "lgamma", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "lgamma_downward", CHOOSE (3, 2, 1, 3, 2, 1) },
    { "lgamma_towardzero", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "lgamma_upward", CHOOSE (2, 1, 3, 2, 1, 3) },
    { "log", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "log10", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "log10_downward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "log10_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "log10_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "log1p", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "log1p_downward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "log1p_towardzero", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "log1p_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "log2_downward", CHOOSE (0, 2, 2, 0, 2, 2) },
    { "log2_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "log2_upward", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "log_downward", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "log_towardzero", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "log_upward", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "pow", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "pow10", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "pow10_downward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "pow10_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "pow10_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "pow_downward", CHOOSE (4, 1, 1, 4, 1, 1) },
    { "pow_tonearest", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "pow_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "pow_upward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "sin", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "sin_downward", CHOOSE (2, 1, 0, 2, 1, 0) },
    { "sin_tonearest", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "sin_towardzero", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "sin_upward", CHOOSE (2, 1, 0, 2, 1, 0) },
    { "sincos", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "sincos_downward", CHOOSE (2, 1, 0, 2, 1, 0) },
    { "sincos_towardzero", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "sincos_upward", CHOOSE (2, 1, 0, 2, 1, 0) },
    { "sinh", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "sinh_downward", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "sinh_tonearest", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "sinh_towardzero", CHOOSE (1, 1, 0, 1, 1, 0) },
    { "sinh_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "tan", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "tan_downward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "tan_tonearest", CHOOSE (1, 0, 0, 1, 0, 0) },
    { "tan_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "tan_upward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "tanh_downward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "tanh_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "tanh_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "tgamma", CHOOSE (4, 4, 3, 4, 4, 3) },
    { "y0", CHOOSE (1, 2, 1, 1, 2, 1) },
    { "y0_downward", CHOOSE (5, 3, 4, 5, 3, 4) },
    { "y0_towardzero", CHOOSE (5, 3, 3, 5, 3, 3) },
    { "y0_upward", CHOOSE (3, 3, 5, 3, 3, 5) },
    { "y1", CHOOSE (2, 3, 2, 2, 3, 2) },
    { "y1_downward", CHOOSE (7, 3, 7, 7, 3, 7) },
    { "y1_towardzero", CHOOSE (5, 3, 3, 5, 3, 3) },
    { "y1_upward", CHOOSE (7, 7, 5, 7, 7, 5) },
    { "yn", CHOOSE (4, 3, 3, 4, 3, 3) },
    { "yn_downward", CHOOSE (5, 3, 4, 5, 3, 4) },
    { "yn_towardzero", CHOOSE (5, 3, 3, 5, 3, 3) },
    { "yn_upward", CHOOSE (4, 4, 5, 4, 4, 5) },
  };
static const struct ulp_data func_real_ulps[] =
  {
    { "cacos", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "cacos_downward", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cacos_towardzero", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cacos_upward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "cacosh", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cacosh_downward", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "cacosh_towardzero", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "cacosh_upward", CHOOSE (5, 4, 4, 5, 4, 4) },
    { "casin", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "casin_downward", CHOOSE (2, 3, 1, 2, 3, 1) },
    { "casin_towardzero", CHOOSE (2, 3, 1, 2, 3, 1) },
    { "casin_upward", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "casinh", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "casinh_downward", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "casinh_towardzero", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "casinh_upward", CHOOSE (5, 4, 4, 5, 4, 4) },
    { "catan", CHOOSE (0, 0, 1, 0, 0, 1) },
    { "catan_downward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "catan_towardzero", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "catan_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "catanh", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "catanh_downward", CHOOSE (4, 2, 2, 4, 2, 2) },
    { "catanh_towardzero", CHOOSE (4, 2, 1, 4, 2, 1) },
    { "catanh_upward", CHOOSE (4, 4, 3, 4, 4, 3) },
    { "ccos", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "ccos_downward", CHOOSE (3, 1, 1, 3, 1, 1) },
    { "ccos_towardzero", CHOOSE (3, 1, 2, 3, 1, 2) },
    { "ccos_upward", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "ccosh", CHOOSE (0, 1, 1, 0, 1, 1) },
    { "ccosh_downward", CHOOSE (3, 1, 2, 3, 1, 2) },
    { "ccosh_towardzero", CHOOSE (3, 1, 3, 3, 1, 3) },
    { "ccosh_upward", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cexp", CHOOSE (1, 2, 1, 1, 2, 1) },
    { "clog", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "clog10", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "clog10_downward", CHOOSE (4, 3, 3, 4, 3, 3) },
    { "clog10_towardzero", CHOOSE (4, 3, 2, 4, 3, 2) },
    { "clog10_upward", CHOOSE (4, 4, 3, 4, 4, 3) },
    { "clog_downward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "clog_towardzero", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "clog_upward", CHOOSE (2, 2, 1, 2, 2, 1) },
    { "cpow", CHOOSE (3, 2, 5, 3, 2, 5) },
    { "cpow_downward", CHOOSE (7, 4, 8, 7, 4, 8) },
    { "cpow_towardzero", CHOOSE (7, 4, 8, 7, 4, 8) },
    { "cpow_upward", CHOOSE (2, 4, 1, 2, 4, 1) },
    { "csin", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "csin_downward", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "csin_towardzero", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "csin_upward", CHOOSE (3, 1, 3, 3, 1, 3) },
    { "csinh", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "csinh_downward", CHOOSE (3, 1, 2, 3, 1, 2) },
    { "csinh_towardzero", CHOOSE (3, 2, 2, 3, 2, 2) },
    { "csinh_upward", CHOOSE (3, 1, 3, 3, 1, 3) },
    { "csqrt", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "csqrt_downward", CHOOSE (3, 3, 3, 3, 3, 3) },
    { "csqrt_towardzero", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "csqrt_upward", CHOOSE (3, 3, 2, 3, 3, 2) },
    { "ctan", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "ctan_downward", CHOOSE (5, 6, 5, 5, 6, 5) },
    { "ctan_tonearest", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "ctan_towardzero", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "ctan_upward", CHOOSE (3, 2, 4, 3, 2, 4) },
    { "ctanh", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "ctanh_downward", CHOOSE (4, 4, 2, 4, 4, 2) },
    { "ctanh_tonearest", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "ctanh_towardzero", CHOOSE (4, 2, 2, 4, 2, 2) },
    { "ctanh_upward", CHOOSE (3, 2, 2, 3, 2, 2) },
  };
static const struct ulp_data func_imag_ulps[] =
  {
    { "cacos", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cacos_downward", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "cacos_towardzero", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "cacos_upward", CHOOSE (5, 4, 4, 5, 4, 4) },
    { "cacosh", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "cacosh_downward", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cacosh_towardzero", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "cacosh_upward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "casin", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "casin_downward", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "casin_towardzero", CHOOSE (5, 5, 3, 5, 5, 3) },
    { "casin_upward", CHOOSE (5, 4, 4, 5, 4, 4) },
    { "casinh", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "casinh_downward", CHOOSE (2, 3, 1, 2, 3, 1) },
    { "casinh_towardzero", CHOOSE (2, 3, 1, 2, 3, 1) },
    { "casinh_upward", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "catan", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "catan_downward", CHOOSE (4, 2, 2, 4, 2, 2) },
    { "catan_towardzero", CHOOSE (4, 2, 1, 4, 2, 1) },
    { "catan_upward", CHOOSE (3, 3, 3, 3, 3, 3) },
    { "catanh", CHOOSE (0, 0, 1, 0, 0, 1) },
    { "catanh_downward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "catanh_towardzero", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "catanh_upward", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "ccos", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "ccos_downward", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "ccos_towardzero", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "ccos_upward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "ccosh", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "ccosh_downward", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "ccosh_towardzero", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "ccosh_upward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "cexp", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "clog", CHOOSE (1, 0, 1, 1, 0, 1) },
    { "clog10", CHOOSE (2, 1, 1, 2, 1, 1) },
    { "clog10_downward", CHOOSE (2, 3, 2, 2, 3, 2) },
    { "clog10_towardzero", CHOOSE (2, 3, 2, 2, 3, 2) },
    { "clog10_upward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "clog_downward", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "clog_towardzero", CHOOSE (1, 1, 2, 1, 1, 2) },
    { "clog_upward", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "cpow", CHOOSE (4, 0, 2, 4, 0, 2) },
    { "cpow_downward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "cpow_towardzero", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "cpow_upward", CHOOSE (2, 1, 2, 2, 1, 2) },
    { "csin", CHOOSE (0, 0, 0, 0, 0, 0) },
    { "csin_downward", CHOOSE (3, 1, 2, 3, 1, 2) },
    { "csin_towardzero", CHOOSE (3, 2, 2, 3, 2, 2) },
    { "csin_upward", CHOOSE (3, 1, 3, 3, 1, 3) },
    { "csinh", CHOOSE (0, 1, 1, 0, 1, 1) },
    { "csinh_downward", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "csinh_towardzero", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "csinh_upward", CHOOSE (3, 2, 3, 3, 2, 3) },
    { "csqrt", CHOOSE (1, 1, 1, 1, 1, 1) },
    { "csqrt_downward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "csqrt_towardzero", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "csqrt_upward", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "ctan", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "ctan_downward", CHOOSE (4, 2, 2, 4, 2, 2) },
    { "ctan_tonearest", CHOOSE (1, 2, 2, 1, 2, 2) },
    { "ctan_towardzero", CHOOSE (4, 2, 2, 4, 2, 2) },
    { "ctan_upward", CHOOSE (3, 2, 1, 3, 2, 1) },
    { "ctanh", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "ctanh_downward", CHOOSE (4, 6, 5, 4, 6, 5) },
    { "ctanh_tonearest", CHOOSE (2, 2, 2, 2, 2, 2) },
    { "ctanh_towardzero", CHOOSE (3, 5, 3, 3, 5, 3) },
    { "ctanh_upward", CHOOSE (3, 2, 3, 3, 2, 3) },
  };