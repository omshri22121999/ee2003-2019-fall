///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2019 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 14.7
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : vio.veo
// /___/   /\     Timestamp  : Tue Nov 26 13:42:06 IST 2019
// \   \  /  \
//  \___\/\___\
//
// Design Name: ISE Instantiation template
///////////////////////////////////////////////////////////////////////////////

// The following must be inserted into your Verilog file for this
// core to be instantiated. Change the instance name and port connections
// (in parentheses) to your own signal names.

//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
vio YourInstanceName (
    .CONTROL(CONTROL), // INOUT BUS [35:0]
    .CLK(CLK), // IN
    .ASYNC_OUT(ASYNC_OUT), // OUT BUS [0:0]
    .SYNC_IN(SYNC_IN) // IN BUS [95:0]
);

// INST_TAG_END ------ End INSTANTIATION Template ---------

