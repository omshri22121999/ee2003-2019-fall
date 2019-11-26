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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt3/exp3/top_clk.v";
static int ng1[] = {1, 0};



static void Always_17_0(char *t0)
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

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 20, t7, 32);
    t9 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 20, 0LL);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char t3[64];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = (t0 + 1688U);
    t6 = *((char **)t2);
    t2 = (t0 + 1848U);
    t7 = *((char **)t2);
    t2 = (t0 + 2008U);
    t8 = *((char **)t2);
    t2 = (t0 + 2168U);
    t9 = *((char **)t2);
    t2 = (t0 + 2488U);
    t10 = *((char **)t2);
    t2 = (t0 + 2328U);
    t11 = *((char **)t2);
    xsi_vlogtype_concat(t3, 228, 228, 8U, t11, 32, t10, 32, t9, 4, t8, 32, t7, 32, t6, 32, t5, 32, t4, 32);
    t2 = (t0 + 4784);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_bit_copy(t15, 0, t3, 0, 228);
    xsi_driver_vfirst_trans(t2, 0, 227);
    t16 = (t0 + 4704);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_08001105059103310041_0388456704_init()
{
	static char *pe[] = {(void *)Always_17_0,(void *)implSig1_execute};
	xsi_register_didat("work_m_08001105059103310041_0388456704", "isim/top_clk_isim_beh.exe.sim/work/m_08001105059103310041_0388456704.didat");
	xsi_register_executes(pe);
}
