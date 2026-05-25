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
static unsigned int ng2[] = {128U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {192U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {224U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {240U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {248U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {252U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {254U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {255U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {127U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {63U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {31U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {15U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {13U, 0U};
static unsigned int ng27[] = {14U, 0U};
static unsigned int ng28[] = {24U, 0U};
static unsigned int ng29[] = {60U, 0U};
static unsigned int ng30[] = {126U, 0U};
static unsigned int ng31[] = {231U, 0U};
static unsigned int ng32[] = {195U, 0U};
static unsigned int ng33[] = {129U, 0U};
static int ng34[] = {1, 0};



static int sp_led_left_to_right(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(71, ng0);

LAB2:    xsi_set_current_line(72, ng0);
    t3 = (t1 + 5160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng26)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng27)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng24)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5000);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB38:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(73, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 5000);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB38;

LAB6:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB8:    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB10:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB12:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB14:    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB16:    xsi_set_current_line(79, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB18:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB20:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB22:    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB24:    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng22)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB26:    xsi_set_current_line(84, ng0);
    t4 = ((char*)((ng24)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB28:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng15)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB30:    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng7)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB32:    xsi_set_current_line(87, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB34:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

}

static int sp_led_right_to_left(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(96, ng0);

LAB2:    xsi_set_current_line(97, ng0);
    t3 = (t1 + 5480);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng26)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng27)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng24)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5320);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB38:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(98, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t1 + 5320);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB38;

LAB6:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng7)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB8:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng15)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB10:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng24)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB12:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng22)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB14:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB16:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB18:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB20:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB22:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB24:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB26:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB28:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB30:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB32:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng2)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

LAB34:    xsi_set_current_line(113, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 5320);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB38;

}

static int sp_led_center_to_side(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(121, ng0);

LAB2:    xsi_set_current_line(122, ng0);
    t3 = (t1 + 5800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5640);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB22:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(123, ng0);
    t8 = ((char*)((ng28)));
    t9 = (t1 + 5640);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB22;

LAB6:    xsi_set_current_line(124, ng0);
    t4 = ((char*)((ng29)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB8:    xsi_set_current_line(125, ng0);
    t4 = ((char*)((ng30)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB10:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB12:    xsi_set_current_line(127, ng0);
    t4 = ((char*)((ng31)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB14:    xsi_set_current_line(128, ng0);
    t4 = ((char*)((ng32)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB16:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng33)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB18:    xsi_set_current_line(130, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 5640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

}

static int sp_led_side_to_center(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(138, ng0);

LAB2:    xsi_set_current_line(139, ng0);
    t3 = (t1 + 6120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5960);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);

LAB22:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(140, ng0);
    t8 = ((char*)((ng33)));
    t9 = (t1 + 5960);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB22;

LAB6:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng32)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB8:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng31)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB10:    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB12:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng30)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB14:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng29)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB16:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng28)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

LAB18:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 5960);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB22;

}

static void Always_19_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 8096);
    *((int *)t2) = 1;
    t3 = (t0 + 7064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 3640U);
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
LAB15:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 4520);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(21, ng0);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = (t0 + 4520);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(24, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

}

static void Always_29_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 8112);
    *((int *)t2) = 1;
    t3 = (t0 + 7312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 3800U);
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
LAB15:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = ((char*)((ng24)));
    t8 = (t0 + 4840);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB17;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 4840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4840);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB17;

}

static void Always_39_2(char *t0)
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

LAB0:    t1 = (t0 + 7528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 8128);
    *((int *)t2) = 1;
    t3 = (t0 + 7560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 3480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);

LAB10:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4520);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng34)));
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

LAB17:    xsi_set_current_line(53, ng0);

LAB28:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 32, t5, 32);
    t11 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 32, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(45, ng0);

LAB19:    xsi_set_current_line(46, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 4360);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4840);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t13 = (t4 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB20:    t16 = (t12 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB23;

LAB22:    *((unsigned int *)t14) = 1;

LAB23:    t18 = (t14 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 4, t4, 4, t5, 4);
    t11 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 4, 0LL);

LAB27:    goto LAB18;

LAB21:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(49, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4680);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 0LL);
    goto LAB27;

}

