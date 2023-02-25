// Core Items
class GEGVAR(CoreBelt,792x57_sS): CBA_MiscItem {
    author = CSTRING(Author);
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = CSTRING(corebelt_792x57_sS);
    picture = QGPATH(main,data\belt.paa);
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    descriptionShort = "";
    icon = "iconObject_circle";
    mapSize = 0.034;

    GGVAR(item) = QGEGVAR(beltlinked,792x57_sS);
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(762x54,tracer,1Rnd));
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
    GGVAR(typeName) = "792x57_sS";

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};

// 7.92x57
GBELT_200BULLETS(792x57_sS);
