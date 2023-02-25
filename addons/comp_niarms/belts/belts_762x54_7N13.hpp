//Core Items
class GEGVAR(CoreBelt,762x54_7N13): CBA_MiscItem {
				author = CSTRING(Author);
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = CSTRING(corebelt_762x54_7N13);
    picture = QGPATH(main,data\belt.paa);
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    descriptionShort = "";
    icon = "iconObject_circle";
    mapSize = 0.034;

    GGVAR(item) = QGEGVAR(beltlinked,762x54_7N13);
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(762x54,basic,1Rnd));
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
    GGVAR(typeName) = "762x54_7N13";

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};

// 7.62x54
GBELT_200BULLETS(762x54_7N13);
