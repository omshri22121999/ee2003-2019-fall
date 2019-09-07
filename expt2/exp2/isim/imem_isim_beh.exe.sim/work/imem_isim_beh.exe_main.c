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
    work_m_04542579440115154937_2731210154_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_04542579440115154937_2731210154");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
