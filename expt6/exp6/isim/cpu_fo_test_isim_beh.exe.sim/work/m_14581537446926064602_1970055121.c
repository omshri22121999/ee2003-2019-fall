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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt6/pipeline_wb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {2, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {512U, 0U};
static int ng8[] = {24, 0};
static int ng9[] = {7, 0};
static int ng10[] = {15, 0};
static int ng11[] = {23, 0};
static int ng12[] = {31, 0};
static int ng13[] = {16, 0};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {5U, 0U};



static void Always_53_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t20[8];
    char t21[8];
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
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t19;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6248);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 1, t14, 1);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t15 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(57, ng0);

LAB12:    xsi_set_current_line(58, ng0);
    t16 = (t0 + 1368U);
    t17 = *((char **)t16);
    t16 = (t0 + 3368);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

LAB9:    xsi_set_current_line(63, ng0);

LAB13:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 3U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 3U);

LAB14:    t7 = ((char*)((ng3)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 2, t7, 2);
    if (t19 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t15 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng4)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 2, t3, 2);
    if (t19 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 2, t2, 2);
    if (t15 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB11;

LAB15:    xsi_set_current_line(67, ng0);

LAB24:    xsi_set_current_line(68, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 3368);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB17:    goto LAB15;

LAB19:    xsi_set_current_line(73, ng0);

LAB25:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t20, 32, t5, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng6)));
    memset(t21, 0, 8);
    t22 = (t20 + 4);
    t23 = (t17 + 4);
    t8 = *((unsigned int *)t20);
    t9 = *((unsigned int *)t17);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t22);
    t12 = *((unsigned int *)t23);
    t13 = (t11 ^ t12);
    t24 = (t10 | t13);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t23);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB29;

LAB26:    if (t27 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t21) = 1;

LAB29:    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(80, ng0);

LAB34:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB32:    goto LAB23;

LAB21:    xsi_set_current_line(87, ng0);

LAB35:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 3528);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB23;

LAB28:    t30 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(75, ng0);

LAB33:    xsi_set_current_line(76, ng0);
    t37 = (t0 + 2008U);
    t38 = *((char **)t37);
    t37 = (t0 + 3368);
    xsi_vlogvar_assign_value(t37, t38, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB32;

}

static void Cont_98_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) < *((unsigned int *)t2))
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t10) != 0)
        goto LAB11;

LAB12:    t17 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB13;

LAB14:    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t17);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t17) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t27, 8);

LAB21:    t21 = (t0 + 6424);
    t28 = (t21 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t3, 8);
    xsi_driver_vfirst_trans(t21, 0, 31);
    t32 = (t0 + 6264);
    *((int *)t32) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    goto LAB14;

LAB15:    t21 = (t0 + 1848U);
    t27 = *((char **)t21);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t22, 32, t27, 32);
    goto LAB21;

LAB19:    memcpy(t3, t22, 8);
    goto LAB21;

}

static void Always_100_2(char *t0)
{
    char t4[8];
    char t16[8];
    char t28[16];
    char t29[8];
    char t41[8];
    char t44[8];
    char t48[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t49;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6280);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 7U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t14, 3);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t15 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(104, ng0);

LAB20:    xsi_set_current_line(105, ng0);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 3U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 3U);

LAB21:    t26 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t16, 2, t26, 2);
    if (t27 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t15 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB32:    goto LAB19;

LAB9:    xsi_set_current_line(114, ng0);

LAB33:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 3U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 3U);

LAB34:    t7 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t29, 2, t7, 2);
    if (t27 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t29, 2, t2, 2);
    if (t15 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB41:    goto LAB19;

LAB11:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(123, ng0);

LAB42:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t41) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t12 & 3U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 3U);

LAB43:    t7 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t41, 2, t7, 2);
    if (t27 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t15 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t15 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t41, 2, t2, 2);
    if (t15 == 1)
        goto LAB50;

LAB51:
LAB53:
LAB52:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB54:    goto LAB19;

LAB15:    xsi_set_current_line(133, ng0);

LAB55:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t44, 0, 8);
    t3 = (t44 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t44) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t12 & 3U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 3U);

LAB56:    t7 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t44, 2, t7, 2);
    if (t27 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t44, 2, t2, 2);
    if (t15 == 1)
        goto LAB59;

LAB60:
LAB62:
LAB61:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB63:    goto LAB19;

LAB22:    xsi_set_current_line(106, ng0);
    t30 = (t0 + 2808U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = ((char*)((ng6)));
    t40 = ((char*)((ng8)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 32, t39, 32, t40, 32);
    t42 = (t0 + 2808U);
    t43 = *((char **)t42);
    t42 = (t0 + 2768U);
    t45 = (t42 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t43, t46, 2, t47, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t41, 32, t44, 32);
    xsi_vlogtype_concat(t28, 40, 40, 2U, t48, 32, t29, 8);
    t49 = (t0 + 3528);
    xsi_vlogvar_assign_value(t49, t28, 0, 0, 32);
    goto LAB32;

LAB24:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 8);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = ((char*)((ng6)));
    t14 = ((char*)((ng8)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 32, t7, 32, t14, 32);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t0 + 2768U);
    t19 = (t17 + 72U);
    t26 = *((char **)t19);
    t30 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t18, t26, 2, t30, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t41, 32, t44, 32);
    xsi_vlogtype_concat(t28, 40, 40, 2U, t48, 32, t29, 8);
    t31 = (t0 + 3528);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 32);
    goto LAB32;

