/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt2/testbench.v";
static const char *ng1 = "";
static const char *ng2 = "IMEM Passed i=%d idata=%d trueval=%d";
static const char *ng3 = "IMEM Failed i=%d idata=%d trueval=%d";
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {3, 0};
static int ng7[] = {0, 0};
static const char *ng8 = "DMEM Passed i=%d out_data=%d trueval=%d";
static const char *ng9 = "IMEM Failed i=%d out_data=%d trueval=%d";
static int ng10[] = {6, 0};
static const char *ng11 = "REG1 Passed i=%d out_data=%d trueval=%d";
static const char *ng12 = "REG1 Failed i=%d out_data=%d trueval=%d";
static const char *ng13 = "REG2 Passed i=%d out_data=%d trueval=%d";
static const char *ng14 = "REG2 Failed i=%d out_data=%d trueval=%d";
static const char *ng15 = "imem_new.txt";
static const char *ng16 = "IMEM CHECK";
static const char *ng17 = "FAIL %d out of %d";
static const char *ng18 = "PASSED";
static const char *ng19 = "DMEM CHECK";
static const char *ng20 = "imem_check.txt";
static const char *ng21 = "REG CHECK";
static const char *ng22 = "imem_check2.txt";



static int sp_set_imem(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t1 + 9816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 7256);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t4 = (t1 + 8536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8536);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 8536);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 9816);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 9176);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_imem_checker(char *t1, char *t2)
{
    char t9[8];
    char t31[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t5 = (t1 + 5416U);
    t6 = *((char **)t5);
    t5 = (t1 + 9176);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(75, ng0);

LAB14:    xsi_set_current_line(76, ng0);
    t4 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 1280);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t31, 64);
    t6 = (t1 + 9976);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 5416U);
    t11 = *((char **)t10);
    t10 = (t1 + 9176);
    t24 = (t10 + 56U);
    t25 = *((char **)t24);
    t32 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t32, (char)119, t8, 32, (char)118, t11, 32, (char)118, t25, 32);
    xsi_set_current_line(77, ng0);
    t4 = (t1 + 7736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 7736);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB12:    xsi_set_current_line(79, ng0);
    t4 = (t1 + 7576);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 7576);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(72, ng0);

LAB13:    xsi_set_current_line(73, ng0);
    t32 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t33 = (t1 + 1280);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t33, (char)118, t31, 64);
    t34 = (t1 + 9976);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 5416U);
    t38 = *((char **)t37);
    t37 = (t1 + 9176);
    t39 = (t37 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng2, 4, t41, (char)119, t36, 32, (char)118, t38, 32, (char)118, t40, 32);
    goto LAB12;

}

static int sp_set_dmem_mem(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t5 = (t1 + 10136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 6776);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 6936);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(88, ng0);
    t4 = (t1 + 8696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8696);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 8696);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 10136);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 7096);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_set_dmem_addr(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t5 = (t1 + 10296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 6776);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 6936);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(97, ng0);
    t4 = (t1 + 8696);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8696);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 8696);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 10296);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 9336);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_dmem_checker(char *t1, char *t2)
{
    char t9[8];
    char t31[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t5 = (t1 + 4936U);
    t6 = *((char **)t5);
    t5 = (t1 + 9336);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(108, ng0);

LAB14:    xsi_set_current_line(109, ng0);
    t4 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t31, 64);
    t6 = (t1 + 10456);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 4936U);
    t11 = *((char **)t10);
    t10 = (t1 + 9336);
    t24 = (t10 + 56U);
    t25 = *((char **)t24);
    t32 = (t1 + 2576);
    xsi_vlogfile_write(1, 0, 0, ng9, 4, t32, (char)119, t8, 32, (char)118, t11, 32, (char)118, t25, 32);
    xsi_set_current_line(110, ng0);
    t4 = (t1 + 8056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8056);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB12:    xsi_set_current_line(112, ng0);
    t4 = (t1 + 7896);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 7896);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(105, ng0);

