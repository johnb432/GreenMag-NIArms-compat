//Core Items
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

//7.92x57
class GEGVAR(beltlinked,792x57_sS_1): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_1);
    GGVAR(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_2): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_2);
    GGVAR(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_3): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_3);
    GGVAR(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_4): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_4);
    GGVAR(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_5): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_5);
    GGVAR(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_6): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_6);
    GGVAR(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_7): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_7);
    GGVAR(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_8): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_8);
    GGVAR(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_9): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_9);
    GGVAR(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_10): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_10);
    GGVAR(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_11): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_11);
    GGVAR(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_12): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_12);
    GGVAR(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_13): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_13);
    GGVAR(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_14): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_14);
    GGVAR(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_15): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_15);
    GGVAR(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_16): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_16);
    GGVAR(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_17): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_17);
    GGVAR(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_18): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_18);
    GGVAR(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_19): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_19);
    GGVAR(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_20): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_20);
    GGVAR(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_21): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_21);
    GGVAR(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_22): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_22);
    GGVAR(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_23): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_23);
    GGVAR(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_24): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_24);
    GGVAR(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_25): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_25);
    GGVAR(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_26): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_26);
    GGVAR(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_27): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_27);
    GGVAR(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_28): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_28);
    GGVAR(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_29): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_29);
    GGVAR(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_30): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_30);
    GGVAR(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_31): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_31);
    GGVAR(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_32): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_32);
    GGVAR(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_33): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_33);
    GGVAR(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_34): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_34);
    GGVAR(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_35): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_35);
    GGVAR(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_36): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_36);
    GGVAR(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_37): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_37);
    GGVAR(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_38): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_38);
    GGVAR(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_39): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_39);
    GGVAR(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_40): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_40);
    GGVAR(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_41): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_41);
    GGVAR(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_42): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_42);
    GGVAR(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_43): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_43);
    GGVAR(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_44): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_44);
    GGVAR(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_45): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_45);
    GGVAR(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_46): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_46);
    GGVAR(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_47): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_47);
    GGVAR(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_48): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_48);
    GGVAR(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_49): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_49);
    GGVAR(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_50): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_50);
    GGVAR(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_51): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_51);
    GGVAR(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_52): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_52);
    GGVAR(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_53): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_53);
    GGVAR(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_54): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_54);
    GGVAR(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_55): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_55);
    GGVAR(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_56): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_56);
    GGVAR(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_57): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_57);
    GGVAR(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_58): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_58);
    GGVAR(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_59): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_59);
    GGVAR(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_60): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_60);
    GGVAR(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_61): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_61);
    GGVAR(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_62): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_62);
    GGVAR(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_63): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_63);
    GGVAR(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_64): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_64);
    GGVAR(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_65): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_65);
    GGVAR(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_66): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_66);
    GGVAR(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_67): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_67);
    GGVAR(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_68): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_68);
    GGVAR(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_69): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_69);
    GGVAR(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_70): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_70);
    GGVAR(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_71): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_71);
    GGVAR(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_72): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_72);
    GGVAR(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_73): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_73);
    GGVAR(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_74): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_74);
    GGVAR(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_75): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_75);
    GGVAR(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_76): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_76);
    GGVAR(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_77): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_77);
    GGVAR(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_78): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_78);
    GGVAR(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_79): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_79);
    GGVAR(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_80): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_80);
    GGVAR(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_81): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_81);
    GGVAR(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_82): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_82);
    GGVAR(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_83): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_83);
    GGVAR(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_84): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_84);
    GGVAR(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_85): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_85);
    GGVAR(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_86): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_86);
    GGVAR(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_87): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_87);
    GGVAR(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_88): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_88);
    GGVAR(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_89): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_89);
    GGVAR(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_90): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_90);
    GGVAR(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_91): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_91);
    GGVAR(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_92): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_92);
    GGVAR(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_93): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_93);
    GGVAR(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_94): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_94);
    GGVAR(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_95): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_95);
    GGVAR(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_96): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_96);
    GGVAR(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_97): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_97);
    GGVAR(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_98): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_98);
    GGVAR(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_99): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_99);
    GGVAR(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_100): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_100);
    GGVAR(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_101): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_101);
    GGVAR(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_102): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_102);
    GGVAR(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_103): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_103);
    GGVAR(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_104): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_104);
    GGVAR(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_105): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_105);
    GGVAR(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_106): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_106);
    GGVAR(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_107): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_107);
    GGVAR(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_108): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_108);
    GGVAR(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_109): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_109);
    GGVAR(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_110): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_110);
    GGVAR(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_111): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_111);
    GGVAR(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_112): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_112);
    GGVAR(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_113): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_113);
    GGVAR(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_114): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_114);
    GGVAR(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_115): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_115);
    GGVAR(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_116): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_116);
    GGVAR(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_117): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_117);
    GGVAR(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_118): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_118);
    GGVAR(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_119): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_119);
    GGVAR(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_120): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_120);
    GGVAR(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_121): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_121);
    GGVAR(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_122): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_122);
    GGVAR(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_123): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_123);
    GGVAR(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_124): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_124);
    GGVAR(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_125): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_125);
    GGVAR(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_126): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_126);
    GGVAR(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_127): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_127);
    GGVAR(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_128): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_128);
    GGVAR(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_129): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_129);
    GGVAR(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_130): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_130);
    GGVAR(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_131): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_131);
    GGVAR(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_132): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_132);
    GGVAR(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_133): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_133);
    GGVAR(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_134): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_134);
    GGVAR(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_135): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_135);
    GGVAR(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_136): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_136);
    GGVAR(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_137): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_137);
    GGVAR(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_138): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_138);
    GGVAR(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_139): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_139);
    GGVAR(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_140): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_140);
    GGVAR(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_141): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_141);
    GGVAR(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_142): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_142);
    GGVAR(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_143): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_143);
    GGVAR(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_144): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_144);
    GGVAR(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_145): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_145);
    GGVAR(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_146): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_146);
    GGVAR(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_147): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_147);
    GGVAR(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_148): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_148);
    GGVAR(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_149): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_149);
    GGVAR(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_150): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_150);
    GGVAR(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_151): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_151);
    GGVAR(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_152): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_152);
    GGVAR(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_153): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_153);
    GGVAR(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_154): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_154);
    GGVAR(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_155): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_155);
    GGVAR(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_156): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_156);
    GGVAR(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_157): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_157);
    GGVAR(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_158): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_158);
    GGVAR(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_159): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_159);
    GGVAR(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_160): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_160);
    GGVAR(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_161): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_161);
    GGVAR(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_162): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_162);
    GGVAR(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_163): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_163);
    GGVAR(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_164): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_164);
    GGVAR(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_165): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_165);
    GGVAR(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_166): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_166);
    GGVAR(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_167): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_167);
    GGVAR(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_168): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_168);
    GGVAR(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_169): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_169);
    GGVAR(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_170): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_170);
    GGVAR(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_171): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_171);
    GGVAR(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_172): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_172);
    GGVAR(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_173): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_173);
    GGVAR(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_174): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_174);
    GGVAR(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_175): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_175);
    GGVAR(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_176): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_176);
    GGVAR(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_177): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_177);
    GGVAR(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_178): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_178);
    GGVAR(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_179): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_179);
    GGVAR(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_180): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_180);
    GGVAR(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class GEGVAR(beltlinked,792x57_sS_181): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_181);
    GGVAR(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class GEGVAR(beltlinked,792x57_sS_182): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_182);
    GGVAR(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class GEGVAR(beltlinked,792x57_sS_183): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_183);
    GGVAR(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class GEGVAR(beltlinked,792x57_sS_184): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_184);
    GGVAR(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class GEGVAR(beltlinked,792x57_sS_185): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_185);
    GGVAR(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class GEGVAR(beltlinked,792x57_sS_186): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_186);
    GGVAR(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class GEGVAR(beltlinked,792x57_sS_187): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_187);
    GGVAR(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class GEGVAR(beltlinked,792x57_sS_188): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_188);
    GGVAR(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class GEGVAR(beltlinked,792x57_sS_189): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_189);
    GGVAR(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class GEGVAR(beltlinked,792x57_sS_190): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_190);
    GGVAR(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class GEGVAR(beltlinked,792x57_sS_191): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_191);
    GGVAR(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class GEGVAR(beltlinked,792x57_sS_192): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_192);
    GGVAR(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class GEGVAR(beltlinked,792x57_sS_193): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_193);
    GGVAR(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class GEGVAR(beltlinked,792x57_sS_194): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_194);
    GGVAR(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class GEGVAR(beltlinked,792x57_sS_195): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_195);
    GGVAR(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class GEGVAR(beltlinked,792x57_sS_196): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_196);
    GGVAR(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class GEGVAR(beltlinked,792x57_sS_197): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_197);
    GGVAR(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class GEGVAR(beltlinked,792x57_sS_198): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_198);
    GGVAR(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class GEGVAR(beltlinked,792x57_sS_199): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_199);
    GGVAR(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class GEGVAR(beltlinked,792x57_sS_200): GEGVAR(CoreBelt,792x57_sS) {
    displayName = CSTRING(beltlinked_792x57_sS_200);
    GGVAR(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
