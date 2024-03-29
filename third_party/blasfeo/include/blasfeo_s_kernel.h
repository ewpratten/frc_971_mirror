/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016-2017 by Gianluca Frison.                                                     *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* HPMPC is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPMPC is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPMPC; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                          gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/



#ifdef __cplusplus
extern "C" {
#endif

//
// lib8
//

// 24x4
void kernel_sgemm_nt_24x4_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_nt_24x4_vs_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_sgemm_nt_24x4_gen_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_sgemm_nn_24x4_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_nn_24x4_vs_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_sgemm_nn_24x4_gen_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_ssyrk_nt_l_24x4_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_ssyrk_nt_l_24x4_vs_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_ssyrk_nt_l_20x4_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_ssyrk_nt_l_20x4_vs_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_spotrf_nt_l_24x4_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_spotrf_nt_l_24x4_vs_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_spotrf_nt_l_20x4_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_spotrf_nt_l_20x4_vs_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_strsm_nt_rl_inv_24x4_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E);
void kernel_strsm_nt_rl_inv_24x4_vs_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E, int km, int kn);
void kernel_sgemm_strsm_nt_rl_inv_24x4_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E);
void kernel_sgemm_strsm_nt_rl_inv_24x4_vs_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_20x4_vs_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_20x4_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_ssyrk_spotrf_nt_l_24x4_vs_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_24x4_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_strmm_nn_rl_24x4_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *D, int sdd);
void kernel_strmm_nn_rl_24x4_vs_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *D, int sdd, int km, int kn);

// 16x4
void kernel_sgemm_nt_16x4_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_nt_16x4_vs_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_sgemm_nt_16x4_gen_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_sgemm_nn_16x4_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_nn_16x4_vs_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_sgemm_nn_16x4_gen_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_ssyrk_nt_l_16x4_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_ssyrk_nt_l_16x4_vs_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_ssyrk_nt_l_12x4_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_ssyrk_nt_l_12x4_vs_lib8(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd, int km, int kn);
void kernel_spotrf_nt_l_16x4_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_spotrf_nt_l_16x4_vs_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_spotrf_nt_l_12x4_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_spotrf_nt_l_12x4_vs_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_strsm_nt_rl_inv_16x4_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E);
void kernel_strsm_nt_rl_inv_16x4_vs_lib8(int k, float *A, int sda, float *B, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E, int km, int kn);
void kernel_sgemm_strsm_nt_rl_inv_16x4_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E);
void kernel_sgemm_strsm_nt_rl_inv_16x4_vs_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *E, float *inv_diag_E, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_12x4_vs_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_12x4_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_ssyrk_spotrf_nt_l_16x4_vs_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_16x4_lib8(int kp, float *Ap, int sdap, float *Bp, int km_, float *Am, int sdam, float *Bm, float *C, int sdc, float *D, int sdd, float *inv_diag_D);
void kernel_strmm_nn_rl_16x4_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *D, int sdd);
void kernel_strmm_nn_rl_16x4_vs_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, float *D, int sdd, int km, int kn);
void kernel_strmm_nn_rl_16x4_gen_lib8(int k, float *alpha, float *A, int sda, int offsetB, float *B, int sdb, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);

// 8x8
void kernel_sgemm_nt_8x8_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_sgemm_nt_8x8_vs_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn);
void kernel_sgemm_nt_8x8_gen_lib8(int k, float *alpha, float *A, float *B, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_sgemm_nn_8x8_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *beta, float *C, float *D);
void kernel_sgemm_nn_8x8_vs_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *beta, float *C, float *D, int km, int kn);
void kernel_sgemm_nn_8x8_gen_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_ssyrk_nt_l_8x8_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_ssyrk_nt_l_8x8_vs_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn);
void kernel_spotrf_nt_l_8x8_lib8(int k, float *A, float *B, float *C, float *D, float *inv_diag_D);
void kernel_spotrf_nt_l_8x8_vs_lib8(int k, float *A, float *B, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_strsm_nt_rl_inv_8x8_lib8(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nt_rl_inv_8x8_vs_lib8(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_sgemm_strsm_nt_rl_inv_8x8_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *E, float *inv_diag_E);
void kernel_sgemm_strsm_nt_rl_inv_8x8_vs_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_8x8_vs_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_8x8_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *inv_diag_D);

// 8x4
void kernel_sgemm_nt_8x4_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_sgemm_nt_8x4_vs_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn);
void kernel_sgemm_nt_8x4_gen_lib8(int k, float *alpha, float *A, float *B, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_sgemm_nn_8x4_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *beta, float *C, float *D);
void kernel_sgemm_nn_8x4_vs_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *beta, float *C, float *D, int km, int kn);
void kernel_sgemm_nn_8x4_gen_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
//void kernel_ssyrk_nt_l_8x4_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_ssyrk_nt_l_8x4_vs_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn);
void kernel_spotrf_nt_l_8x4_lib8(int k, float *A, float *B, float *C, float *D, float *inv_diag_D);
void kernel_spotrf_nt_l_8x4_vs_lib8(int k, float *A, float *B, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_strsm_nt_rl_inv_8x4_lib8(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nt_rl_inv_8x4_vs_lib8(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_sgemm_strsm_nt_rl_inv_8x4_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *E, float *inv_diag_E);
void kernel_sgemm_strsm_nt_rl_inv_8x4_vs_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_8x4_vs_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_8x4_lib8(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *inv_diag_D);
void kernel_strmm_nn_rl_8x4_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *D);
void kernel_strmm_nn_rl_8x4_vs_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *D, int km, int kn);
void kernel_strmm_nn_rl_8x4_gen_lib8(int k, float *alpha, float *A, int offsetB, float *B, int sdb, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);

