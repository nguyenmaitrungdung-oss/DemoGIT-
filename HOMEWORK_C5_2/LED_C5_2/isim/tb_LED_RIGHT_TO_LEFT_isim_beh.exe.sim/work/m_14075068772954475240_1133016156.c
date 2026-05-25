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
static const char *ng0 = "/home/ise/F8_code/VERILOG/HOMEWORK_C5_2/LED2_C5.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {15U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {31U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {63U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {127U, 0U};
static unsigned int ng14[] = {255U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {254U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {252U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {248U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {240U, 0U};
static unsigned int ng23[] = {12U, 0U};
static unsigned int ng24[] = {224U, 0U};
static unsigned int ng25[] = {13U, 0U};
static unsigned int ng26[] = {192U, 0U};
static unsigned int ng27[] = {14U, 0U};
static unsigned int ng28[] = {128U, 0U};



static void Always_17_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 4520);
    *((int *)t2) = 1;
    t3 = (t0 + 3736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(19, ng0);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

}

static void Always_27_1(char *t0)
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 3984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);

LAB10:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2632);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng5)));
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

LAB17:    xsi_set_current_line(41, ng0);

LAB27:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 32, t5, 32);
    t11 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 32, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(33, ng0);

LAB19:    xsi_set_current_line(34, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB23;

LAB20:    if (t26 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t16 = (t14 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t14);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 4, t4, 4, t5, 4);
    t11 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 4, 0LL);

LAB26:    goto LAB18;

LAB22:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(37, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 4, 0LL);
    goto LAB26;

}

static void Always_47_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4552);
    *((int *)t2) = 1;
    t3 = (t0 + 4232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2312);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB41;

LAB9:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB11:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB13:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB15:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB17:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB19:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB21:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB23:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB25:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB27:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB29:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB31:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB33:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB35:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

LAB37:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB41;

}


extern void work_m_14075068772954475240_1133016156_init()
{
	static char *pe[] = {(void *)Always_17_0,(void *)Always_27_1,(void *)Always_47_2};
	xsi_register_didat("work_m_14075068772954475240_1133016156", "isim/tb_LED_RIGHT_TO_LEFT_isim_beh.exe.sim/work/m_14075068772954475240_1133016156.didat");
	xsi_register_executes(pe);
}
