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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt6/multiply.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {31, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {0U, 0U, 0U, 0U};
static int ng8[] = {6, 0};
static int ng9[] = {32, 0};



static void Always_57_0(char *t0)
{
    char t7[16];
    char t12[8];
    char t14[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    int t20;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6592);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng5)));
    t20 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t20 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(77, ng0);

LAB21:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);

LAB18:    xsi_set_current_line(63, ng0);
    t8 = (t0 + 1800U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng2)));
    t10 = (t0 + 472);
    t11 = *((char **)t10);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t8, 32, t11, 32);
    t10 = (t0 + 1800U);
    t13 = *((char **)t10);
    t10 = (t0 + 1760U);
    t15 = (t10 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t13, t16, 2, t17, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t12, 32, t14, 32);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t18, 32, t9, 32);
    t19 = (t0 + 3000);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 472);
    t8 = *((char **)t4);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t2, 32, t8, 32);
    t4 = (t0 + 1960U);
    t9 = *((char **)t4);
    t4 = (t0 + 1920U);
    t10 = (t4 + 72U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t9, t11, 2, t13, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t12, 32, t14, 32);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t18, 32, t3, 32);
    t15 = (t0 + 3160);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 64);
    goto LAB17;

LAB9:    goto LAB7;

LAB11:    xsi_set_current_line(67, ng0);

LAB19:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1800U);
    t8 = *((char **)t4);
    t4 = ((char*)((ng2)));
    t9 = (t0 + 472);
    t10 = *((char **)t9);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t4, 32, t10, 32);
    t9 = (t0 + 1800U);
    t11 = *((char **)t9);
    t9 = (t0 + 1760U);
    t13 = (t9 + 72U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t11, t15, 2, t16, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t12, 32, t14, 32);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t18, 32, t8, 32);
    t17 = (t0 + 3000);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 64);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t2, 32, t3, 32);
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 64);
    goto LAB17;

LAB13:    xsi_set_current_line(72, ng0);

LAB20:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1800U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t3, 32, t4, 32);
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 64, 64, 2U, t2, 32, t3, 32);
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 64);
    goto LAB17;

}

static void Always_84_1(char *t0)
{
    char t13[8];
    char t16[8];
    char t37[8];
    char t39[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 6608);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(93, ng0);

LAB10:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2840);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t4, t12, 2, t14, 32, 1);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t13 + 4);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t18);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB14;

LAB11:    if (t23 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t16) = 1;

LAB14:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(108, ng0);

LAB24:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(116, ng0);

LAB29:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB27:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(87, ng0);

LAB9:    xsi_set_current_line(88, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB8;

LAB13:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(95, ng0);

LAB18:    xsi_set_current_line(96, ng0);
    t33 = (t0 + 2840);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 7, t36, 32);
    t38 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 7, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3160);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2840);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    xsi_vlog_generic_get_index_select_value(t13, 1, t4, t12, 2, t17, 7, 2);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(103, ng0);

LAB23:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);

LAB21:    goto LAB17;

LAB19:    xsi_set_current_line(99, ng0);

LAB22:    xsi_set_current_line(100, ng0);
    t26 = (t0 + 3000);
    t27 = (t26 + 56U);
    t33 = *((char **)t27);
    t34 = (t0 + 2840);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_unsigned_lshift(t39, 64, t33, 64, t36, 7);
    t38 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t38, t39, 0, 0, 64, 0LL);
    goto LAB21;

LAB25:    xsi_set_current_line(110, ng0);

LAB28:    xsi_set_current_line(111, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB27;

}

static void Always_125_2(char *t0)
{
    char t15[16];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 6624);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(133, ng0);

LAB10:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(140, ng0);

LAB15:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3640);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_get_part_select_value(t15, 33, t12, 31, 0);
    xsi_vlog_unsigned_add(t16, 33, t4, 33, t15, 33);
    t13 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 33, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(128, ng0);

LAB9:    xsi_set_current_line(129, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 33, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(136, ng0);

LAB14:    xsi_set_current_line(137, ng0);
    t11 = (t0 + 3320);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 33, 0LL);
    goto LAB13;

}

static void Always_146_3(char *t0)
{
    char t15[8];
    char t18[8];
    char t19[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    char *t28;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6640);
    *((int *)t2) = 1;
    t3 = (t0 + 5808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(154, ng0);

LAB10:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(161, ng0);

LAB15:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3320);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 3320);
    t14 = (t13 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t12, t16, 2, t17, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 32, t15, 32);
    t20 = (t0 + 3640);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t19 + 4);
    t24 = (t22 + 8);
    t25 = (t22 + 12);
    t6 = *((unsigned int *)t24);
    t7 = (t6 >> 0);
    *((unsigned int *)t19) = t7;
    t8 = *((unsigned int *)t25);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t10 & 4294967295U);
    t26 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t26 & 4294967295U);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t18, 32, t19, 32);
    t28 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 32, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(149, ng0);

LAB9:    xsi_set_current_line(150, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(157, ng0);

LAB14:    xsi_set_current_line(158, ng0);
    t11 = (t0 + 3480);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB13;

}

static void Cont_167_4(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t43[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 6024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2120U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t43, 16);

LAB20:    t45 = (t0 + 6752);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_bit_copy(t49, 0, t3, 0, 32);
    xsi_driver_vfirst_trans(t45, 0, 31);
    t50 = (t0 + 6656);
    *((int *)t50) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3320);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = (t0 + 3480);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t43, t42, 8);
    t44 = (t43 + 8);
    memset(t44, 0, 8);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 33, t35, 33, t43, 33);
    goto LAB20;

LAB18:    memcpy(t3, t35, 16);
    goto LAB20;

}

static void Cont_168_5(char *t0)
{
    char t5[8];
    char t19[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t6) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t5, 8);

LAB10:    t58 = (t0 + 6816);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 1U;
    t64 = t63;
    t65 = (t26 + 4);
    t66 = *((unsigned int *)t26);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t71 = (t0 + 6672);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1640U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t5);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t5 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t5 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t5);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

}


extern void work_m_17164927971173540170_2809259415_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)Always_84_1,(void *)Always_125_2,(void *)Always_146_3,(void *)Cont_167_4,(void *)Cont_168_5};
	xsi_register_didat("work_m_17164927971173540170_2809259415", "isim/cpu_fo_test_isim_beh.exe.sim/work/m_17164927971173540170_2809259415.didat");
	xsi_register_executes(pe);
}