// 4x8
void kernel_sgemm_nt_4x8_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_sgemm_nt_4x8_vs_lib8(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn);
void kernel_sgemm_nt_4x8_gen_lib8(int k, float *alpha, float *A, float *B, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_strsm_nt_rl_inv_4x8_lib8(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nt_rl_inv_4x8_vs_lib8(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);

// 8
void kernel_sgemv_n_8_lib8(int k, float *alpha, float *A, float *x, float *beta, float *y, float *z);
void kernel_sgemv_n_8_vs_lib8(int k, float *alpha, float *A, float *x, float *beta, float *y, float *z, int k1);
void kernel_sgemv_n_8_gen_lib8(int kmax, float *alpha, float *A, float *x, float *beta, float *y, float *z, int k0, int k1);
void kernel_sgemv_t_8_lib8(int k, float *alpha, float *A, int sda, float *x, float *beta, float *y, float *z);
void kernel_sgemv_t_8_vs_lib8(int k, float *alpha, float *A, int sda, float *x, float *beta, float *y, float *z, int k1);
void kernel_sgemv_t_8_gen_lib8(int k, float *alpha, int offA, float *A, int sda, float *x, float *beta, float *C, float *D, int km);
void kernel_sgemv_t_4_lib8(int k, float *alpha, float *A, int sda, float *x, float *beta, float *y, float *z);
void kernel_sgemv_t_4_vs_lib8(int k, float *alpha, float *A, int sda, float *x, float *beta, float *y, float *z, int k1);
void kernel_sgemv_t_4_gen_lib8(int k, float *alpha, int offA, float *A, int sda, float *x, float *beta, float *C, float *D, int km);
void kernel_strsv_ln_inv_8_lib8(int k, float *A, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strsv_ln_inv_8_vs_lib8(int k, float *A, float *inv_diag_A, float *x, float *y, float *z, int km, int kn);
void kernel_strsv_lt_inv_8_lib8(int k, float *A, int sda, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strsv_lt_inv_8_vs_lib8(int k, float *A, int sda, float *inv_diag_A, float *x, float *y, float *z, int km, int kn);
void kernel_sgemv_nt_4_lib8(int kmax, float *alpha_n, float *alpha_t, float *A, int sda, float *x_n, float *x_t, float *beta_t, float *y_t, float *z_n, float *z_t);
void kernel_sgemv_nt_4_vs_lib8(int kmax, float *alpha_n, float *alpha_t, float *A, int sda, float *x_n, float *x_t, float *beta_t, float *y_t, float *z_n, float *z_t, int km);
void kernel_ssymv_l_4l_lib8(int kmax, float *alpha, float *A, int sda, float *x, float *z);
void kernel_ssymv_l_4r_lib8(int kmax, float *alpha, float *A, int sda, float *x, float *z);
void kernel_ssymv_l_4l_gen_lib8(int kmax, float *alpha, int offA, float *A, int sda, float *x, float *z, int km);
void kernel_ssymv_l_4r_gen_lib8(int kmax, float *alpha, int offA, float *A, int sda, float *x, float *z, int km);

// aux
void kernel_sgecp_8_0_lib8(int m, float *A, float *B);
void kernel_sgecp_8_0_gen_lib8(int m, float *A, float *B, int m1);
void kernel_sgecp_8_1_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_1_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgecp_8_2_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_2_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgecp_8_3_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_3_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgecp_8_4_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_4_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgecp_8_5_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_5_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgecp_8_6_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_6_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgecp_8_7_lib8(int m, float *A, int sda, float *B);
void kernel_sgecp_8_7_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgesc_8_lib8(int m, float *alpha, float *A);
void kernel_sgesc_8_gen_lib8(int m, float *alpha, float *A, int m1);
void kernel_sgetr_8_0_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_0_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_1_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_1_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_2_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_2_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_3_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_3_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_4_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_4_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_5_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_5_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_6_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_6_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgetr_8_7_lib8(int m, float *A, int sda, float *B);
void kernel_sgetr_8_7_gen_lib8(int m, float *A, int sda, float *B, int m1);
void kernel_sgead_8_0_lib8(int m, float *alpha, float *A, float *B);
void kernel_sgead_8_0_gen_lib8(int m, float *alpha, float *A, float *B, int m1);
void kernel_sgead_8_1_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_1_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);
void kernel_sgead_8_2_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_2_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);
void kernel_sgead_8_3_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_3_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);
void kernel_sgead_8_4_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_4_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);
void kernel_sgead_8_5_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_5_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);
void kernel_sgead_8_6_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_6_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);
void kernel_sgead_8_7_lib8(int m, float *alpha, float *A, int sda, float *B);
void kernel_sgead_8_7_gen_lib8(int m, float *alpha, float *A, int sda, float *B, int m1);


