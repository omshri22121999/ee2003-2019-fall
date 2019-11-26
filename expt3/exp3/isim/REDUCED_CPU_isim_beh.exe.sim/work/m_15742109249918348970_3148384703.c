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
static const char *ng0 = "/home/omshripc/Sem 5/EE2003/ISE/expt3/ALU_Control.v";
static unsigned int ng1[] = {55U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {23U, 0U};
static unsigned int ng4[] = {111U, 0U};
static unsigned int ng5[] = {103U, 0U};
static unsigned int ng6[] = {99U, 0U};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {12, 0};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {13, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {3, 0};
static unsigned int ng13[] = {5U, 0U};
static int ng14[] = {11, 0};
static unsigned int ng15[] = {6U, 0U};
static int ng16[] = {4, 0};
static unsigned int ng17[] = {7U, 0U};
static int ng18[] = {10, 0};
static int ng19[] = {15, 0};
static unsigned int ng20[] = {3U, 0U};
static unsigned int ng21[] = {35U, 0U};
static unsigned int ng22[] = {19U, 0U};
static unsigned int ng23[] = {2U, 0U};
static int ng24[] = {5, 0};
static int ng25[] = {9, 0};
static int ng26[] = {8, 0};
static int ng27[] = {2, 0};
static int ng28[] = {6, 0};
static unsigned int ng29[] = {13U, 0U};
static int ng30[] = {7, 0};
static unsigned int ng31[] = {51U, 0U};
static unsigned int ng32[] = {8U, 0U};
static int ng33[] = {1, 0};



static void Always_12_0(char *t0)
{
    char t4[8];
    char t18[8];
    char t20[8];
    char t21[8];
    char t22[8];
    char t30[8];
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
    char *t16;
    char *t17;
    int t19;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t5 = (t0 + 1688U);
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
    *((unsigned int *)t4) = (t12 & 127U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 127U);

LAB5:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t14, 7);
    if (t15 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng22)));
    t19 = xsi_vlog_unsigned_case_compare(t4, 7, t3, 7);
    if (t19 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng31)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 7);
    if (t15 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(85, ng0);

LAB97:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(14, ng0);

LAB27:    xsi_set_current_line(15, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t16, t17, 0, 0, 32, 0LL);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB26;

LAB8:    xsi_set_current_line(19, ng0);

LAB28:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB26;

LAB10:    xsi_set_current_line(24, ng0);

LAB29:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB26;

LAB12:    xsi_set_current_line(29, ng0);

LAB30:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB26;

LAB14:    xsi_set_current_line(34, ng0);

LAB31:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 12);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);

LAB32:    t6 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 3, t6, 3);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 3, t2, 3);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 3, t2, 3);
    if (t15 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 3, t2, 3);
    if (t15 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 3, t2, 3);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 3, t2, 3);
    if (t15 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB47:    goto LAB26;

LAB16:    xsi_set_current_line(47, ng0);

LAB48:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB26;

LAB18:    goto LAB16;

LAB20:    xsi_set_current_line(52, ng0);

LAB49:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t21 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 12);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    memset(t22, 0, 8);
    t6 = (t22 + 4);
    t14 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 30);
    t25 = (t24 & 1);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t14);
    t27 = (t26 >> 30);
    t28 = (t27 & 1);
    *((unsigned int *)t6) = t28;
    xsi_vlogtype_concat(t20, 4, 4, 2U, t22, 1, t21, 3);

LAB50:    t16 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t16, 4);
    if (t15 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t15 == 1)
        goto LAB67;

LAB68:
LAB70:
LAB69:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB71:    goto LAB26;

LAB22:    xsi_set_current_line(68, ng0);

LAB72:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t22, 0, 8);
    t2 = (t22 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 12);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    memset(t30, 0, 8);
    t6 = (t30 + 4);
    t14 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 30);
    t25 = (t24 & 1);
    *((unsigned int *)t30) = t25;
    t26 = *((unsigned int *)t14);
    t27 = (t26 >> 30);
    t28 = (t27 & 1);
    *((unsigned int *)t6) = t28;
    xsi_vlogtype_concat(t21, 4, 4, 2U, t30, 1, t22, 3);

LAB73:    t16 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t16, 4);
    if (t15 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng32)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t21, 4, t2, 4);
    if (t15 == 1)
        goto LAB92;

LAB93:
LAB95:
LAB94:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB96:    goto LAB26;

LAB33:    xsi_set_current_line(38, ng0);
    t7 = ((char*)((ng8)));
    t14 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 5, 0LL);
    goto LAB47;

LAB35:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB47;

LAB37:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB47;

LAB51:    xsi_set_current_line(56, ng0);
    t17 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t17, 0, 0, 5, 0LL);
    goto LAB71;

LAB53:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB55:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB57:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB59:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB61:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB63:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB65:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB67:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB71;

LAB74:    xsi_set_current_line(72, ng0);
    t17 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t29, t17, 0, 0, 5, 0LL);
    goto LAB96;

LAB76:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng33)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB78:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng27)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB80:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB82:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB84:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB86:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB88:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB90:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng25)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

LAB92:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 5, 0LL);
    goto LAB96;

}


extern void work_m_15742109249918348970_3148384703_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_15742109249918348970_3148384703", "isim/REDUCED_CPU_isim_beh.exe.sim/work/m_15742109249918348970_3148384703.didat");
	xsi_register_executes(pe);
}
