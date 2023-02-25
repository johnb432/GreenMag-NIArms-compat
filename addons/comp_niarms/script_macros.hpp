#include "\x\cba\addons\main\script_macros_common.hpp"

// This is done in case prefix/component has to be changed
#define GGVAR(var1) greenmag_##var1
#define GEGVAR(var1,var2) TRIPLES(greenmag,var1,var2)
#define QGEGVAR(var1,var2) QUOTE(GEGVAR(var1,var2))

#define QGPATH(var1,var2) \z\greenmag\addons\##var1##\##var2

#define GAMMO(var1,var2,var3)\
GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(var1,var2,1Rnd));\
GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(var1,var3,1Rnd))

#define GBELT(var1,var2,var3)\
GGVAR(canSpeedload) = 0;\
GGVAR(needBelt) = 1;\
GGVAR(ammo) = QEGVAR(beltlinked,DOUBLES(var1,var2));\
GGVAR(basicammo) = QEGVAR(beltlinked,DOUBLES(var1,var3))

#define GBELT_BULLET_PRIVATE(ammo,num)\
class GEGVAR(beltlinked,DOUBLES(ammo,num)): GEGVAR(CoreBelt,ammo) {\
    displayName = CSTRING(TRIPLES(beltlinked,ammo,num));\
    GGVAR(bullets) = num;\
    class ItemInfo: CBA_MiscItem_ItemInfo {\
        mass = QUOTE(0.15 * num);\
    };\
}

#define GBELT_BULLET_PUBLIC(ammo,num)\
class GEGVAR(beltlinked,DOUBLES(ammo,num)): GEGVAR(CoreBelt,ammo) {\
    displayName = CSTRING(TRIPLES(beltlinked,ammo,num));\
    GGVAR(bullets) = num;\
    scope = 2;\
    scopeArsenal = 2;\
    scopeCurator = 2;\
    class ItemInfo: CBA_MiscItem_ItemInfo {\
        mass = QUOTE(0.15 * num);\
    };\
}