LAB13:    xsi_set_current_line(106, ng0);
    t32 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t33 = (t1 + 2576);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t33, (char)118, t31, 64);
    t34 = (t1 + 10456);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 4936U);
    t38 = *((char **)t37);
    t37 = (t1 + 9336);
    t39 = (t37 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 2576);
    xsi_vlogfile_write(1, 0, 0, ng8, 4, t41, (char)119, t36, 32, (char)118, t38, 32, (char)118, t40, 32);
    goto LAB12;

}

static int sp_set_reg_1(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t5 = (t1 + 10616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6456);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t4 = (t1 + 8856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8856);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 8856);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 10616);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 5976);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_set_reg_2(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3440);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(127, ng0);

LAB5:    xsi_set_current_line(128, ng0);
    t5 = (t1 + 10776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t7, 32, t8, 32);
    t10 = (t1 + 6456);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 5);
    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 6616);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 9016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9016);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 9016);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 10776);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 5976);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_set_reg_addr(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3872);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(140, ng0);

LAB5:    xsi_set_current_line(141, ng0);
    t5 = (t1 + 10936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6136);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 5);
    xsi_set_current_line(142, ng0);
    t4 = (t1 + 10936);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 6296);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 5);
    xsi_set_current_line(143, ng0);
    t4 = (t1 + 8856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 8856);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 8856);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 10936);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 9496);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    xsi_set_current_line(144, ng0);
    t4 = (t1 + 9016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9016);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 9016);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 10936);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 32, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 9656);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_reg_checker(char *t1, char *t2)
{
    char t9[8];
    char t31[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4304);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(150, ng0);

LAB5:    xsi_set_current_line(151, ng0);
    t5 = (t1 + 5096U);
    t6 = *((char **)t5);
    t5 = (t1 + 9496);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(154, ng0);

LAB14:    xsi_set_current_line(155, ng0);
    t4 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 4304);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t31, 64);
    t6 = (t1 + 11096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 5096U);
    t11 = *((char **)t10);
    t10 = (t1 + 9496);
    t24 = (t10 + 56U);
    t25 = *((char **)t24);
    t32 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t32, (char)119, t8, 32, (char)118, t11, 32, (char)118, t25, 32);
    xsi_set_current_line(156, ng0);
    t4 = (t1 + 8376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8376);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB12:    xsi_set_current_line(158, ng0);
    t4 = (t1 + 5256U);
    t5 = *((char **)t4);
    t4 = (t1 + 9656);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB18;

LAB15:    if (t21 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t9) = 1;

LAB18:    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(161, ng0);

LAB23:    xsi_set_current_line(162, ng0);
    t4 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 4304);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t5, (char)118, t31, 64);
    t6 = (t1 + 11096);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 5256U);
    t11 = *((char **)t10);
    t10 = (t1 + 9656);
    t24 = (t10 + 56U);
    t25 = *((char **)t24);
    t32 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng14, 4, t32, (char)119, t8, 32, (char)118, t11, 32, (char)118, t25, 32);
    xsi_set_current_line(163, ng0);
    t4 = (t1 + 8376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8376);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB21:    xsi_set_current_line(165, ng0);
    t4 = (t1 + 8216);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 8216);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(151, ng0);

LAB13:    xsi_set_current_line(152, ng0);
    t32 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t33 = (t1 + 4304);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t33, (char)118, t31, 64);
    t34 = (t1 + 11096);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 5096U);
    t38 = *((char **)t37);
    t37 = (t1 + 9496);
    t39 = (t37 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng11, 4, t41, (char)119, t36, 32, (char)118, t38, 32, (char)118, t40, 32);
    goto LAB12;

LAB17:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(158, ng0);

LAB22:    xsi_set_current_line(159, ng0);
    t25 = xsi_vlog_time(t31, 1000.0000000000000, 1000.0000000000000);
    t32 = (t1 + 4304);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t32, (char)118, t31, 64);
    t33 = (t1 + 11096);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t1 + 5256U);
    t37 = *((char **)t36);
    t36 = (t1 + 9656);
    t38 = (t36 + 56U);
    t39 = *((char **)t38);
    t40 = (t1 + 4304);
    xsi_vlogfile_write(1, 0, 0, ng13, 4, t40, (char)119, t35, 32, (char)118, t37, 32, (char)118, t39, 32);
    goto LAB21;

}

