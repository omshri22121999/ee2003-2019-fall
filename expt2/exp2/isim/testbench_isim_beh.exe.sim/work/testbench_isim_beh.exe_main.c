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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_04284627112054182733_0090163086_init();
    xilinxcorelib_ver_m_18166792875774041790_2843080771_init();
    xilinxcorelib_ver_m_17738287534884592592_3614564508_init();
    xilinxcorelib_ver_m_10066368518302646626_1548299419_init();
    work_m_14056882636803624207_2330151233_init();
    work_m_09848345620855543590_2731210154_init();
    xilinxcorelib_ver_m_04284627112054182733_3395926487_init();
    xilinxcorelib_ver_m_18166792875774041790_2690486219_init();
    xilinxcorelib_ver_m_01834407678936685707_0269396778_init();
    xilinxcorelib_ver_m_10066368518302646626_1977333290_init();
    work_m_14056882636803624207_2074914326_init();
    work_m_12052043716661239302_1352674679_init();
    work_m_14554852654564248488_1621107508_init();
    work_m_07741298924082653373_1949178628_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_07741298924082653373_1949178628");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
