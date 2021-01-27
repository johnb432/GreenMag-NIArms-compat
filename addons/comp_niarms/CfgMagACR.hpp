class hlc_30rnd_68x43_FMJ: 30Rnd_556x45_Stanag {
    GAMMO(680x43,basic,basic);
};
class hlc_30rnd_68x43_MFMJ: hlc_30rnd_68x43_FMJ {
    GAMMO(680x43,tracer,basic);
};
class hlc_30rnd_68x43_MIRDIM: hlc_30rnd_68x43_FMJ {
    GAMMO(680x43,IRtracer,basic);
};
class hlc_30rnd_68x43_OTM: hlc_30rnd_68x43_FMJ {
    GAMMO(680x43,BT,basic);
};
class hlc_30rnd_68x43_Tracer: hlc_30rnd_68x43_FMJ {
    GAMMO(680x43,tracer,basic);
};
class hlc_30rnd_68x43_IRDIM: hlc_30rnd_68x43_Tracer {
    GAMMO(680x43,IRtracer,basic);
};
class hlc_30rnd_68x43_Sub: hlc_30rnd_68x43_Tracer {
    GAMMO(680x43,sd,basic);
};
