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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt2/dmem.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Always_69_0(char *t0)
{
    char t4[8];
    char t19[8];
    char t20[8];
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
    int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    t3 = (t0 + 5432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 2);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 1023U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 1023U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 10);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 1023U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 1023U);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 10);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 1023U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 1023U);
    t6 = (t0 + 3688);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 10);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 2);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 1023U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 1023U);
    t6 = (t0 + 3848);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 10);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = (t0 + 4008);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 8);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 8);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = (t0 + 4168);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = (t0 + 4328);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 24);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 24);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = (t0 + 4488);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    t2 = (t0 + 2008U);
    t7 = *((char **)t2);
    t2 = (t0 + 2168U);
    t14 = *((char **)t2);
    xsi_vlogtype_concat(t20, 32, 32, 4U, t14, 8, t7, 8, t6, 8, t5, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t20, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(81, ng0);

LAB16:    xsi_set_current_line(82, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(87, ng0);

LAB17:    xsi_set_current_line(88, ng0);
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
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB18:    t14 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t16 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB11:    xsi_set_current_line(115, ng0);

LAB32:    xsi_set_current_line(116, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t19, 0, 8);
    t5 = (t19 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);

LAB33:    t14 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t19, 32, t14, 32);
    if (t16 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t19, 32, t2, 32);
    if (t15 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(130, ng0);

LAB43:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);

LAB40:    goto LAB15;

LAB13:    xsi_set_current_line(138, ng0);

LAB44:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB19:    xsi_set_current_line(89, ng0);

LAB28:    xsi_set_current_line(90, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(95, ng0);

LAB29:    xsi_set_current_line(96, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(101, ng0);

LAB30:    xsi_set_current_line(102, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(107, ng0);

LAB31:    xsi_set_current_line(108, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB34:    xsi_set_current_line(117, ng0);

LAB41:    xsi_set_current_line(118, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB40;

LAB36:    xsi_set_current_line(123, ng0);

LAB42:    xsi_set_current_line(124, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB40;

}


extern void work_m_12052043716661239302_1352674679_init()
{
	static char *pe[] = {(void *)Always_69_0};
	xsi_register_didat("work_m_12052043716661239302_1352674679", "isim/testbench_isim_beh.exe.sim/work/m_12052043716661239302_1352674679.didat");
	xsi_register_executes(pe);
}
