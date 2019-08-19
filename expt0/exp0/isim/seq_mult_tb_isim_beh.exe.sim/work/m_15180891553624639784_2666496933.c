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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt0/seq_mult_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static const char *ng3 = "";
static const char *ng4 = " Passed %d * %d = %d";
static const char *ng5 = " Fail %d * %d: %d instead of %d";
static int ng6[] = {10, 0};
static int ng7[] = {2, 0};
static int ng8[] = {20, 0};
static const char *ng9 = "FAIL %d out of %d";
static const char *ng10 = "PASS %d tests";



static int sp_apply_and_check(char *t1, char *t2)
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
    unsigned int t10;
    unsigned int t11;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t1 + 3160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2360);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(50, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(50, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);

LAB8:    t4 = (t1 + 1640U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB12;

LAB9:    if (t19 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t9) = 1;

LAB12:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(56, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 1800U);
    t6 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 16, t5, 16, t6, 16);
    t4 = (t9 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(58, ng0);

LAB21:    xsi_set_current_line(59, ng0);
    t4 = xsi_vlog_time(t31, 1000.0000000000000, 1.0000000000000000);
    t5 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng3, 2, t5, (char)118, t31, 64);
    t6 = (t1 + 2200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t22 = (t1 + 2360);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 1480U);
    t32 = *((char **)t30);
    t30 = (t1 + 1800U);
    t33 = *((char **)t30);
    t30 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t30, (char)119, t8, 8, (char)119, t29, 8, (char)119, t32, 16, (char)119, t33, 16);
    xsi_set_current_line(60, ng0);
    t4 = (t1 + 3000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3000);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB19:    xsi_set_current_line(62, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2840);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB4;

LAB11:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(53, ng0);

LAB15:    xsi_set_current_line(54, ng0);
    t28 = (t2 + 88U);
    t29 = *((char **)t28);
    t30 = (t29 + 16U);
    xsi_wp_set_status(t30, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    goto LAB8;

LAB17:    xsi_set_current_line(56, ng0);

LAB20:    xsi_set_current_line(57, ng0);
    t7 = xsi_vlog_time(t31, 1000.0000000000000, 1.0000000000000000);
    t8 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 0, ng3, 2, t8, (char)118, t31, 64);
    t22 = (t1 + 2200);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t30 = (t1 + 2360);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 1480U);
    t35 = *((char **)t34);
    t34 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t34, (char)119, t29, 8, (char)119, t33, 8, (char)119, t35, 16);
    goto LAB19;

}

static void NetDecl_22_0(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 16, t4, 8, t7, 8);
    t9 = (t0 + 5160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 65535U;
    t15 = t14;
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 15U);
    t22 = (t0 + 5048);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_35_1(char *t0)
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

LAB0:    t1 = (t0 + 4480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4288);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2520);
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

LAB8:    t14 = (t0 + 2520);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Initial_66_2(char *t0)
{
    char t22[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 4728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);

LAB4:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB7:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB13:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB15:    if (t17 != 0)
        goto LAB16;

LAB11:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB12:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB19:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB21:    if (t17 != 0)
        goto LAB22;

LAB17:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB18:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    memset(t22, 0, 8);
    xsi_vlog_signed_unary_minus(t22, 32, t2, 32);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t22, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB25:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB27:    if (t17 != 0)
        goto LAB28;

LAB23:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB24:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    memset(t22, 0, 8);
    xsi_vlog_signed_unary_minus(t22, 32, t3, 32);
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 8);

LAB31:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB33:    if (t17 != 0)
        goto LAB34;

LAB29:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB30:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    memset(t22, 0, 8);
    xsi_vlog_signed_unary_minus(t22, 32, t2, 32);
    t3 = ((char*)((ng1)));
    memset(t23, 0, 8);
    xsi_vlog_signed_unary_minus(t23, 32, t3, 32);
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t22, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t23, 0, 0, 8);

LAB37:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB39:    if (t17 != 0)
        goto LAB40;

LAB35:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB36:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB43:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB45:    if (t17 != 0)
        goto LAB46;

LAB41:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB42:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4536);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB49:    t9 = (t0 + 4632);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB51:    if (t17 != 0)
        goto LAB52;

LAB47:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB48:    t18 = (t0 + 4632);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4536);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_signed_greater(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(91, ng0);

LAB57:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)119, t4, 32);

LAB55:    xsi_set_current_line(94, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t9 = (t0 + 4728U);
    *((char **)t9) = &&LAB49;
    goto LAB1;

LAB53:    xsi_set_current_line(89, ng0);

LAB56:    xsi_set_current_line(90, ng0);
    t7 = (t0 + 3000);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 2840);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng9, 3, t0, (char)119, t9, 32, (char)119, t12, 32);
    goto LAB55;

}


extern void work_m_15180891553624639784_2666496933_init()
{
	static char *pe[] = {(void *)NetDecl_22_0,(void *)Always_35_1,(void *)Initial_66_2};
	static char *se[] = {(void *)sp_apply_and_check};
	xsi_register_didat("work_m_15180891553624639784_2666496933", "isim/seq_mult_tb_isim_beh.exe.sim/work/m_15180891553624639784_2666496933.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
