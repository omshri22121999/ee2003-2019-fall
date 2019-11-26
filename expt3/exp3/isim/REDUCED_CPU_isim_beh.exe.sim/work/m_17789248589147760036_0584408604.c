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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/REDUCED_CPU.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void NetDecl_34_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 9520);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31U);
    t12 = (t0 + 9360);
    *((int *)t12) = 1;

LAB1:    return;
}

static void NetDecl_35_1(char *t0)
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
    char *t14;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 9584);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31U);
    t14 = (t0 + 9376);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_37_2(char *t0)
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

LAB0:    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 9392);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_38_3(char *t0)
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

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 9408);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_39_4(char *t0)
{
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

LAB0:    t1 = (t0 + 8792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 9424);
    *((int *)t2) = 1;
    t3 = (t0 + 8824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB7;

}

static void Always_60_5(char *t0)
{
    char t15[8];
    char t16[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t17;
    int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    int t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 9040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 9440);
    *((int *)t2) = 1;
    t3 = (t0 + 9072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);

LAB10:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng2)));
    t18 = xsi_vlog_unsigned_case_compare(t4, 1, t5, 1);
    if (t18 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t18 == 1)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3528);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t13);
    t10 = (t8 & t9);
    *((unsigned int *)t15) = t10;
    t14 = (t5 + 4);
    t19 = (t13 + 4);
    t20 = (t15 + 4);
    t11 = *((unsigned int *)t14);
    t12 = *((unsigned int *)t19);
    t17 = (t11 | t12);
    *((unsigned int *)t20) = t17;
    t21 = *((unsigned int *)t20);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB23;

LAB24:
LAB25:
LAB17:    t42 = ((char*)((ng3)));
    t43 = xsi_vlog_unsigned_case_compare(t15, 1, t42, 1);
    if (t43 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);

LAB9:    xsi_set_current_line(62, ng0);
    t13 = (t0 + 2488U);
    t14 = *((char **)t13);
    t13 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 1073741823U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 1073741823U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t16, 30, t2, 2);
    t13 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t13, t15, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(67, ng0);
    t6 = (t0 + 4488);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t14 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB16;

LAB14:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 4328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(71, ng0);
    t44 = ((char*)((ng2)));
    t46 = (t0 + 2648U);
    t47 = *((char **)t46);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t48 = (t47 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (t49 >> 2);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 2);
    *((unsigned int *)t46) = t52;
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 1073741823U);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 1073741823U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t45, 30, t44, 2);
    t55 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t55, t16, 0, 0, 32, 0LL);
    goto LAB22;

LAB23:    t23 = *((unsigned int *)t15);
    t24 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t23 | t24);
    t25 = (t5 + 4);
    t26 = (t13 + 4);
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t18 = (t28 & t30);
    t35 = (t32 & t34);
    t36 = (~(t18));
    t37 = (~(t35));
    t38 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t38 & t36);
    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & t37);
    t40 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t40 & t36);
    t41 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t41 & t37);
    goto LAB25;

}


extern void work_m_17789248589147760036_0584408604_init()
{
	static char *pe[] = {(void *)NetDecl_34_0,(void *)NetDecl_35_1,(void *)Cont_37_2,(void *)Cont_38_3,(void *)Always_39_4,(void *)Always_60_5};
	xsi_register_didat("work_m_17789248589147760036_0584408604", "isim/REDUCED_CPU_isim_beh.exe.sim/work/m_17789248589147760036_0584408604.didat");
	xsi_register_executes(pe);
}
