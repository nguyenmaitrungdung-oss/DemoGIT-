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
static const char *ng0 = "/home/ise/F8_code/VERILOG/HOMEWORK_C6/updown_counter_hw1.v";
static int ng1[] = {2, 0};
static int ng2[] = {4, 0};
static int ng3[] = {8, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};



static void Cont_33_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 5216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_divide(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 6888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 5464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_divide(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 6952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);

LAB1:    return;
}

static void Cont_35_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 5712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_divide(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 7016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);

LAB1:    return;
}

static void Always_37_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t34[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    int t40;

LAB0:    t1 = (t0 + 5960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 5992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB14;

LAB11:    if (t20 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t14) = 1;

LAB14:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(57, ng0);

LAB27:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1984U);
    t11 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB31;

LAB28:    if (t20 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t14) = 1;

LAB31:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(67, ng0);

LAB44:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB34:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2144U);
    t11 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB48;

LAB45:    if (t20 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t14) = 1;

LAB48:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(77, ng0);

LAB61:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB51:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2304U);
    t11 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB65;

LAB62:    if (t20 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t14) = 1;

LAB65:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(87, ng0);

LAB78:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB68:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB13:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(52, ng0);

LAB18:    xsi_set_current_line(53, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3024);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t5) = t16;
    memset(t13, 0, 8);
    t12 = (t14 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t12) == 0)
        goto LAB19;

LAB21:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;

LAB22:    t23 = (t13 + 4);
    t24 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t25 = (~(t22));
    *((unsigned int *)t13) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB24;

LAB23:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 1U);
    t30 = (t0 + 2864);
    t31 = (t0 + 2864);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t34, t36, 2, t37, 32, 1);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    if (t40 == 1)
        goto LAB25;

LAB26:    goto LAB17;

LAB19:    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB24:    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t13) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t28 | t29);
    goto LAB23;

LAB25:    xsi_vlogvar_wait_assign_value(t30, t13, 0, *((unsigned int *)t34), 1, 0LL);
    goto LAB26;

LAB30:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(62, ng0);

LAB35:    xsi_set_current_line(63, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3824);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t16 = (t10 & 1);
    *((unsigned int *)t5) = t16;
    memset(t13, 0, 8);
    t12 = (t14 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t12) == 0)
        goto LAB36;

LAB38:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;

LAB39:    t23 = (t13 + 4);
    t24 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t25 = (~(t22));
    *((unsigned int *)t13) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB41;

LAB40:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 1U);
    t30 = (t0 + 2864);
    t31 = (t0 + 2864);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t34, t36, 2, t37, 32, 1);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    if (t40 == 1)
        goto LAB42;

LAB43:    goto LAB34;

LAB36:    *((unsigned int *)t13) = 1;
    goto LAB39;

LAB41:    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t13) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t28 | t29);
    goto LAB40;

LAB42:    xsi_vlogvar_wait_assign_value(t30, t13, 0, *((unsigned int *)t34), 1, 0LL);
    goto LAB43;

LAB47:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(72, ng0);

LAB52:    xsi_set_current_line(73, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t16 = (t10 & 1);
    *((unsigned int *)t5) = t16;
    memset(t13, 0, 8);
    t12 = (t14 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB56;

LAB54:    if (*((unsigned int *)t12) == 0)
        goto LAB53;

LAB55:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;

LAB56:    t23 = (t13 + 4);
    t24 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t25 = (~(t22));
    *((unsigned int *)t13) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB58;

LAB57:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 1U);
    t30 = (t0 + 2864);
    t31 = (t0 + 2864);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t34, t36, 2, t37, 32, 1);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    if (t40 == 1)
        goto LAB59;

LAB60:    goto LAB51;

LAB53:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB58:    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t13) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t28 | t29);
    goto LAB57;

LAB59:    xsi_vlogvar_wait_assign_value(t30, t13, 0, *((unsigned int *)t34), 1, 0LL);
    goto LAB60;

LAB64:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(82, ng0);

LAB69:    xsi_set_current_line(83, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4144);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t16 = (t10 & 1);
    *((unsigned int *)t5) = t16;
    memset(t13, 0, 8);
    t12 = (t14 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t12) == 0)
        goto LAB70;

LAB72:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;

LAB73:    t23 = (t13 + 4);
    t24 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t25 = (~(t22));
    *((unsigned int *)t13) = t25;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB75;

LAB74:    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & 1U);
    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 1U);
    t30 = (t0 + 2864);
    t31 = (t0 + 2864);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t34, t36, 2, t37, 32, 1);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    if (t40 == 1)
        goto LAB76;

LAB77:    goto LAB68;

LAB70:    *((unsigned int *)t13) = 1;
    goto LAB73;

LAB75:    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t24);
    *((unsigned int *)t13) = (t26 | t27);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t28 | t29);
    goto LAB74;

LAB76:    xsi_vlogvar_wait_assign_value(t30, t13, 0, *((unsigned int *)t34), 1, 0LL);
    goto LAB77;

}

static void Always_94_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1504U);
    t6 = *((char **)t5);
    t5 = (t0 + 1664U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4304);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(96, ng0);
    t9 = (t0 + 3664);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 4304);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB17;

LAB9:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 3824);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4304);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB17;

LAB11:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 3984);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4304);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 4144);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4304);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB17;

}

static void Always_104_5(char *t0)
{
    char t13[8];
    char t39[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;

LAB0:    t1 = (t0 + 6456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 6488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(108, ng0);

LAB10:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4304);
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

LAB12:    xsi_set_current_line(115, ng0);

LAB22:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(105, ng0);

LAB9:    xsi_set_current_line(106, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(109, ng0);

LAB14:    xsi_set_current_line(110, ng0);
    t11 = (t0 + 1824U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB18;

LAB15:    if (t25 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 8, t4, 8, t5, 8);
    t11 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 8, 0LL);

LAB21:    goto LAB13;

LAB17:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(111, ng0);
    t35 = (t0 + 2704);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 8, t37, 8, t38, 8);
    t40 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 8, 0LL);
    goto LAB21;

}


extern void work_m_15409133772016964744_0491153889_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Cont_35_2,(void *)Always_37_3,(void *)Always_94_4,(void *)Always_104_5};
	xsi_register_didat("work_m_15409133772016964744_0491153889", "isim/tb_updown_counter_hw1_isim_beh.exe.sim/work/m_15409133772016964744_0491153889.didat");
	xsi_register_executes(pe);
}
