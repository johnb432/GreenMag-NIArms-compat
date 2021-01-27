class hlc_5rnd_3006_1903: 30Rnd_556x45_Stanag {
    GAMMO(3006S,M2,basic);
};
class hlc_5rnd_3006_T_1903: hlc_5rnd_3006_1903 {
    GAMMO(3006S,M2T,basic);
};

class hlc_5rnd_300WM_FMJ_AWM: 30Rnd_556x45_Stanag {
    GAMMO(300win,basic,basic);
};
class hlc_5rnd_300WM_mk248_AWM: hlc_5rnd_300WM_FMJ_AWM {
    GAMMO(300win,mk248mod1,basic);
};
class hlc_5rnd_300WM_BTSP_AWM: hlc_5rnd_300WM_FMJ_AWM {
    GAMMO(300win,A191,basic);
};
class hlc_5rnd_300WM_AP_AWM: hlc_5rnd_300WM_FMJ_AWM {
    GAMMO(300win,AP,basic);
};
class hlc_5rnd_300WM_SBT_AWM: hlc_5rnd_300WM_FMJ_AWM {
    GAMMO(300win,sd,basic);
};
class hlc_5rnd_300WM_T_AWM: hlc_5rnd_300WM_FMJ_AWM {
    GAMMO(300win,tracer,basic);
};

class hlc_200rnd_556x45_M_SAW: 30Rnd_556x45_Stanag {
    GBELT(556x45,M856A1,basic);
};
class hlc_200rnd_556x45_B_SAW: hlc_200rnd_556x45_M_SAW {
    GBELT(556x45,M855A1,basic);
};
class hlc_200rnd_556x45_Mdim_SAW: hlc_200rnd_556x45_M_SAW {
    GBELT(556x45,IRtracer,basic);
};

//TAC50 Magazines
class hlc_5Rnd_50BMG_B_TAC50: hlc_50Rnd_45ACP_B_1921 {
    GAMMO(127x99,basic,basic);
};
class hlc_5Rnd_50BMG_T_TAC50: hlc_5Rnd_50BMG_B_TAC50 {
    GAMMO(127x99,tracer,basic);
};
class hlc_5Rnd_50BMG_SLAP_TAC50: hlc_5Rnd_50BMG_B_TAC50 {
    GAMMO(127x99,SLAP,basic);
};
class hlc_5Rnd_50BMG_Raufoss_TAC50: hlc_5Rnd_50BMG_B_TAC50 {
    GAMMO(127x99,mk211,basic);
};

/*
class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag {
    //
};
class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag {
    //
};
class hlc_12rnd_12g_buck_S12: hlc_10rnd_12g_buck_S12 {
    //
};
class hlc_12rnd_12g_slug_S12: hlc_10rnd_12g_slug_S12 {
    //
};
*/
