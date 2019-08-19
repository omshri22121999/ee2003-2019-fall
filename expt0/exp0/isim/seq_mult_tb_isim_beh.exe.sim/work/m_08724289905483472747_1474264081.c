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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt0/seq_mult.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
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
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2408);
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

LAB12:    xsi_set_current_line(59, ng0);

LAB19:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t16 = (t10 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlog_mul_concat(t14, 8, 1, t2, 1U, t15, 1);
    xsi_vlogtype_concat(t13, 16, 16, 2U, t14, 8, t3, 8);
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t16 = (t10 & 1);
    *((unsigned int *)t4) = t16;
    xsi_vlog_mul_concat(t14, 8, 1, t2, 1U, t15, 1);
    xsi_vlogtype_concat(t13, 16, 16, 2U, t14, 8, t3, 8);
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 16, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(51, ng0);

LAB14:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 2408);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memset(t13, 0, 8);
    t18 = (t13 + 4);
    t19 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t20 = (t16 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t18) = t24;
    t25 = (t13 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_lshift(t13, 16, t4, 16, t5, 32);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_rshift(t13, 16, t4, 16, t5, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(53, ng0);

LAB18:    xsi_set_current_line(54, ng0);
    t31 = (t0 + 1928);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2248);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t33, 16, t36, 16);
    t37 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t37, t14, 0, 0, 16, 0LL);
    goto LAB17;

}


extern void work_m_08724289905483472747_1474264081_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_08724289905483472747_1474264081", "isim/seq_mult_tb_isim_beh.exe.sim/work/m_08724289905483472747_1474264081.didat");
	xsi_register_executes(pe);
}
