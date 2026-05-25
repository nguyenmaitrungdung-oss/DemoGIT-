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
static const char *ng0 = "/home/ise/F8_code/VERILOG/HOMEWORK_C5/LED_full.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {25000000, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {12500000, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {6250000, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {3125000, 0};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {128U, 0U};
static unsigned int ng11[] = {192U, 0U};
static unsigned int ng12[] = {224U, 0U};
static unsigned int ng13[] = {240U, 0U};
static unsigned int ng14[] = {4U, 0U};
static unsigned int ng15[] = {248U, 0U};
static unsigned int ng16[] = {5U, 0U};
static unsigned int ng17[] = {252U, 0U};
static unsigned int ng18[] = {6U, 0U};
static unsigned int ng19[] = {254U, 0U};
static unsigned int ng20[] = {7U, 0U};
static unsigned int ng21[] = {255U, 0U};
static unsigned int ng22[] = {8U, 0U};
static unsigned int ng23[] = {127U, 0U};
static unsigned int ng24[] = {9U, 0U};
static unsigned int ng25[] = {63U, 0U};
static unsigned int ng26[] = {10U, 0U};
static unsigned int ng27[] = {31U, 0U};
static unsigned int ng28[] = {11U, 0U};
static unsigned int ng29[] = {15U, 0U};
static unsigned int ng30[] = {12U, 0U};
static unsigned int ng31[] = {13U, 0U};
static unsigned int ng32[] = {14U, 0U};



static void Always_14_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4136);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(16, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB17;

}

static void Always_24_1(char *t0)
{
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
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4152);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
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

LAB7:    xsi_set_current_line(29, ng0);

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng9)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 32, t13, 32);
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB11:    t17 = (t14 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t14))
        goto LAB14;

LAB13:    *((unsigned int *)t15) = 1;

LAB14:    t19 = (t15 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(34, ng0);

LAB20:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 32, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(25, ng0);

LAB9:    xsi_set_current_line(26, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(30, ng0);

LAB19:    xsi_set_current_line(31, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB18;

}

static void Always_41_2(char *t0)
{
    char t18[8];
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
    int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4168);
    *((int *)t2) = 1;
    t3 = (t0 + 3848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
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

LAB7:    xsi_set_current_line(46, ng0);

LAB10:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
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

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(47, ng0);

LAB14:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 2408);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB15:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t14, 4);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng26)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng30)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng31)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng32)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB46;

LAB47:
LAB49:
LAB48:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB50:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng29)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t19 = (t9 ^ t10);
    t20 = (t8 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB54;

LAB51:    if (t23 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t18) = 1;

LAB54:    t16 = (t18 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 4, t4, 4, t5, 4);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t18, 0, 0, 4, 0LL);

LAB57:    goto LAB13;

LAB16:    xsi_set_current_line(50, ng0);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 8, 0LL);
    goto LAB50;

LAB18:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB20:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB22:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB24:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB26:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB28:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB30:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB32:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB34:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB36:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB38:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB40:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB42:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB44:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB46:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB50;

LAB53:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(72, ng0);
    t17 = ((char*)((ng1)));
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t17, 0, 0, 4, 0LL);
    goto LAB57;

}


extern void work_m_18384898152590650786_0568897673_init()
{
	static char *pe[] = {(void *)Always_14_0,(void *)Always_24_1,(void *)Always_41_2};
	xsi_register_didat("work_m_18384898152590650786_0568897673", "isim/test_isim_beh.exe.sim/work/m_18384898152590650786_0568897673.didat");
	xsi_register_executes(pe);
}
