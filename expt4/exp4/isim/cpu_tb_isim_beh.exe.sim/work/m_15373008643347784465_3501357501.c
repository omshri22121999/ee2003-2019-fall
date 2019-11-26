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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt4/dmem_decoder.v";
static unsigned int ng1[] = {40U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {41U, 0U};
static unsigned int ng9[] = {12U, 0U};
static unsigned int ng10[] = {42U, 0U};
static unsigned int ng11[] = {15U, 0U};



static void Always_44_0(char *t0)
{
    char t7[8];
    char t19[8];
    char t20[8];
    char t32[8];
    char t33[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t21;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3976);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(109, ng0);

LAB44:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);

LAB16:    xsi_set_current_line(50, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 3U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);

LAB17:    t17 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t7, 2, t17, 2);
    if (t18 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB9:    xsi_set_current_line(79, ng0);

LAB31:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t19) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t15 & 3U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 3U);

LAB32:    t9 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t19, 2, t9, 2);
    if (t18 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(95, ng0);

LAB42:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB39:    goto LAB15;

LAB11:    xsi_set_current_line(103, ng0);

LAB43:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t3 = (t32 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    memset(t33, 0, 8);
    t9 = (t33 + 4);
    t17 = (t10 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (t24 >> 0);
    *((unsigned int *)t33) = t25;
    t26 = *((unsigned int *)t17);
    t27 = (t26 >> 0);
    *((unsigned int *)t9) = t27;
    t28 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t28 & 255U);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t29 & 255U);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t41, 0, 8);
    t21 = (t41 + 4);
    t23 = (t22 + 4);
    t34 = *((unsigned int *)t22);
    t35 = (t34 >> 16);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t23);
    t37 = (t36 >> 16);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t38 & 255U);
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & 255U);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    memset(t42, 0, 8);
    t30 = (t42 + 4);
    t40 = (t31 + 4);
    t43 = *((unsigned int *)t31);
    t44 = (t43 >> 24);
    *((unsigned int *)t42) = t44;
    t45 = *((unsigned int *)t40);
    t46 = (t45 >> 24);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t47 & 255U);
    t48 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t48 & 255U);
    xsi_vlogtype_concat(t20, 32, 32, 4U, t42, 8, t41, 8, t33, 8, t32, 8);
    t49 = (t0 + 2088);
    xsi_vlogvar_assign_value(t49, t20, 0, 0, 32);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB15;

LAB18:    xsi_set_current_line(53, ng0);

LAB27:    xsi_set_current_line(54, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 255U);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 255U);
    t30 = ((char*)((ng2)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t30, 24, t20, 8);
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t19, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB26;

LAB20:    xsi_set_current_line(59, ng0);

LAB28:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    memset(t20, 0, 8);
    t4 = (t20 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t10 = ((char*)((ng2)));
    xsi_vlogtype_concat(t19, 32, 32, 3U, t10, 16, t20, 8, t3, 8);
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB26;

LAB22:    xsi_set_current_line(65, ng0);

LAB29:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    memset(t20, 0, 8);
    t4 = (t20 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t10 = ((char*)((ng2)));
    xsi_vlogtype_concat(t19, 32, 32, 3U, t10, 8, t20, 8, t3, 16);
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB26;

LAB24:    xsi_set_current_line(71, ng0);

LAB30:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    memset(t20, 0, 8);
    t4 = (t20 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t20) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t20, 8, t3, 24);
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t19, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB26;

LAB33:    xsi_set_current_line(83, ng0);

LAB40:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 1368U);
    t17 = *((char **)t10);
    memset(t32, 0, 8);
    t10 = (t32 + 4);
    t21 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = (t24 >> 0);
    *((unsigned int *)t32) = t25;
    t26 = *((unsigned int *)t21);
    t27 = (t26 >> 0);
    *((unsigned int *)t10) = t27;
    t28 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t28 & 255U);
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 255U);
    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    memset(t33, 0, 8);
    t22 = (t33 + 4);
    t30 = (t23 + 4);
    t34 = *((unsigned int *)t23);
    t35 = (t34 >> 8);
    *((unsigned int *)t33) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 8);
    *((unsigned int *)t22) = t37;
    t38 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t38 & 255U);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t39 & 255U);
    t31 = ((char*)((ng2)));
    xsi_vlogtype_concat(t20, 32, 32, 3U, t31, 16, t33, 8, t32, 8);
    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t20, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB39;

LAB35:    xsi_set_current_line(89, ng0);

LAB41:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t32) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t10 = (t0 + 1368U);
    t17 = *((char **)t10);
    memset(t33, 0, 8);
    t10 = (t33 + 4);
    t21 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    t25 = (t24 >> 8);
    *((unsigned int *)t33) = t25;
    t26 = *((unsigned int *)t21);
    t27 = (t26 >> 8);
    *((unsigned int *)t10) = t27;
    t28 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t28 & 255U);
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 255U);
    xsi_vlogtype_concat(t20, 32, 32, 3U, t33, 8, t32, 8, t3, 16);
    t22 = (t0 + 2088);
    xsi_vlogvar_assign_value(t22, t20, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB39;

}

static void Cont_117_1(char *t0)
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

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3992);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_118_2(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 4008);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_15373008643347784465_3501357501_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Cont_117_1,(void *)Cont_118_2};
	xsi_register_didat("work_m_15373008643347784465_3501357501", "isim/cpu_tb_isim_beh.exe.sim/work/m_15373008643347784465_3501357501.didat");
	xsi_register_executes(pe);
}
