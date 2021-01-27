class 29rnd_300BLK_STANAG: 30Rnd_556x45_Stanag {
    GAMMO(300BO,basic,basic);
};
class 29rnd_300BLK_STANAG_S: 29rnd_300BLK_STANAG {
    GAMMO(300BO,SMK,basic);
};
class 29rnd_300BLK_STANAG_T: 29rnd_300BLK_STANAG {
    GAMMO(300BO,RNTB,basic);
};

class hlc_24Rnd_75x55_B_stgw: 30Rnd_556x45_Stanag {
    GAMMO(750x55,basic,basic);
};
class hlc_24Rnd_75x55_ap_stgw: hlc_24Rnd_75x55_B_stgw {
    GAMMO(750x55,AP,basic);
};
class hlc_24Rnd_75x55_T_stgw: hlc_24Rnd_75x55_B_stgw {
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
