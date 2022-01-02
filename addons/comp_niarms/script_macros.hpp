#include "\x\cba\addons\main\script_macros_common.hpp"

// This is done in case prefix/component has to be changed
#define GGVAR(var1) greenmag_##var1
#define GEGVAR(var1,var2) TRIPLES(greenmag,var1,var2)
#define QGEGVAR(var1,var2) QUOTE(GEGVAR(var1,var2))

#define QGPATH(var1,var2) \z\greenmag\addons\##var1##\##var2

#define GAMMO(var1,var2,var3) \
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(var1,var2,1Rnd));\
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(var1,var3,1Rnd))

#define GBELT(var1,var2,var3) \
    GGVAR(canSpeedload) = 0;\
    GGVAR(needBelt) = 1;\
    GGVAR(ammo) = QEGVAR(beltlinked,DOUBLES(var1,var2));\
    GGVAR(basicammo) = QEGVAR(beltlinked,DOUBLES(var1,var3))
