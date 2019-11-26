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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt3/Reg_Parser.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {9U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {11U, 0U};



static void Always_7_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t15[8];
    char t27[8];
    char t28[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    int t26;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 7);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 7);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 3U);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 12);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 12);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 7U);
    xsi_vlogtype_concat(t4, 5, 5, 2U, t15, 3, t5, 2);

LAB6:    t25 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t25, 5);
    if (t26 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t26 == 1)
        goto LAB21;

LAB22:    t3 = ((char*)((ng9)));
    t47 = xsi_vlog_unsigned_case_compare(t4, 5, t3, 5);
    if (t47 == 1)
        goto LAB23;

LAB24:    t6 = ((char*)((ng10)));
    t48 = xsi_vlog_unsigned_case_compare(t4, 5, t6, 5);
    if (t48 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(16, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(9, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 0);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t38 = ((char*)((ng1)));
    xsi_vlogtype_concat(t27, 32, 32, 2U, t38, 24, t28, 8);
    t39 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t39, t27, 0, 0, 32, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(10, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t16 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 32, 32, 3U, t16, 16, t15, 8, t3, 8);
    t17 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t17, t5, 0, 0, 32, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t16 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 32, 32, 3U, t16, 8, t15, 8, t3, 16);
    t17 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t17, t5, 0, 0, 32, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t15, 8, t3, 24);
    t16 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t16, t5, 0, 0, 32, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(13, ng0);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t8 = (t0 + 1208U);
    t16 = *((char **)t8);
    memset(t27, 0, 8);
    t8 = (t27 + 4);
    t17 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t27) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t23 & 255U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 255U);
    t18 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 32, 32, 3U, t18, 16, t27, 8, t15, 8);
    t25 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t25, t5, 0, 0, 32, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 8);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
    t16 = (t0 + 1208U);
    t17 = *((char **)t16);
    memset(t27, 0, 8);
    t16 = (t27 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t27) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t23 & 255U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 255U);
    xsi_vlogtype_concat(t5, 32, 32, 3U, t27, 8, t15, 8, t3, 16);
    t25 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t25, t5, 0, 0, 32, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 24);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t8 = (t0 + 1208U);
    t16 = *((char **)t8);
    memset(t27, 0, 8);
    t8 = (t27 + 4);
    t17 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 16);
    *((unsigned int *)t27) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 16);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t23 & 255U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 255U);
    t18 = (t0 + 1208U);
    t25 = *((char **)t18);
    memset(t28, 0, 8);
    t18 = (t28 + 4);
    t29 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    t33 = (t32 >> 8);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t29);
    t35 = (t34 >> 8);
    *((unsigned int *)t18) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & 255U);
    t30 = (t0 + 1208U);
    t31 = *((char **)t30);
    memset(t40, 0, 8);
    t30 = (t40 + 4);
    t38 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (t41 >> 0);
    *((unsigned int *)t40) = t42;
    t43 = *((unsigned int *)t38);
    t44 = (t43 >> 0);
    *((unsigned int *)t30) = t44;
    t45 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t45 & 255U);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & 255U);
    xsi_vlogtype_concat(t5, 32, 32, 4U, t40, 8, t28, 8, t27, 8, t15, 8);
    t39 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t39, t5, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    goto LAB19;

LAB23:    goto LAB19;

LAB25:    goto LAB19;

}


extern void work_m_04217103345188076801_0710432077_init()
{
	static char *pe[] = {(void *)Always_7_0};
	xsi_register_didat("work_m_04217103345188076801_0710432077", "isim/REDUCED_CPU_isim_beh.exe.sim/work/m_04217103345188076801_0710432077.didat");
	xsi_register_executes(pe);
}