static void Always_59_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 12008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 11816);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 5816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 5816);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Initial_169_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 12256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);

LAB4:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7576);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 8536);
    xsi_vlogfile_readmemh(ng15, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(179, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(180, ng0);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 7736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(189, ng0);

LAB26:    xsi_set_current_line(190, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);

LAB24:    xsi_set_current_line(193, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 8696);
    xsi_vlogfile_readmemh(ng20, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(196, ng0);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB27:    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 8056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(208, ng0);

LAB56:    xsi_set_current_line(209, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);

LAB54:    xsi_set_current_line(212, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 8856);
    xsi_vlogfile_readmemh(ng20, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 9016);
    xsi_vlogfile_readmemh(ng22, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(216, ng0);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB57:    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 8376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(230, ng0);

LAB93:    xsi_set_current_line(231, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);

LAB91:    xsi_set_current_line(233, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(181, ng0);

LAB8:    xsi_set_current_line(182, ng0);
    t13 = (t0 + 7416);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 12064);
    t17 = (t0 + 848);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 9816);
    xsi_vlogvar_assign_value(t19, t15, 0, 0, 32);

LAB11:    t20 = (t0 + 12160);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t0, t21);

LAB13:    if (t28 != 0)
        goto LAB14;

LAB9:    t21 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t21);

LAB10:    t29 = (t0 + 12160);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 12064);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB12:;
LAB14:    t20 = (t0 + 12256U);
    *((char **)t20) = &&LAB11;
    goto LAB1;

LAB15:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t7 = (t0 + 1280);
    t13 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t13);
    t14 = (t0 + 9976);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);

LAB18:    t15 = (t0 + 12160);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB20:    if (t28 != 0)
        goto LAB21;

LAB16:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB17:    t23 = (t0 + 12160);
    t24 = *((char **)t23);
    t23 = (t0 + 1280);
    t25 = (t0 + 12064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 7416);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB19:;
LAB21:    t15 = (t0 + 12256U);
    *((char **)t15) = &&LAB18;
    goto LAB1;

LAB22:    xsi_set_current_line(186, ng0);

LAB25:    xsi_set_current_line(187, ng0);
    t13 = (t0 + 7736);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 7576);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)119, t15, 32, (char)119, t18, 32);
    goto LAB24;

LAB28:    xsi_set_current_line(197, ng0);

LAB30:    xsi_set_current_line(198, ng0);
    t13 = (t0 + 7416);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 12064);
    t17 = (t0 + 1712);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 10136);
    xsi_vlogvar_assign_value(t19, t15, 0, 0, 32);

LAB33:    t20 = (t0 + 12160);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t0, t21);

LAB35:    if (t28 != 0)
        goto LAB36;

LAB31:    t21 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t21);

LAB32:    t29 = (t0 + 12160);
    t30 = *((char **)t29);
    t29 = (t0 + 1712);
    t31 = (t0 + 12064);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t20 = (t0 + 12256U);
    *((char **)t20) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t7 = (t0 + 2144);
    t13 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t13);
    t14 = (t0 + 10296);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);

LAB40:    t15 = (t0 + 12160);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB42:    if (t28 != 0)
        goto LAB43;

LAB38:    t16 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t16);

LAB39:    t23 = (t0 + 12160);
    t24 = *((char **)t23);
    t23 = (t0 + 2144);
    t25 = (t0 + 12064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB41:;
LAB43:    t15 = (t0 + 12256U);
    *((char **)t15) = &&LAB40;
    goto LAB1;

LAB44:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t7 = (t0 + 2576);
    t13 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t13);
    t14 = (t0 + 10456);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);

LAB47:    t15 = (t0 + 12160);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB49:    if (t28 != 0)
        goto LAB50;

LAB45:    t16 = (t0 + 2576);
    xsi_vlog_subprogram_popinvocation(t16);

LAB46:    t23 = (t0 + 12160);
    t24 = *((char **)t23);
    t23 = (t0 + 2576);
    t25 = (t0 + 12064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:;
LAB50:    t15 = (t0 + 12256U);
    *((char **)t15) = &&LAB47;
    goto LAB1;

LAB51:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 7416);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB27;

