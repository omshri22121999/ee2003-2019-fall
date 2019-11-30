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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt6/alu_32_bit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {13U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {4294967295U, 4294967295U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB41;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_lshift(t17, 32, t4, 32, t10, 4);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t17, 0, 0, 32);
    goto LAB41;

LAB11:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t18, 0, 0, 32);
    goto LAB41;

LAB13:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB43;

LAB42:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB44;

LAB45:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 32);
    goto LAB41;

LAB15:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB47;

LAB48:
LAB49:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 32);
    goto LAB41;

LAB17:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_rshift(t17, 32, t4, 32, t10, 4);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t17, 0, 0, 32);
    goto LAB41;

LAB19:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB50;

LAB51:
LAB52:    t37 = (t0 + 1928);
    xsi_vlogvar_assign_value(t37, t10, 0, 0, 32);
    goto LAB41;

LAB21:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t20 = *((unsigned int *)t9);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB53;

LAB54:
LAB55:    t37 = (t0 + 1928);
    xsi_vlogvar_assign_value(t37, t10, 0, 0, 32);
    goto LAB41;

LAB23:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB41;

LAB25:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t15 & 15U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 15U);
    memset(t18, 0, 8);
    xsi_vlog_signed_arith_rshift(t18, 32, t4, 32, t17, 4);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t18, 0, 0, 32);
    goto LAB41;

LAB27:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t20 = (t13 | t16);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t25 = (~(t23));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB59;

LAB56:    if (t23 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t10) = 1;

LAB59:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 32);
    goto LAB41;

LAB29:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t20 = (t13 | t16);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t8);
    t23 = (t21 | t22);
    t25 = (~(t23));
    t26 = (t20 & t25);
    if (t26 != 0)
        goto LAB61;

LAB60:    if (t23 != 0)
        goto LAB62;

LAB63:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 32);
    goto LAB41;

LAB31:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t18, 0, 0, 32);
    goto LAB41;

LAB33:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_greatereq(t18, 32, t4, 32, t7, 32);
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t18, 0, 0, 32);
    goto LAB41;

LAB35:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB65;

LAB64:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB66;

LAB67:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 32);
    goto LAB41;

LAB37:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB70;

LAB69:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB72;

LAB71:    *((unsigned int *)t10) = 1;

LAB72:    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 32);
    goto LAB41;

LAB43:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t10) = 1;
    goto LAB45;

LAB47:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    goto LAB49;

LAB50:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t19 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (t31 & t30);
    t33 = (~(t28));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    goto LAB52;

LAB53:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t22 | t23);
    t19 = (t4 + 4);
    t24 = (t7 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t29 = (~(t27));
    t30 = *((unsigned int *)t7);
    t31 = (~(t30));
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    t28 = (t26 & t29);
    t32 = (t31 & t34);
    t35 = (~(t28));
    t36 = (~(t32));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t35);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t36);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t35);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t36);
    goto LAB55;

LAB58:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB61:    *((unsigned int *)t10) = 1;
    goto LAB63;

LAB62:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB65:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t10) = 1;
    goto LAB67;

LAB70:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB72;

}

static void Cont_53_1(char *t0)
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

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3424);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_18324115645614503626_3222827017_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_53_1};
	xsi_register_didat("work_m_18324115645614503626_3222827017", "isim/CPU_isim_beh.exe.sim/work/m_18324115645614503626_3222827017.didat");
	xsi_register_executes(pe);
}
