//Core Items
class GEGVAR(CoreBelt,762x51_IRtracer): CBA_MiscItem {
    author = CSTRING(Author);
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = CSTRING(corebelt_762x51_IRtracer);
    picture = QGPATH(main,data\belt.paa);
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    descriptionShort = "";
    icon = "iconObject_circle";
    mapSize = 0.034;

    GGVAR(item) = QGEGVAR(beltlinked,762x51_IRtracer);
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(762x51,IRtracer,1Rnd));
    GGVAR(typeName) = "762x51_IRtracer";

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};

// 7.62x51
GBELT_250BULLETS(762x51_IRtracer);
