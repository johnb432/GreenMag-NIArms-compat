//P90 Magazines
class hlc_50Rnd_57x28_JHP_P90: 30Rnd_556x45_Stanag {
    GAMMO(570x28,JHP,basic);
};
class hlc_50Rnd_57x28_FMJ_P90: hlc_50Rnd_57x28_JHP_P90 {
    GAMMO(570x28,basic,basic);
};

//Sten Magazines
class hlc_32rnd_9x19_B_sten: hlc_50Rnd_45ACP_B_1921 {
    GAMMO(9x19,basic,basic);
};

class 30Rnd_9x21_Mag;
class hlc_30Rnd_9x19_B_MP5: 30Rnd_9x21_Mag {
    GAMMO(9x19,FMJ,basic);
};
class hlc_30Rnd_9x19_GD_MP5: 30Rnd_9x21_Mag {
    GAMMO(9x19,JHP,basic);
};
class hlc_30Rnd_9x19_SD_MP5: 30Rnd_9x21_Mag {
    GAMMO(9x19,sd,basic);
};

class hlc_50rnd_9x19_B_9mmar: 30Rnd_556x45_Stanag {
    GAMMO(9x19,basic,basic);
};

class hlc_30Rnd_10mm_B_MP5: 30Rnd_9x21_Mag {
    GAMMO(10x25,basic,basic);
};
class hlc_30Rnd_10mm_JHP_MP5: 30Rnd_9x21_Mag {
    GAMMO(10x25,JHP,basic);
};
