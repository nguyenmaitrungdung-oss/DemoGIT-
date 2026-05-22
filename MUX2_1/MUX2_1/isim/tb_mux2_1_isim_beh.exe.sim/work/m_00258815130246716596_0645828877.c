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
static const char *ng0 = "/home/ise/F8_code/VERILOG/MUX2_1/test.v";
static const char *ng1 = "time\tI0 I1 sel | out";
static const char *ng2 = "------------------------";
static int ng3[] = {0, 0};
static const char *ng4 = "%0dns\t%b  %b  %b   |  %b";
static int ng5[] = {1, 0};
static const char *ng6 = "Test completed.";



static void Initial_16_0(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    xsi_set_current_line(18, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(21, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(22, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(23, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(24, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(25, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(26, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(27, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(28, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1448);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 1048U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng4, 6, t0, (char)118, t4, 64, (char)118, t6, 1, (char)118, t9, 1, (char)118, t12, 1, (char)118, t14, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(31, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(32, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00258815130246716596_0645828877_init()
{
	static char *pe[] = {(void *)Initial_16_0};
	xsi_register_didat("work_m_00258815130246716596_0645828877", "isim/tb_mux2_1_isim_beh.exe.sim/work/m_00258815130246716596_0645828877.didat");
	xsi_register_executes(pe);
}