static void Always_59_3(char *t0)
{
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 7776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 8144);
    *((int *)t2) = 1;
    t3 = (t0 + 7808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 3800U);
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
LAB15:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 4680);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 7584);
    t11 = (t0 + 1392);
    t12 = xsi_create_subprogram_invocation(t10, 0, t0, t11, 0, 0);
    t13 = (t0 + 5160);
    xsi_vlogvar_assign_value(t13, t9, 0, 0, 4);

LAB18:    t14 = (t0 + 7680);
    t15 = *((char **)t14);
    t16 = (t15 + 80U);
    t17 = *((char **)t16);
    t18 = (t17 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t22 = ((int  (*)(char *, char *))t21)(t0, t15);
    if (t22 != 0)
        goto LAB20;

LAB19:    t15 = (t0 + 7680);
    t23 = *((char **)t15);
    t15 = (t0 + 5000);
    t24 = (t15 + 56U);
    t25 = *((char **)t24);
    memcpy(t26, t25, 8);
    t27 = (t0 + 1392);
    t28 = (t0 + 7584);
    t29 = 0;
    xsi_delete_subprogram_invocation(t27, t23, t0, t28, t29);
    t30 = (t0 + 4200);
    xsi_vlogvar_assign_value(t30, t26, 0, 0, 8);
    goto LAB17;

LAB9:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 4680);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 7584);
    t9 = (t0 + 1824);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    t11 = (t0 + 5480);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);

LAB21:    t12 = (t0 + 7680);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t22 = ((int  (*)(char *, char *))t19)(t0, t13);
    if (t22 != 0)
        goto LAB23;

LAB22:    t13 = (t0 + 7680);
    t20 = *((char **)t13);
    t13 = (t0 + 5320);
    t21 = (t13 + 56U);
    t23 = *((char **)t21);
    memcpy(t26, t23, 8);
    t24 = (t0 + 1824);
    t25 = (t0 + 7584);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t27);
    t28 = (t0 + 4200);
    xsi_vlogvar_assign_value(t28, t26, 0, 0, 8);
    goto LAB17;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 4680);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 7584);
    t9 = (t0 + 2256);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    t11 = (t0 + 5800);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);

LAB24:    t12 = (t0 + 7680);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t22 = ((int  (*)(char *, char *))t19)(t0, t13);
    if (t22 != 0)
        goto LAB26;

LAB25:    t13 = (t0 + 7680);
    t20 = *((char **)t13);
    t13 = (t0 + 5640);
    t21 = (t13 + 56U);
    t23 = *((char **)t21);
    memcpy(t26, t23, 8);
    t24 = (t0 + 2256);
    t25 = (t0 + 7584);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t27);
    t28 = (t0 + 4200);
    xsi_vlogvar_assign_value(t28, t26, 0, 0, 8);
    goto LAB17;

LAB13:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 4680);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 7584);
    t9 = (t0 + 2688);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    t11 = (t0 + 6120);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 4);

LAB27:    t12 = (t0 + 7680);
    t13 = *((char **)t12);
    t14 = (t13 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    t19 = *((char **)t18);
    t22 = ((int  (*)(char *, char *))t19)(t0, t13);
    if (t22 != 0)
        goto LAB29;

LAB28:    t13 = (t0 + 7680);
    t20 = *((char **)t13);
    t13 = (t0 + 5960);
    t21 = (t13 + 56U);
    t23 = *((char **)t21);
    memcpy(t26, t23, 8);
    t24 = (t0 + 2688);
    t25 = (t0 + 7584);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t27);
    t28 = (t0 + 4200);
    xsi_vlogvar_assign_value(t28, t26, 0, 0, 8);
    goto LAB17;

LAB20:    t14 = (t0 + 7776U);
    *((char **)t14) = &&LAB18;
    goto LAB1;

LAB23:    t12 = (t0 + 7776U);
    *((char **)t12) = &&LAB21;
    goto LAB1;

LAB26:    t12 = (t0 + 7776U);
    *((char **)t12) = &&LAB24;
    goto LAB1;

LAB29:    t12 = (t0 + 7776U);
    *((char **)t12) = &&LAB27;
    goto LAB1;

}


extern void work_m_13372961237826068921_1861753933_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Always_29_1,(void *)Always_39_2,(void *)Always_59_3};
	static char *se[] = {(void *)sp_led_left_to_right,(void *)sp_led_right_to_left,(void *)sp_led_center_to_side,(void *)sp_led_side_to_center};
	xsi_register_didat("work_m_13372961237826068921_1861753933", "isim/tb_LED_HOMEWORK_isim_beh.exe.sim/work/m_13372961237826068921_1861753933.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
