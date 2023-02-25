class hlc_24Rnd_75x55_B_stgw: 30Rnd_556x45_Stanag {
    GAMMO(750x55,basic,basic);
};
class hlc_24Rnd_75x55_ap_stgw: hlc_24Rnd_75x55_B_stgw {
    GAMMO(750x55,AP,basic);
};
class hlc_24Rnd_75x55_T_stgw: hlc_24Rnd_75x55_ap_stgw {
    GAMMO(750x55,tracer,basic);
};

class 20Rnd_762x51_Mag;
class sp_fwa_24rnd_75x55_sig510: 20Rnd_762x51_Mag {
    GAMMO(750x55,basic,basic);
};
class sp_fwa_24rnd_75x55_sig510_tracer: sp_fwa_24rnd_75x55_sig510 {
    GAMMO(750x55,tracer,basic);
};

class hlc_20Rnd_762x51_b_amt: hlc_24Rnd_75x55_B_stgw {
    GAMMO(762x51,m80a1epr,basic);
};
class hlc_20Rnd_762x51_bball_amt: hlc_24Rnd_75x55_B_stgw {
    GAMMO(762x51,mk319,basic);
};
class hlc_20Rnd_762x51_mk316_amt: hlc_24Rnd_75x55_B_stgw {
    GAMMO(762x51,mk316,basic);
};
class hlc_20rnd_762x51_M_amt: hlc_20Rnd_762x51_b_amt {
    GAMMO(762x51,m62a1t,basic);
};
class hlc_20Rnd_762x51_T_amt: hlc_20Rnd_762x51_b_amt {
    GAMMO(762x51,m62a1t,basic);
};
class hlc_20Rnd_762x51_S_amt: hlc_20Rnd_762x51_b_amt {
    GAMMO(762x51,sd,basic);
};
class hlc_20rnd_762x51_MDIM_amt: hlc_20Rnd_762x51_b_amt {
    GAMMO(762x51,IRTracer,basic);
};
class hlc_20Rnd_762x51_TDim_amt: hlc_20Rnd_762x51_b_amt {
    GAMMO(762x51,IRTracer,basic);
};
