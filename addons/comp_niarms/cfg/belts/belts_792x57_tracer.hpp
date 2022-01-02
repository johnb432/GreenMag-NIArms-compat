//Core Items
class GEGVAR(CoreBelt,792x57_tracer): CBA_MiscItem {
    author = CSTRING(Author);
    scope = 1;
    scopeArsenal = 1;
    scopeCurator = 1;
    displayName = CSTRING(corebelt_792x57_tracer);
    picture = QGPATH(main,data\belt.paa);
    model = "\A3\weapons_F\ammo\mag_univ.p3d";
    descriptionShort = "";
    icon = "iconObject_circle";
    mapSize = 0.034;

    GGVAR(item) = QGEGVAR(beltlinked,792x57_tracer);
    GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(762x54,tracer,1Rnd));
    GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(762x54,7T2,1Rnd));
    GGVAR(typeName) = "792x57_tracer";

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};

//7.92x57
class GEGVAR(beltlinked,792x57_tracer_1): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_1);
    GGVAR(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_2): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_2);
    GGVAR(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_3): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_3);
    GGVAR(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_4): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_4);
    GGVAR(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_5): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_5);
    GGVAR(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_6): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_6);
    GGVAR(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_7): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_7);
    GGVAR(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_8): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_8);
    GGVAR(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_9): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_9);
    GGVAR(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_10): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_10);
    GGVAR(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_11): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_11);
    GGVAR(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_12): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_12);
    GGVAR(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_13): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_13);
    GGVAR(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_14): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_14);
    GGVAR(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_15): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_15);
    GGVAR(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_16): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_16);
    GGVAR(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_17): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_17);
    GGVAR(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_18): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_18);
    GGVAR(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_19): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_19);
    GGVAR(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_20): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_20);
    GGVAR(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_21): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_21);
    GGVAR(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_22): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_22);
    GGVAR(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_23): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_23);
    GGVAR(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_24): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_24);
    GGVAR(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_25): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_25);
    GGVAR(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_26): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_26);
    GGVAR(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_27): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_27);
    GGVAR(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_28): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_28);
    GGVAR(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_29): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_29);
    GGVAR(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_30): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_30);
    GGVAR(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_31): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_31);
    GGVAR(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_32): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_32);
    GGVAR(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_33): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_33);
    GGVAR(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_34): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_34);
    GGVAR(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_35): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_35);
    GGVAR(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_36): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_36);
    GGVAR(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_37): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_37);
    GGVAR(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_38): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_38);
    GGVAR(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_39): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_39);
    GGVAR(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_40): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_40);
    GGVAR(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_41): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_41);
    GGVAR(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_42): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_42);
    GGVAR(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_43): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_43);
    GGVAR(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_44): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_44);
    GGVAR(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_45): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_45);
    GGVAR(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_46): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_46);
    GGVAR(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_47): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_47);
    GGVAR(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_48): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_48);
    GGVAR(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_49): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_49);
    GGVAR(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_50): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_50);
    GGVAR(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_51): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_51);
    GGVAR(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_52): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_52);
    GGVAR(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_53): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_53);
    GGVAR(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_54): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_54);
    GGVAR(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_55): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_55);
    GGVAR(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_56): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_56);
    GGVAR(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_57): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_57);
    GGVAR(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_58): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_58);
    GGVAR(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_59): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_59);
    GGVAR(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_60): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_60);
    GGVAR(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_61): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_61);
    GGVAR(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_62): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_62);
    GGVAR(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_63): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_63);
    GGVAR(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_64): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_64);
    GGVAR(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_65): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_65);
    GGVAR(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_66): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_66);
    GGVAR(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_67): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_67);
    GGVAR(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_68): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_68);
    GGVAR(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_69): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_69);
    GGVAR(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_70): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_70);
    GGVAR(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_71): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_71);
    GGVAR(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_72): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_72);
    GGVAR(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_73): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_73);
    GGVAR(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_74): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_74);
    GGVAR(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_75): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_75);
    GGVAR(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_76): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_76);
    GGVAR(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_77): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_77);
    GGVAR(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_78): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_78);
    GGVAR(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_79): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_79);
    GGVAR(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_80): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_80);
    GGVAR(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_81): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_81);
    GGVAR(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_82): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_82);
    GGVAR(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_83): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_83);
    GGVAR(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_84): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_84);
    GGVAR(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_85): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_85);
    GGVAR(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_86): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_86);
    GGVAR(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_87): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_87);
    GGVAR(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_88): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_88);
    GGVAR(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_89): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_89);
    GGVAR(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_90): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_90);
    GGVAR(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_91): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_91);
    GGVAR(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_92): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_92);
    GGVAR(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_93): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_93);
    GGVAR(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_94): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_94);
    GGVAR(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_95): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_95);
    GGVAR(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_96): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_96);
    GGVAR(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_97): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_97);
    GGVAR(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_98): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_98);
    GGVAR(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_99): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_99);
    GGVAR(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_100): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_100);
    GGVAR(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_101): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_101);
    GGVAR(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_102): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_102);
    GGVAR(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_103): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_103);
    GGVAR(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_104): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_104);
    GGVAR(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_105): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_105);
    GGVAR(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_106): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_106);
    GGVAR(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_107): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_107);
    GGVAR(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_108): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_108);
    GGVAR(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_109): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_109);
    GGVAR(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_110): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_110);
    GGVAR(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_111): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_111);
    GGVAR(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_112): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_112);
    GGVAR(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_113): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_113);
    GGVAR(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_114): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_114);
    GGVAR(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_115): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_115);
    GGVAR(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_116): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_116);
    GGVAR(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_117): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_117);
    GGVAR(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_118): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_118);
    GGVAR(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_119): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_119);
    GGVAR(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_120): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_120);
    GGVAR(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_121): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_121);
    GGVAR(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_122): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_122);
    GGVAR(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_123): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_123);
    GGVAR(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_124): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_124);
    GGVAR(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_125): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_125);
    GGVAR(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_126): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_126);
    GGVAR(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_127): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_127);
    GGVAR(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_128): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_128);
    GGVAR(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_129): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_129);
    GGVAR(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_130): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_130);
    GGVAR(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_131): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_131);
    GGVAR(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_132): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_132);
    GGVAR(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_133): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_133);
    GGVAR(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_134): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_134);
    GGVAR(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_135): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_135);
    GGVAR(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_136): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_136);
    GGVAR(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_137): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_137);
    GGVAR(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_138): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_138);
    GGVAR(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_139): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_139);
    GGVAR(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_140): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_140);
    GGVAR(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_141): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_141);
    GGVAR(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_142): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_142);
    GGVAR(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_143): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_143);
    GGVAR(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_144): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_144);
    GGVAR(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_145): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_145);
    GGVAR(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_146): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_146);
    GGVAR(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_147): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_147);
    GGVAR(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_148): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_148);
    GGVAR(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_149): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_149);
    GGVAR(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_150): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_150);
    GGVAR(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_151): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_151);
    GGVAR(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_152): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_152);
    GGVAR(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_153): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_153);
    GGVAR(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_154): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_154);
    GGVAR(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_155): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_155);
    GGVAR(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_156): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_156);
    GGVAR(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_157): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_157);
    GGVAR(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_158): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_158);
    GGVAR(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_159): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_159);
    GGVAR(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_160): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_160);
    GGVAR(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_161): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_161);
    GGVAR(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_162): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_162);
    GGVAR(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_163): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_163);
    GGVAR(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_164): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_164);
    GGVAR(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_165): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_165);
    GGVAR(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_166): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_166);
    GGVAR(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_167): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_167);
    GGVAR(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_168): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_168);
    GGVAR(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_169): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_169);
    GGVAR(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_170): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_170);
    GGVAR(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_171): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_171);
    GGVAR(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_172): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_172);
    GGVAR(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_173): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_173);
    GGVAR(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_174): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_174);
    GGVAR(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_175): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_175);
    GGVAR(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_176): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_176);
    GGVAR(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_177): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_177);
    GGVAR(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_178): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_178);
    GGVAR(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_179): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_179);
    GGVAR(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_180): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_180);
    GGVAR(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class GEGVAR(beltlinked,792x57_tracer_181): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_181);
    GGVAR(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class GEGVAR(beltlinked,792x57_tracer_182): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_182);
    GGVAR(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class GEGVAR(beltlinked,792x57_tracer_183): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_183);
    GGVAR(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class GEGVAR(beltlinked,792x57_tracer_184): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_184);
    GGVAR(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class GEGVAR(beltlinked,792x57_tracer_185): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_185);
    GGVAR(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class GEGVAR(beltlinked,792x57_tracer_186): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_186);
    GGVAR(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class GEGVAR(beltlinked,792x57_tracer_187): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_187);
    GGVAR(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class GEGVAR(beltlinked,792x57_tracer_188): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_188);
    GGVAR(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class GEGVAR(beltlinked,792x57_tracer_189): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_189);
    GGVAR(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class GEGVAR(beltlinked,792x57_tracer_190): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_190);
    GGVAR(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class GEGVAR(beltlinked,792x57_tracer_191): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_191);
    GGVAR(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class GEGVAR(beltlinked,792x57_tracer_192): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_192);
    GGVAR(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class GEGVAR(beltlinked,792x57_tracer_193): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_193);
    GGVAR(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class GEGVAR(beltlinked,792x57_tracer_194): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_194);
    GGVAR(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class GEGVAR(beltlinked,792x57_tracer_195): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_195);
    GGVAR(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class GEGVAR(beltlinked,792x57_tracer_196): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_196);
    GGVAR(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class GEGVAR(beltlinked,792x57_tracer_197): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_197);
    GGVAR(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class GEGVAR(beltlinked,792x57_tracer_198): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_198);
    GGVAR(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class GEGVAR(beltlinked,792x57_tracer_199): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_199);
    GGVAR(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class GEGVAR(beltlinked,792x57_tracer_200): GEGVAR(CoreBelt,792x57_tracer) {
    displayName = CSTRING(beltlinked_792x57_tracer_200);
    GGVAR(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
