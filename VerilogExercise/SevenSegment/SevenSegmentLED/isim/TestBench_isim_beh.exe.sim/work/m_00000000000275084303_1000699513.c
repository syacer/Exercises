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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Yang Shi/Desktop/Exercises/VerilogExercise/SevenSegment/SevenSegmentLED/SevenSegmentDisplay.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {63U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {91U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {79U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {102U, 0U};
static int ng14[] = {5, 0};
static int ng15[] = {6, 0};
static unsigned int ng16[] = {124U, 0U};
static int ng17[] = {7, 0};
static unsigned int ng18[] = {7U, 0U};
static int ng19[] = {8, 0};
static unsigned int ng20[] = {127U, 0U};
static int ng21[] = {9, 0};
static unsigned int ng22[] = {0U, 0U};



static void Always_19_0(char *t0)
{
    char t6[8];
    char t8[8];
    char t26[8];
    char t30[8];
    char t38[8];
    char t80[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t81;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 7);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 7, t5, 32);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB13:    xsi_set_current_line(28, ng0);

LAB15:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB17;

LAB16:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB18;

LAB19:    t11 = (t6 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 7);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB24:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB27:    memset(t8, 0, 8);
    t11 = (t6 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t11) != 0)
        goto LAB31;

LAB32:    t18 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t18);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB33;

LAB34:    memcpy(t38, t8, 8);

LAB35:    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB50:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t22 = (t16 ^ t17);
    t23 = (t15 | t22);
    t24 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t9);
    t33 = (t24 | t32);
    t34 = (~(t33));
    t35 = (t23 & t34);
    if (t35 != 0)
        goto LAB54;

LAB51:    if (t33 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    t11 = (t6 + 4);
    t36 = *((unsigned int *)t11);
    t39 = (~(t36));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t45 = (t41 != 0);
    if (t45 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t9);
    t22 = (t16 ^ t17);
    t23 = (t15 | t22);
    t24 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t9);
    t33 = (t24 | t32);
    t34 = (~(t33));
    t35 = (t23 & t34);
    if (t35 != 0)
        goto LAB62;

LAB59:    if (t33 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t11 = (t6 + 4);
    t36 = *((unsigned int *)t11);
    t39 = (~(t36));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t45 = (t41 != 0);
    if (t45 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(48, ng0);

LAB67:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);

LAB65:
LAB57:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB68:    t5 = ((char*)((ng2)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t5, 32);
    if (t62 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng3)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng8)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng10)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng12)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng14)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng15)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng17)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng19)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng21)));
    t62 = xsi_vlog_unsigned_case_compare(t4, 7, t2, 32);
    if (t62 == 1)
        goto LAB87;

LAB88:
LAB90:
LAB89:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB91:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(21, ng0);

LAB14:    xsi_set_current_line(22, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 7);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 7, t4, 7, t5, 7);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    goto LAB13;

LAB17:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(28, ng0);

LAB23:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 3368);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 7, t19, 7, t20, 7);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 7);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB15;

LAB25:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t8) = 1;
    goto LAB32;

LAB31:    t12 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB32;

LAB33:    t19 = (t0 + 2888);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t25 = ((char*)((ng3)));
    memset(t26, 0, 8);
    t27 = (t21 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB37;

LAB36:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t21) > *((unsigned int *)t25))
        goto LAB39;

LAB38:    *((unsigned int *)t26) = 1;

LAB39:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t31) != 0)
        goto LAB43;

LAB44:    t39 = *((unsigned int *)t8);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t8 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB35;

LAB37:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t30) = 1;
    goto LAB44;

LAB43:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB44;

LAB45:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t8 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t8);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB47;

LAB48:    xsi_set_current_line(36, ng0);
    t76 = (t0 + 2888);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = ((char*)((ng5)));
    memset(t80, 0, 8);
    xsi_vlog_unsigned_add(t80, 2, t78, 2, t79, 2);
    t81 = (t0 + 2888);
    xsi_vlogvar_assign_value(t81, t80, 0, 0, 2);
    goto LAB50;

LAB53:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(40, ng0);

LAB58:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 2088);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 7);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB57;

LAB61:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(44, ng0);

LAB66:    xsi_set_current_line(45, ng0);
    t12 = (t0 + 2248);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 7);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB65;

LAB69:    xsi_set_current_line(54, ng0);
    t7 = ((char*)((ng6)));
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 7);
    goto LAB91;

LAB71:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB73:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB75:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB77:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB79:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB81:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB83:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB85:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

LAB87:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB91;

}


extern void work_m_00000000000275084303_1000699513_init()
{
	static char *pe[] = {(void *)Always_19_0};
	xsi_register_didat("work_m_00000000000275084303_1000699513", "isim/TestBench_isim_beh.exe.sim/work/m_00000000000275084303_1000699513.didat");
	xsi_register_executes(pe);
}