//
// lib4
//



// level 2 BLAS
// 4
void kernel_sgemv_n_4_lib4(int k, float *alpha, float *A, float *x, float *beta, float *y, float *z);
void kernel_sgemv_n_4_vs_lib4(int k, float *alpha, float *A, float *x, float *beta, float *y, float *z, int k1);
void kernel_sgemv_n_4_gen_lib4(int kmax, float *alpha, float *A, float *x, float *beta, float *y, float *z, int k0, int k1);
void kernel_sgemv_t_4_lib4(int k, float *alpha, float *A, int sda, float *x, float *beta, float *y, float *z);
void kernel_sgemv_t_4_vs_lib4(int k, float *alpha, float *A, int sda, float *x, float *beta, float *y, float *z, int k1);
void kernel_sgemv_t_4_gen_lib4(int k, float *alpha, int offA, float *A, int sda, float *x, float *beta, float *C, float *D, int km);
void kernel_strsv_ln_inv_4_lib4(int k, float *A, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strsv_ln_inv_4_vs_lib4(int k, float *A, float *inv_diag_A, float *x, float *y, float *z, int km, int kn);
void kernel_strsv_lt_inv_4_lib4(int k, float *A, int sda, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strsv_lt_inv_3_lib4(int k, float *A, int sda, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strsv_lt_inv_2_lib4(int k, float *A, int sda, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strsv_lt_inv_1_lib4(int k, float *A, int sda, float *inv_diag_A, float *x, float *y, float *z);
void kernel_strmv_un_4_lib4(int k, float *A, float *x, float *z);
void kernel_strmv_ut_4_lib4(int k, float *A, int sda, float *x, float *z);
void kernel_strmv_ut_4_vs_lib4(int k, float *A, int sda, float *x, float *z, int km);
void kernel_sgemv_nt_6_lib4(int kmax, float *alpha_n, float *alpha_t, float *A, int sda, float *x_n, float *x_t, float *beta_t, float *y_t, float *z_n, float *z_t);
void kernel_sgemv_nt_4_lib4(int kmax, float *alpha_n, float *alpha_t, float *A, int sda, float *x_n, float *x_t, float *beta_t, float *y_t, float *z_n, float *z_t);
void kernel_sgemv_nt_4_vs_lib4(int kmax, float *alpha_n, float *alpha_t, float *A, int sda, float *x_n, float *x_t, float *beta_t, float *y_t, float *z_n, float *z_t, int km);
void kernel_ssymv_l_4_lib4(int kmax, float *alpha, float *A, int sda, float *x_n, float *z_n);
void kernel_ssymv_l_4_gen_lib4(int kmax, float *alpha, int offA, float *A, int sda, float *x_n, float *z_n, int km);



// level 3 BLAS
// 12x4
void kernel_sgemm_nt_12x4_lib4(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd); //
// 8x8
void kernel_sgemm_nt_8x8_lib4(int k, float *alpha, float *A, int sda, float *B, int sdb, float *beta, float *C, int sdc, float *D, int sdd); //
// 8x4
void kernel_sgemm_nt_8x4_lib4(int k, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd); //
// 4x4
void kernel_sgemm_nt_4x4_lib4(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D); //
void kernel_sgemm_nt_4x4_vs_lib4(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn); //
void kernel_sgemm_nt_4x4_gen_lib4(int k, float *alpha, float *A, float *B, float *beta, int offsetC, float *C, int sdc, int offsetD, float *D, int sdd, int m0, int m1, int k0, int k1);
void kernel_sgemm_nn_4x4_lib4(int k, float *alpha, float *A, float *B, int sdb, float *beta, float *C, float *D); //
void kernel_sgemm_nn_4x4_vs_lib4(int k, float *alpha, float *A, float *B, int sdb, float *beta, float *C, float *D, int km, int kn); //
void kernel_ssyrk_nt_l_4x4_lib4(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D); //
void kernel_ssyrk_nt_l_4x4_vs_lib4(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn); //
void kernel_strmm_nt_ru_4x4_lib4(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D); //
void kernel_strmm_nt_ru_4x4_vs_lib4(int k, float *alpha, float *A, float *B, float *beta, float *C, float *D, int km, int kn); //
void kernel_strmm_nn_rl_4x4_lib4(int k, float *alpha, float *A, int offsetB, float *B, int sdb, float *D);
void kernel_strmm_nn_rl_4x4_gen_lib4(int k, float *alpha, float *A, int offsetB, float *B, int sdb, int offsetD, float *D, int sdd, int m0, int m1, int n0, int n1);
void kernel_strsm_nt_rl_inv_4x4_lib4(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nt_rl_inv_4x4_vs_lib4(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_strsm_nt_rl_one_4x4_lib4(int k, float *A, float *B, float *C, float *D, float *E);
void kernel_strsm_nt_rl_one_4x4_vs_lib4(int k, float *A, float *B, float *C, float *D, float *E, int km, int kn);
void kernel_strsm_nt_ru_inv_4x4_lib4(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nt_ru_inv_4x4_vs_lib4(int k, float *A, float *B, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_strsm_nn_ru_inv_4x4_lib4(int k, float *A, float *B, int sdb, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nn_ru_inv_4x4_vs_lib4(int k, float *A, float *B, int sdb, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_strsm_nn_ll_one_4x4_lib4(int k, float *A, float *B, int sdb, float *C, float *D, float *E);
void kernel_strsm_nn_ll_one_4x4_vs_lib4(int k, float *A, float *B, int sdb, float *C, float *D, float *E, int km, int kn);
void kernel_strsm_nn_lu_inv_4x4_lib4(int kmax, float *A, float *B, int sdb, float *C, float *D, float *E, float *inv_diag_E);
void kernel_strsm_nn_lu_inv_4x4_vs_lib4(int kmax, float *A, float *B, int sdb, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
// diag
void kernel_sgemm_diag_right_4_a0_lib4(int kmax, float *alpha, float *A, int sda, float *B, float *D, int sdd);
void kernel_sgemm_diag_right_4_lib4(int kmax, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_diag_right_3_lib4(int kmax, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_diag_right_2_lib4(int kmax, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_diag_right_1_lib4(int kmax, float *alpha, float *A, int sda, float *B, float *beta, float *C, int sdc, float *D, int sdd);
void kernel_sgemm_diag_left_4_a0_lib4(int kmax, float *alpha, float *A, float *B, float *D);
void kernel_sgemm_diag_left_4_lib4(int kmax, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_sgemm_diag_left_3_lib4(int kmax, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_sgemm_diag_left_2_lib4(int kmax, float *alpha, float *A, float *B, float *beta, float *C, float *D);
void kernel_sgemm_diag_left_1_lib4(int kmax, float *alpha, float *A, float *B, float *beta, float *C, float *D);



// LAPACK
// 4x4
void kernel_spotrf_nt_l_4x4_lib4(int k, float *A, float *B, float *C, float *D, float *inv_diag_D);
void kernel_spotrf_nt_l_4x4_vs_lib4(int k, float *A, float *B, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_sgetrf_nn_4x4_lib4(int k, float *A, float *B, int sdb, float *C, float *D, float *inv_diag_D);
void kernel_sgetrf_nn_4x4_vs_lib4(int k, float *A, float *B, int sdb, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_sgetrf_pivot_4_lib4(int m, float *pA, int sda, float *inv_diag_A, int* ipiv);
void kernel_sgetrf_pivot_4_vs_lib4(int m, int n, float *pA, int sda, float *inv_diag_A, int* ipiv);



// merged routines
// 4x4
void kernel_sgemm_strsm_nt_rl_inv_4x4_lib4(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *E, float *inv_diag_E);
void kernel_sgemm_strsm_nt_rl_inv_4x4_vs_lib4(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *E, float *inv_diag_E, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_4x4_vs_lib4(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *inv_diag_D, int km, int kn);
void kernel_ssyrk_spotrf_nt_l_4x4_lib4(int kp, float *Ap, float *Bp, int km_, float *Am, float *Bm, float *C, float *D, float *inv_diag_D);



// auxiliary routines
void kernel_sgesc_4_lib4(int kmax, float *alpha, float *A);
void kernel_sgesc_3_lib4(int kmax, float *alpha, float *A);
void kernel_sgesc_2_lib4(int kmax, float *alpha, float *A);
void kernel_sgesc_1_lib4(int kmax, float *alpha, float *A);
void kernel_sgecp_4_0_lib4(int kmax, float *A, float *B);
void kernel_sgecp_4_1_lib4(int kmax, float *A0, int sda, float *B);
void kernel_sgecp_4_2_lib4(int kmax, float *A0, int sda, float *B);
void kernel_sgecp_4_3_lib4(int kmax, float *A0, int sda, float *B);
void kernel_sgecp_3_0_lib4(int kmax, float *A, float *B);
void kernel_sgecp_3_2_lib4(int kmax, float *A0, int sda, float *B);
void kernel_sgecp_3_3_lib4(int kmax, float *A0, int sda, float *B);
void kernel_sgecp_2_0_lib4(int kmax, float *A, float *B);
void kernel_sgecp_2_3_lib4(int kmax, float *A0, int sda, float *B);
void kernel_sgecp_1_0_lib4(int kmax, float *A, float *B);
void kernel_strcp_l_4_0_lib4(int kmax, float *A, float *B);
void kernel_strcp_l_4_1_lib4(int kmax, float *A0, int sda, float *B);
void kernel_strcp_l_4_2_lib4(int kmax, float *A0, int sda, float *B);
void kernel_strcp_l_4_3_lib4(int kmax, float *A0, int sda, float *B);
void kernel_strcp_l_3_0_lib4(int kmax, float *A, float *B);
void kernel_strcp_l_3_2_lib4(int kmax, float *A0, int sda, float *B);
void kernel_strcp_l_3_3_lib4(int kmax, float *A0, int sda, float *B);
void kernel_strcp_l_2_0_lib4(int kmax, float *A, float *B);
void kernel_strcp_l_2_3_lib4(int kmax, float *A0, int sda, float *B);
void kernel_strcp_l_1_0_lib4(int kmax, float *A, float *B);
void kernel_sgead_4_0_lib4(int kmax, float *alpha, float *A, float *B);
void kernel_sgead_4_1_lib4(int kmax, float *alpha, float *A0, int sda, float *B);
void kernel_sgead_4_2_lib4(int kmax, float *alpha, float *A0, int sda, float *B);
void kernel_sgead_4_3_lib4(int kmax, float *alpha, float *A0, int sda, float *B);
void kernel_sgead_3_0_lib4(int kmax, float *alpha, float *A, float *B);
void kernel_sgead_3_2_lib4(int kmax, float *alpha, float *A0, int sda, float *B);
void kernel_sgead_3_3_lib4(int kmax, float *alpha, float *A0, int sda, float *B);
void kernel_sgead_2_0_lib4(int kmax, float *alpha, float *A, float *B);
void kernel_sgead_2_3_lib4(int kmax, float *alpha, float *A0, int sda, float *B);
void kernel_sgead_1_0_lib4(int kmax, float *alpha, float *A, float *B);
// TODO
void kernel_sgeset_4_lib4(int kmax, float alpha, float *A);
void kernel_strset_4_lib4(int kmax, float alpha, float *A);
void kernel_sgetr_4_lib4(int tri, int kmax, int kna, float alpha, float *A, float *C, int sdc);
void kernel_sgetr_3_lib4(int tri, int kmax, int kna, float alpha, float *A, float *C, int sdc);
void kernel_sgetr_2_lib4(int tri, int kmax, int kna, float alpha, float *A, float *C, int sdc);
void kernel_sgetr_1_lib4(int tri, int kmax, int kna, float alpha, float *A, float *C, int sdc);



#ifdef __cplusplus
}
#endif
