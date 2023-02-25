class CfgWeapons {
    /*extern*/ class CBA_MiscItem;
    /*extern*/ class CBA_MiscItem_ItemInfo;

    // Core Items
    /*extern*/ class GEGVAR(core,1Rnd);
    /*extern*/ class GEGVAR(core,10Rnd);
    /*extern*/ class GEGVAR(core,20Rnd);
    /*extern*/ class GEGVAR(core,30Rnd);
    /*extern*/ class GEGVAR(core,40Rnd);
    /*extern*/ class GEGVAR(core,50Rnd);
    /*extern*/ class GEGVAR(core,60Rnd);

    GAMMO_BOX_WITHOUT_AUTHOR(9x19,FMJ,9mm); // 9x19 FMJ
    GAMMO_BOX(9x19,JHP,9mm); // 9x19 JHP
    GAMMO_BOX(9x19,sd,9mm); // 9x19 subsonic

    GAMMO_BOX(10x25,basic,9mm); // 10x25 basic FMJ
    GAMMO_BOX(10x25,JHP,9mm); // 10x25 JHP

    GAMMO_BOX(127x99,mk211,127mm); // 12.7x99 Mk211 Mod 0 Raufoss 50BMG
    GAMMO_BOX(127x99,SLAP,127mm); // 12.7x99 SLAP 50BMG
    GAMMO_BOX(127x99,tracer,127mm); // 12.7x99 tracer 50BMG

    GAMMO_BOX(300BO,basic,762mm); // .300 Blackout Ball
    GAMMO_BOX(300BO,RNBT,762mm); // .300 Blackout RNBT
    GAMMO_BOX(300BO,SMK,762mm); // .300 Blackout SMK

    GAMMO_BOX(3006S,basic,762mm); // .30-06 Springfield basic M1 FMJ
    GAMMO_BOX(3006S,M2,762mm); // .30-06 Springfield M2 FMJ
    GAMMO_BOX(3006S,M2T,762mm); // .30-06 Springfield M2 FMJ (Tracer)

    GAMMO_BOX(300win,A191,lcal); // .300win A191 (BTSP)
    GAMMO_BOX(300win,AP,lcal); // .300win AP
    GAMMO_BOX(300win,basic,lcal); // .300win
    GAMMO_BOX(300win,mk248mod1,lcal); // .300win Mk248 Mod 1
    GAMMO_BOX(300win,sd,lcal); // .300win subsonic
    GAMMO_BOX(300win,tracer,lcal); // .300win tracer

    GAMMO_BOX(303British,AP,762mm); // .303 British AP
    GAMMO_BOX(303British,basic,762mm); // .303 British basic
    GAMMO_BOX(303British,tracer,762mm); // .303 British tracer

    GAMMO_BOX(357SIG,basic,9mm); // .357SIG FMJ
    GAMMO_BOX(357SIG,JHP,9mm); // .357SIG JHP

    GAMMO_BOX(40SW,basic,9mm); // .40SW FMJ
    GAMMO_BOX(40SW,JHP,9mm); // .40SW JHP
    GAMMO_BOX(40SW,sd,9mm); // .40SW sd

    GAMMO_BOX(545x39,7N6M,556mm); // 5.45x39 7N6M FMJ
    GAMMO_BOX(545x39,7N10,556mm); // 5.45x39 7N10 FMJ
    GAMMO_BOX(545x39,7T3,556mm); // 5.45x39 7T3 FMJ (Tracer)
    GAMMO_BOX(545x39,7T3MN,556mm); // 5.45x39 IRtracer
    GAMMO_BOX(545x39,sd,556mm); // 5.45x39 subsonic

    GAMMO_BOX(556x45,M193,556mm); // 5.56x45 M193 FMJ
    GAMMO_BOX(556x45,M855A1,556mm); // 5.56x45 M855A1
    GAMMO_BOX(556x45,M856A1,556mm); // 5.56x45 M856A1 (Tracer)
    GAMMO_BOX(556x45,sd,556mm); // 5.56x45 subsonic

    GAMMO_BOX(570x28,JHP,9mm); // 5.7x28 JHP

    GAMMO_BOX(680x43,basic,762mm); // 6.8x43 basic FMJ
    GAMMO_BOX(680x43,BT,762mm); // 6.8x43 BT
    GAMMO_BOX(680x43,IRtracer,762mm); // 6.8x43 IRtracer
    GAMMO_BOX(680x43,sd,762mm); // 6.8x43 subsonic
    GAMMO_BOX(680x43,tracer,762mm); // 6.8x43 tracer

    GAMMO_BOX(750x55,AP,762mm); // 7.5x55 APBT
    GAMMO_BOX(750x55,basic,762mm); // 7.5x55 ball GP11 FMJ
    GAMMO_BOX(750x55,tracer,762mm); // 7.5x55 tracer

    GAMMO_BOX(762x39,7N23,762mm); // 7.62x39 7N23 AP
    GAMMO_BOX(762x39,57N231,762mm); // 7.62x39 57-N-231 FMJ
    GAMMO_BOX(762x39,57N231P,762mm); // 7.62x39 57-N-231P FMJ (Tracer)
    GAMMO_BOX(762x39,57T231PMN,762mm); // 7.62x39 57-T-231PMN FMJ (IRTracer)
    GAMMO_BOX(762x39,sd,762mm); // 7.62x39 subsonic

    GAMMO_BOX(762x51,m62a1t,762mm); // 7.62x51 M62A1 EPR (Tracer)
    GAMMO_BOX(762x51,m80a1epr,762mm); // 7.62x51 M80A1 EPR

    GAMMO_BOX(762x54,7N13,762mm); // 7.62x54 7N13 AP
    GAMMO_BOX(762x54,7T2,762mm); // 7.62x54 7T2 (Tracer)

    GAMMO_BOX(763x25,basic,9mm); // 7.63x25 FMJ
    GAMMO_BOX(763x25,JHP,9mm); // 7.63x25 JHP

    GAMMO_BOX(792x57,basic,762mm); // 7.92x57 basic
    GAMMO_BOX(792x57,SmK,762mm); // 7.92x57 S.m.K (AP) steel core
    GAMMO_BOX(792x57,SmKL,762mm); // 7.92x57 S.m.K. L'spur (Tracer)
    GAMMO_BOX(792x57,sS,762mm); // 7.92x57 s.S. (Ball/FMJ)
    GAMMO_BOX(792x57,tracer,762mm); // 7.92x57 tracer

    #include "belts\belts_556x45_IRtracer.hpp"
    #include "belts\belts_556x45_M855A1.hpp"
    #include "belts\belts_556x45_M856A1.hpp"

    #include "belts\belts_762x51_IRtracer.hpp"
    #include "belts\belts_762x51_m62a1t.hpp"
    #include "belts\belts_762x51_m80a1epr.hpp"
    #include "belts\belts_762x51_mk319.hpp"

    #include "belts\belts_762x54_7N13.hpp"
    #include "belts\belts_762x54_7T2.hpp"

    #include "belts\belts_792x57_basic.hpp"
    #include "belts\belts_792x57_SmK.hpp"
    #include "belts\belts_792x57_SmKL.hpp"
    #include "belts\belts_792x57_sS.hpp"
    #include "belts\belts_792x57_tracer.hpp"
};
