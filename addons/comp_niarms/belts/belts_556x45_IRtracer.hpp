// Core Items
class GEGVAR(CoreBelt,556x45_IRtracer): CBA_MiscItem {
    author = CSTRING(Author);
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = CSTRING(corebelt_556x45_IRtracer);
    picture = QGPATH(main,data\belt.paa);
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    descriptionShort = "";
    icon = "iconObject_circle";
    mapSize = 0.034;

    GGVAR(item) = QGEGVAR(beltlinked,556x45_IRtracer);
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(556x45,IRtracer,1Rnd));
    GGVAR(typeName) = "556x45_IRtracer";

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};

// 5.56x45
GBELT_200BULLETS(556x45_IRtracer);
