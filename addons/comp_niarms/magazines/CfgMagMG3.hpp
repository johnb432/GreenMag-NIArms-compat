class hlc_50Rnd_792x57_B_MG42: 30Rnd_556x45_Stanag {
    GBELT(792x57,sS,basic);
};
class hlc_50Rnd_792x57_M_MG42: hlc_50Rnd_792x57_B_MG42 {
    GBELT(792x57,SmKL,basic);
};
class hlc_50Rnd_792x57_T_MG42: hlc_50Rnd_792x57_B_MG42 {
    GBELT(792x57,SmKL,tracer);
};
class hlc_50Rnd_792x57_AP_MG42: hlc_50Rnd_792x57_B_MG42 {
    GBELT(792x57,SmK,basic);
};

class hlc_50Rnd_762x51_B_MG3: hlc_50Rnd_792x57_B_MG42 {
    GBELT(762x51,m80a1epr,basic);
};
class hlc_50Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_B_MG3 {
    GBELT(762x51,mk319,basic);
};
class hlc_50Rnd_762x51_M_MG3: hlc_50Rnd_762x51_B_MG3 {
    GBELT(762x51,m62a1t,basic);
};
class hlc_50Rnd_762x51_mdim_MG3: hlc_50Rnd_762x51_B_MG3 {
    GBELT(762x51,IRtracer,basic);
};
class hlc_50Rnd_762x51_T_MG3: hlc_50Rnd_762x51_B_MG3 {
    GBELT(762x51,m62a1t,basic);
};