LAB26:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 16);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = ((char*)((ng6)));
    t14 = ((char*)((ng8)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 32, t7, 32, t14, 32);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t0 + 2768U);
    t19 = (t17 + 72U);
    t26 = *((char **)t19);
    t30 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t18, t26, 2, t30, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t41, 32, t44, 32);
    xsi_vlogtype_concat(t28, 40, 40, 2U, t48, 32, t29, 8);
    t31 = (t0 + 3528);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 32);
    goto LAB32;

LAB28:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t29, 0, 8);
    t3 = (t29 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 24);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = ((char*)((ng6)));
    t14 = ((char*)((ng8)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_lshift(t41, 32, t7, 32, t14, 32);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t0 + 2768U);
    t19 = (t17 + 72U);
    t26 = *((char **)t19);
    t30 = ((char*)((ng12)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t18, t26, 2, t30, 32, 1);
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 32, t41, 32, t44, 32);
    xsi_vlogtype_concat(t28, 40, 40, 2U, t48, 32, t29, 8);
    t31 = (t0 + 3528);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 32);
    goto LAB32;

LAB35:    xsi_set_current_line(116, ng0);
    t14 = (t0 + 2808U);
    t17 = *((char **)t14);
    memset(t41, 0, 8);
    t14 = (t41 + 4);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t41) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    *((unsigned int *)t14) = t23;
    t24 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t24 & 65535U);
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 65535U);
    t19 = ((char*)((ng6)));
    t26 = ((char*)((ng13)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_lshift(t44, 32, t19, 32, t26, 32);
    t30 = (t0 + 2808U);
    t31 = *((char **)t30);
    t30 = (t0 + 2768U);
    t32 = (t30 + 72U);
    t39 = *((char **)t32);
    t40 = ((char*)((ng10)));
    xsi_vlog_generic_get_index_select_value(t48, 32, t31, t39, 2, t40, 32, 1);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_minus(t50, 32, t44, 32, t48, 32);
    xsi_vlogtype_concat(t28, 48, 48, 2U, t50, 32, t41, 16);
    t42 = (t0 + 3528);
    xsi_vlogvar_assign_value(t42, t28, 0, 0, 32);
    goto LAB41;

LAB37:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t41, 0, 8);
    t3 = (t41 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t41) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 16);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t12 & 65535U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 65535U);
    t7 = ((char*)((ng6)));
    t14 = ((char*)((ng13)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_lshift(t44, 32, t7, 32, t14, 32);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t0 + 2768U);
    t19 = (t17 + 72U);
    t26 = *((char **)t19);
    t30 = ((char*)((ng12)));
    xsi_vlog_generic_get_index_select_value(t48, 32, t18, t26, 2, t30, 32, 1);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_minus(t50, 32, t44, 32, t48, 32);
    xsi_vlogtype_concat(t28, 48, 48, 2U, t50, 32, t41, 16);
    t31 = (t0 + 3528);
    xsi_vlogvar_assign_value(t31, t28, 0, 0, 32);
    goto LAB41;

LAB44:    xsi_set_current_line(125, ng0);
    t14 = (t0 + 2808U);
    t17 = *((char **)t14);
    memset(t48, 0, 8);
    t14 = (t48 + 4);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t48) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    *((unsigned int *)t14) = t23;
    t24 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t24 & 255U);
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 255U);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t44, 32, 32, 2U, t19, 24, t48, 8);
    t26 = (t0 + 3528);
    xsi_vlogvar_assign_value(t26, t44, 0, 0, 32);
    goto LAB54;

LAB46:    xsi_set_current_line(126, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t48, 0, 8);
    t3 = (t48 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t48) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 8);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t44, 32, 32, 2U, t7, 24, t48, 8);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t44, 0, 0, 32);
    goto LAB54;

LAB48:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t48, 0, 8);
    t3 = (t48 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t48) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 16);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t44, 32, 32, 2U, t7, 24, t48, 8);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t44, 0, 0, 32);
    goto LAB54;

LAB50:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t48, 0, 8);
    t3 = (t48 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    *((unsigned int *)t48) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 24);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t44, 32, 32, 2U, t7, 24, t48, 8);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t44, 0, 0, 32);
    goto LAB54;

LAB57:    xsi_set_current_line(135, ng0);
    t14 = (t0 + 2808U);
    t17 = *((char **)t14);
    memset(t50, 0, 8);
    t14 = (t50 + 4);
    t18 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t50) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    *((unsigned int *)t14) = t23;
    t24 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t24 & 65535U);
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t25 & 65535U);
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t48, 32, 32, 2U, t19, 16, t50, 16);
    t26 = (t0 + 3528);
    xsi_vlogvar_assign_value(t26, t48, 0, 0, 32);
    goto LAB63;

LAB59:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 2808U);
    t5 = *((char **)t3);
    memset(t50, 0, 8);
    t3 = (t50 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t50) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 16);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t12 & 65535U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 65535U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t48, 32, 32, 2U, t7, 16, t50, 16);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t48, 0, 0, 32);
    goto LAB63;

}

static void Cont_144_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 6488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 4);
    t16 = (t0 + 6296);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_145_4(char *t0)
{
    char t5[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t5 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t5) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t5 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB10;

LAB11:
LAB12:    t56 = (t0 + 6552);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 6312);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t5) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t5);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB12;

}

static void Cont_146_5(char *t0)
{
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

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6328);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_147_6(char *t0)
{
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

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6344);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_14581537446926064602_1970055121_init()
{
	static char *pe[] = {(void *)Always_53_0,(void *)Cont_98_1,(void *)Always_100_2,(void *)Cont_144_3,(void *)Cont_145_4,(void *)Cont_146_5,(void *)Cont_147_6};
	xsi_register_didat("work_m_14581537446926064602_1970055121", "isim/cpu_fo_test_isim_beh.exe.sim/work/m_14581537446926064602_1970055121.didat");
	xsi_register_executes(pe);
}
