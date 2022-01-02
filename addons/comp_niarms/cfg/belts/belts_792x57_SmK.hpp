//Core Items
class GEGVAR(CoreBelt,792x57_SmK): CBA_MiscItem {
    author = CSTRING(Author);
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = CSTRING(corebelt_792x57_SmK);
    picture = QGPATH(main,data\belt.paa);
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    descriptionShort = "";
    icon = "iconObject_circle";
    mapSize = 0.034;

    GGVAR(item) = QGEGVAR(beltlinked,792x57_SmK);
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(762x54,tracer,1Rnd));
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
    GGVAR(typeName) = "792x57_SmK";

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};

//7.92x57
class GEGVAR(beltlinked,792x57_SmK_1): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_1);
    GGVAR(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_2): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_2);
    GGVAR(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_3): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_3);
    GGVAR(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_4): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_4);
    GGVAR(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_5): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_5);
    GGVAR(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_6): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_6);
    GGVAR(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_7): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_7);
    GGVAR(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_8): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_8);
    GGVAR(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_9): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_9);
    GGVAR(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_10): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_10);
    GGVAR(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_11): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_11);
    GGVAR(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_12): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_12);
    GGVAR(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_13): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_13);
    GGVAR(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_14): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_14);
    GGVAR(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_15): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_15);
    GGVAR(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_16): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_16);
    GGVAR(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_17): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_17);
    GGVAR(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_18): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_18);
    GGVAR(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_19): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_19);
    GGVAR(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_20): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_20);
    GGVAR(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_21): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_21);
    GGVAR(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_22): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_22);
    GGVAR(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_23): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_23);
    GGVAR(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_24): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_24);
    GGVAR(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_25): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_25);
    GGVAR(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_26): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_26);
    GGVAR(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_27): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_27);
    GGVAR(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_28): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_28);
    GGVAR(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_29): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_29);
    GGVAR(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_30): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_30);
    GGVAR(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_31): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_31);
    GGVAR(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_32): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_32);
    GGVAR(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_33): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_33);
    GGVAR(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_34): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_34);
    GGVAR(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_35): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_35);
    GGVAR(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_36): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_36);
    GGVAR(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_37): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_37);
    GGVAR(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_38): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_38);
    GGVAR(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_39): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_39);
    GGVAR(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_40): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_40);
    GGVAR(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_41): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_41);
    GGVAR(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_42): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_42);
    GGVAR(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_43): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_43);
    GGVAR(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_44): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_44);
    GGVAR(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_45): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_45);
    GGVAR(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_46): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_46);
    GGVAR(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_47): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_47);
    GGVAR(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_48): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_48);
    GGVAR(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_49): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_49);
    GGVAR(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_50): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_50);
    GGVAR(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_51): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_51);
    GGVAR(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_52): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_52);
    GGVAR(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_53): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_53);
    GGVAR(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_54): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_54);
    GGVAR(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_55): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_55);
    GGVAR(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_56): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_56);
    GGVAR(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_57): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_57);
    GGVAR(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_58): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_58);
    GGVAR(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_59): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_59);
    GGVAR(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_60): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_60);
    GGVAR(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_61): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_61);
    GGVAR(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_62): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_62);
    GGVAR(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_63): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_63);
    GGVAR(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_64): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_64);
    GGVAR(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_65): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_65);
    GGVAR(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_66): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_66);
    GGVAR(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_67): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_67);
    GGVAR(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_68): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_68);
    GGVAR(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_69): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_69);
    GGVAR(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_70): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_70);
    GGVAR(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_71): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_71);
    GGVAR(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_72): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_72);
    GGVAR(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_73): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_73);
    GGVAR(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_74): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_74);
    GGVAR(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_75): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_75);
    GGVAR(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_76): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_76);
    GGVAR(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_77): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_77);
    GGVAR(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_78): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_78);
    GGVAR(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_79): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_79);
    GGVAR(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_80): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_80);
    GGVAR(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_81): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_81);
    GGVAR(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_82): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_82);
    GGVAR(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_83): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_83);
    GGVAR(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_84): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_84);
    GGVAR(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_85): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_85);
    GGVAR(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_86): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_86);
    GGVAR(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_87): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_87);
    GGVAR(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_88): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_88);
    GGVAR(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_89): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_89);
    GGVAR(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_90): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_90);
    GGVAR(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_91): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_91);
    GGVAR(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_92): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_92);
    GGVAR(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_93): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_93);
    GGVAR(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_94): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_94);
    GGVAR(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_95): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_95);
    GGVAR(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_96): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_96);
    GGVAR(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_97): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_97);
    GGVAR(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_98): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_98);
    GGVAR(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_99): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_99);
    GGVAR(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_100): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_100);
    GGVAR(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_101): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_101);
    GGVAR(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_102): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_102);
    GGVAR(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_103): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_103);
    GGVAR(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_104): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_104);
    GGVAR(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_105): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_105);
    GGVAR(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_106): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_106);
    GGVAR(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_107): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_107);
    GGVAR(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_108): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_108);
    GGVAR(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_109): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_109);
    GGVAR(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_110): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_110);
    GGVAR(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_111): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_111);
    GGVAR(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_112): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_112);
    GGVAR(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_113): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_113);
    GGVAR(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_114): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_114);
    GGVAR(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_115): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_115);
    GGVAR(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_116): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_116);
    GGVAR(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_117): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_117);
    GGVAR(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_118): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_118);
    GGVAR(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_119): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_119);
    GGVAR(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_120): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_120);
    GGVAR(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_121): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_121);
    GGVAR(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_122): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_122);
    GGVAR(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_123): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_123);
    GGVAR(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_124): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_124);
    GGVAR(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_125): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_125);
    GGVAR(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_126): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_126);
    GGVAR(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_127): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_127);
    GGVAR(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_128): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_128);
    GGVAR(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_129): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_129);
    GGVAR(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_130): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_130);
    GGVAR(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_131): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_131);
    GGVAR(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_132): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_132);
    GGVAR(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_133): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_133);
    GGVAR(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_134): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_134);
    GGVAR(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_135): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_135);
    GGVAR(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_136): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_136);
    GGVAR(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_137): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_137);
    GGVAR(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_138): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_138);
    GGVAR(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_139): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_139);
    GGVAR(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_140): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_140);
    GGVAR(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_141): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_141);
    GGVAR(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_142): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_142);
    GGVAR(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_143): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_143);
    GGVAR(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_144): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_144);
    GGVAR(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_145): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_145);
    GGVAR(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_146): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_146);
    GGVAR(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_147): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_147);
    GGVAR(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_148): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_148);
    GGVAR(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_149): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_149);
    GGVAR(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_150): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_150);
    GGVAR(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_151): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_151);
    GGVAR(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_152): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_152);
    GGVAR(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_153): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_153);
    GGVAR(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_154): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_154);
    GGVAR(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_155): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_155);
    GGVAR(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_156): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_156);
    GGVAR(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_157): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_157);
    GGVAR(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_158): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_158);
    GGVAR(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_159): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_159);
    GGVAR(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_160): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_160);
    GGVAR(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_161): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_161);
    GGVAR(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_162): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_162);
    GGVAR(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_163): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_163);
    GGVAR(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_164): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_164);
    GGVAR(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_165): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_165);
    GGVAR(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_166): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_166);
    GGVAR(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_167): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_167);
    GGVAR(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_168): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_168);
    GGVAR(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_169): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_169);
    GGVAR(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_170): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_170);
    GGVAR(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_171): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_171);
    GGVAR(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_172): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_172);
    GGVAR(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_173): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_173);
    GGVAR(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_174): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_174);
    GGVAR(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_175): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_175);
    GGVAR(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_176): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_176);
    GGVAR(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_177): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_177);
    GGVAR(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_178): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_178);
    GGVAR(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_179): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_179);
    GGVAR(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_180): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_180);
    GGVAR(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class GEGVAR(beltlinked,792x57_SmK_181): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_181);
    GGVAR(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class GEGVAR(beltlinked,792x57_SmK_182): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_182);
    GGVAR(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class GEGVAR(beltlinked,792x57_SmK_183): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_183);
    GGVAR(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class GEGVAR(beltlinked,792x57_SmK_184): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_184);
    GGVAR(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class GEGVAR(beltlinked,792x57_SmK_185): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_185);
    GGVAR(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class GEGVAR(beltlinked,792x57_SmK_186): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_186);
    GGVAR(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class GEGVAR(beltlinked,792x57_SmK_187): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_187);
    GGVAR(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class GEGVAR(beltlinked,792x57_SmK_188): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_188);
    GGVAR(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class GEGVAR(beltlinked,792x57_SmK_189): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_189);
    GGVAR(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class GEGVAR(beltlinked,792x57_SmK_190): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_190);
    GGVAR(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class GEGVAR(beltlinked,792x57_SmK_191): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_191);
    GGVAR(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class GEGVAR(beltlinked,792x57_SmK_192): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_192);
    GGVAR(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class GEGVAR(beltlinked,792x57_SmK_193): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_193);
    GGVAR(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class GEGVAR(beltlinked,792x57_SmK_194): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_194);
    GGVAR(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class GEGVAR(beltlinked,792x57_SmK_195): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_195);
    GGVAR(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class GEGVAR(beltlinked,792x57_SmK_196): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_196);
    GGVAR(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class GEGVAR(beltlinked,792x57_SmK_197): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_197);
    GGVAR(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class GEGVAR(beltlinked,792x57_SmK_198): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_198);
    GGVAR(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class GEGVAR(beltlinked,792x57_SmK_199): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_199);
    GGVAR(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class GEGVAR(beltlinked,792x57_SmK_200): GEGVAR(CoreBelt,792x57_SmK) {
    displayName = CSTRING(beltlinked_792x57_SmK_200);
    GGVAR(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