#define GBELT_9BULLETS_PRIVATE(ammo,ten)\
GBELT_BULLET_PRIVATE(ammo,ten##1);\
GBELT_BULLET_PRIVATE(ammo,ten##2);\
GBELT_BULLET_PRIVATE(ammo,ten##3);\
GBELT_BULLET_PRIVATE(ammo,ten##4);\
GBELT_BULLET_PRIVATE(ammo,ten##5);\
GBELT_BULLET_PRIVATE(ammo,ten##6);\
GBELT_BULLET_PRIVATE(ammo,ten##7);\
GBELT_BULLET_PRIVATE(ammo,ten##8);\
GBELT_BULLET_PRIVATE(ammo,ten##9)

#define GBELT_10BULLETS_PRIVATE(ammo,ten)\
GBELT_BULLET_PRIVATE(ammo,ten##0);\
GBELT_9BULLETS_PRIVATE(ammo,ten)

#define GBELT_10BULLETS_PUBLIC(ammo,ten)\
GBELT_BULLET_PUBLIC(ammo,ten##0);\
GBELT_9BULLETS_PRIVATE(ammo,ten)

#define GBELT_200BULLETS(ammo)\
GBELT_BULLET_PRIVATE(ammo,1);\
GBELT_BULLET_PRIVATE(ammo,2);\
GBELT_BULLET_PRIVATE(ammo,3);\
GBELT_BULLET_PRIVATE(ammo,4);\
GBELT_BULLET_PRIVATE(ammo,5);\
GBELT_BULLET_PRIVATE(ammo,6);\
GBELT_BULLET_PRIVATE(ammo,7);\
GBELT_BULLET_PRIVATE(ammo,8);\
GBELT_BULLET_PRIVATE(ammo,9);\
GBELT_10BULLETS_PRIVATE(ammo,1);\
GBELT_10BULLETS_PRIVATE(ammo,2);\
GBELT_10BULLETS_PRIVATE(ammo,3);\
GBELT_10BULLETS_PRIVATE(ammo,4);\
GBELT_10BULLETS_PUBLIC(ammo,5);\
GBELT_10BULLETS_PRIVATE(ammo,6);\
GBELT_10BULLETS_PRIVATE(ammo,7);\
GBELT_10BULLETS_PRIVATE(ammo,8);\
GBELT_10BULLETS_PRIVATE(ammo,9);\
GBELT_10BULLETS_PUBLIC(ammo,10);\
GBELT_10BULLETS_PRIVATE(ammo,11);\
GBELT_10BULLETS_PRIVATE(ammo,12);\
GBELT_10BULLETS_PRIVATE(ammo,13);\
GBELT_10BULLETS_PRIVATE(ammo,14);\
GBELT_10BULLETS_PUBLIC(ammo,15);\
GBELT_10BULLETS_PRIVATE(ammo,16);\
GBELT_10BULLETS_PRIVATE(ammo,17);\
GBELT_10BULLETS_PRIVATE(ammo,18);\
GBELT_10BULLETS_PRIVATE(ammo,19);\
GBELT_BULLET_PUBLIC(ammo,200)

#define GBELT_250BULLETS(ammo)\
GBELT_BULLET_PRIVATE(ammo,1);\
GBELT_BULLET_PRIVATE(ammo,2);\
GBELT_BULLET_PRIVATE(ammo,3);\
GBELT_BULLET_PRIVATE(ammo,4);\
GBELT_BULLET_PRIVATE(ammo,5);\
GBELT_BULLET_PRIVATE(ammo,6);\
GBELT_BULLET_PRIVATE(ammo,7);\
GBELT_BULLET_PRIVATE(ammo,8);\
GBELT_BULLET_PRIVATE(ammo,9);\
GBELT_10BULLETS_PRIVATE(ammo,1);\
GBELT_10BULLETS_PRIVATE(ammo,2);\
GBELT_10BULLETS_PRIVATE(ammo,3);\
GBELT_10BULLETS_PRIVATE(ammo,4);\
GBELT_10BULLETS_PUBLIC(ammo,5);\
GBELT_10BULLETS_PRIVATE(ammo,6);\
GBELT_10BULLETS_PRIVATE(ammo,7);\
GBELT_10BULLETS_PRIVATE(ammo,8);\
GBELT_10BULLETS_PRIVATE(ammo,9);\
GBELT_10BULLETS_PUBLIC(ammo,10);\
GBELT_10BULLETS_PRIVATE(ammo,11);\
GBELT_10BULLETS_PRIVATE(ammo,12);\
GBELT_10BULLETS_PRIVATE(ammo,13);\
GBELT_10BULLETS_PRIVATE(ammo,14);\
GBELT_10BULLETS_PUBLIC(ammo,15);\
GBELT_10BULLETS_PRIVATE(ammo,16);\
GBELT_10BULLETS_PRIVATE(ammo,17);\
GBELT_10BULLETS_PRIVATE(ammo,18);\
GBELT_10BULLETS_PRIVATE(ammo,19);\
GBELT_10BULLETS_PUBLIC(ammo,20);\
GBELT_10BULLETS_PRIVATE(ammo,21);\
GBELT_10BULLETS_PRIVATE(ammo,22);\
GBELT_10BULLETS_PRIVATE(ammo,23);\
GBELT_10BULLETS_PRIVATE(ammo,24);\
GBELT_BULLET_PUBLIC(ammo,250)

#define GAMMO_BOX_WITHOUT_AUTHOR(caliber,type,image)\
class GEGVAR(ammo,TRIPLES(caliber,type,1Rnd)): GEGVAR(core,1Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,1Rnd));\
    scope = 2;\
    picture = QGPATH(main,data\##image##.paa);\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,10Rnd)): GEGVAR(core,10Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,10Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,20Rnd)): GEGVAR(core,20Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,20Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,30Rnd)): GEGVAR(core,30Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,30Rnd));\
    scope = 2;\
    scopeArsenal = 2;\
    scopeCurator = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,40Rnd)): GEGVAR(core,40Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,40Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,50Rnd)): GEGVAR(core,50Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,50Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,60Rnd)): GEGVAR(core,60Rnd) {\
    displayName = CSTRING(TRIPLES(caliber,type,60Rnd));\
    scope = 2;\
    scopeArsenal = 2;\
    scopeCurator = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
}

#define GAMMO_BOX(caliber,type,image)\
class GEGVAR(ammo,TRIPLES(caliber,type,1Rnd)): GEGVAR(core,1Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,1Rnd));\
    scope = 2;\
    picture = QGPATH(main,data\##image##.paa);\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,10Rnd)): GEGVAR(core,10Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,10Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,20Rnd)): GEGVAR(core,20Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,20Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,30Rnd)): GEGVAR(core,30Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,30Rnd));\
    scope = 2;\
    scopeArsenal = 2;\
    scopeCurator = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,40Rnd)): GEGVAR(core,40Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,40Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,50Rnd)): GEGVAR(core,50Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,50Rnd));\
    scope = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
};\
class GEGVAR(ammo,TRIPLES(caliber,type,60Rnd)): GEGVAR(core,60Rnd) {\
    author = CSTRING(Author);\
    displayName = CSTRING(TRIPLES(caliber,type,60Rnd));\
    scope = 2;\
    scopeArsenal = 2;\
    scopeCurator = 2;\
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(caliber,type,1Rnd));\
}