LAB52:    xsi_set_current_line(205, ng0);

LAB55:    xsi_set_current_line(206, ng0);
    t13 = (t0 + 8056);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 7896);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)119, t15, 32, (char)119, t18, 32);
    goto LAB54;

LAB58:    xsi_set_current_line(217, ng0);

LAB60:    xsi_set_current_line(218, ng0);
    t13 = (t0 + 7416);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 12064);
    t17 = (t0 + 3008);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t0 + 10616);
    xsi_vlogvar_assign_value(t19, t15, 0, 0, 32);

LAB63:    t20 = (t0 + 12160);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = ((int  (*)(char *, char *))t27)(t0, t21);

LAB65:    if (t28 != 0)
        goto LAB66;

LAB61:    t21 = (t0 + 3008);
    xsi_vlog_subprogram_popinvocation(t21);

LAB62:    t29 = (t0 + 12160);
    t30 = *((char **)t29);
    t29 = (t0 + 3008);
    t31 = (t0 + 12064);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB64:;
LAB66:    t20 = (t0 + 12256U);
    *((char **)t20) = &&LAB63;
    goto LAB1;

LAB67:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t7 = (t0 + 3440);
    t13 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t13);
    t14 = (t0 + 10776);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);

LAB70:    t15 = (t0 + 12160);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB72:    if (t28 != 0)
        goto LAB73;

LAB68:    t16 = (t0 + 3440);
    xsi_vlog_subprogram_popinvocation(t16);

LAB69:    t23 = (t0 + 12160);
    t24 = *((char **)t23);
    t23 = (t0 + 3440);
    t25 = (t0 + 12064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB71:;
LAB73:    t15 = (t0 + 12256U);
    *((char **)t15) = &&LAB70;
    goto LAB1;

LAB74:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t7 = (t0 + 3872);
    t13 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t13);
    t14 = (t0 + 10936);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);

LAB77:    t15 = (t0 + 12160);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB79:    if (t28 != 0)
        goto LAB80;

LAB75:    t16 = (t0 + 3872);
    xsi_vlog_subprogram_popinvocation(t16);

LAB76:    t23 = (t0 + 12160);
    t24 = *((char **)t23);
    t23 = (t0 + 3872);
    t25 = (t0 + 12064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB78:;
LAB80:    t15 = (t0 + 12256U);
    *((char **)t15) = &&LAB77;
    goto LAB1;

LAB81:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12064);
    t7 = (t0 + 4304);
    t13 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t13);
    t14 = (t0 + 11096);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);

LAB84:    t15 = (t0 + 12160);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t28 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB86:    if (t28 != 0)
        goto LAB87;

LAB82:    t16 = (t0 + 4304);
    xsi_vlog_subprogram_popinvocation(t16);

LAB83:    t23 = (t0 + 12160);
    t24 = *((char **)t23);
    t23 = (t0 + 4304);
    t25 = (t0 + 12064);
    t26 = 0;
    xsi_delete_subprogram_invocation(t23, t24, t0, t25, t26);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 12064);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB85:;
LAB87:    t15 = (t0 + 12256U);
    *((char **)t15) = &&LAB84;
    goto LAB1;

LAB88:    xsi_set_current_line(216, ng0);
    t2 = (t0 + 7416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 7416);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB57;

LAB89:    xsi_set_current_line(227, ng0);

LAB92:    xsi_set_current_line(228, ng0);
    t13 = (t0 + 8376);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 8216);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)119, t15, 32, (char)119, t18, 32);
    goto LAB91;

}


extern void work_m_07741298924082653373_1949178628_init()
{
	static char *pe[] = {(void *)Always_59_0,(void *)Initial_169_1};
	static char *se[] = {(void *)sp_set_imem,(void *)sp_imem_checker,(void *)sp_set_dmem_mem,(void *)sp_set_dmem_addr,(void *)sp_dmem_checker,(void *)sp_set_reg_1,(void *)sp_set_reg_2,(void *)sp_set_reg_addr,(void *)sp_reg_checker};
	xsi_register_didat("work_m_07741298924082653373_1949178628", "isim/testbench_isim_beh.exe.sim/work/m_07741298924082653373_1949178628.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
