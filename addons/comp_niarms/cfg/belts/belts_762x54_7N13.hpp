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

//7.62x54
class GEGVAR(beltlinked,762x54_7N13_1): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_1);
    GGVAR(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_2): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_2);
    GGVAR(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_3): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_3);
    GGVAR(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_4): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_4);
    GGVAR(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_5): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_5);
    GGVAR(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_6): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_6);
    GGVAR(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_7): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_7);
    GGVAR(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_8): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_8);
    GGVAR(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_9): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_9);
    GGVAR(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_10): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_10);
    GGVAR(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_11): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_11);
    GGVAR(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_12): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_12);
    GGVAR(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_13): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_13);
    GGVAR(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_14): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_14);
    GGVAR(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_15): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_15);
    GGVAR(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_16): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_16);
    GGVAR(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_17): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_17);
    GGVAR(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_18): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_18);
    GGVAR(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_19): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_19);
    GGVAR(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_20): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_20);
    GGVAR(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_21): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_21);
    GGVAR(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_22): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_22);
    GGVAR(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_23): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_23);
    GGVAR(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_24): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_24);
    GGVAR(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_25): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_25);
    GGVAR(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_26): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_26);
    GGVAR(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_27): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_27);
    GGVAR(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_28): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_28);
    GGVAR(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_29): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_29);
    GGVAR(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_30): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_30);
    GGVAR(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_31): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_31);
    GGVAR(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_32): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_32);
    GGVAR(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_33): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_33);
    GGVAR(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_34): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_34);
    GGVAR(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_35): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_35);
    GGVAR(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_36): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_36);
    GGVAR(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_37): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_37);
    GGVAR(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_38): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_38);
    GGVAR(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_39): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_39);
    GGVAR(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_40): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_40);
    GGVAR(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_41): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_41);
    GGVAR(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_42): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_42);
    GGVAR(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_43): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_43);
    GGVAR(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_44): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_44);
    GGVAR(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_45): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_45);
    GGVAR(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_46): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_46);
    GGVAR(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_47): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_47);
    GGVAR(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_48): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_48);
    GGVAR(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_49): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_49);
    GGVAR(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_50): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_50);
    GGVAR(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_51): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_51);
    GGVAR(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_52): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_52);
    GGVAR(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_53): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_53);
    GGVAR(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_54): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_54);
    GGVAR(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_55): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_55);
    GGVAR(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_56): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_56);
    GGVAR(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_57): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_57);
    GGVAR(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_58): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_58);
    GGVAR(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_59): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_59);
    GGVAR(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_60): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_60);
    GGVAR(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_61): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_61);
    GGVAR(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_62): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_62);
    GGVAR(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_63): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_63);
    GGVAR(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_64): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_64);
    GGVAR(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_65): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_65);
    GGVAR(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_66): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_66);
    GGVAR(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_67): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_67);
    GGVAR(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_68): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_68);
    GGVAR(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_69): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_69);
    GGVAR(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_70): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_70);
    GGVAR(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_71): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_71);
    GGVAR(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_72): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_72);
    GGVAR(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_73): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_73);
    GGVAR(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_74): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_74);
    GGVAR(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_75): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_75);
    GGVAR(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_76): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_76);
    GGVAR(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_77): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_77);
    GGVAR(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_78): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_78);
    GGVAR(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_79): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_79);
    GGVAR(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_80): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_80);
    GGVAR(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_81): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_81);
    GGVAR(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_82): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_82);
    GGVAR(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_83): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_83);
    GGVAR(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_84): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_84);
    GGVAR(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_85): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_85);
    GGVAR(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_86): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_86);
    GGVAR(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_87): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_87);
    GGVAR(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_88): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_88);
    GGVAR(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_89): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_89);
    GGVAR(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_90): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_90);
    GGVAR(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_91): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_91);
    GGVAR(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_92): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_92);
    GGVAR(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_93): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_93);
    GGVAR(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_94): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_94);
    GGVAR(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_95): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_95);
    GGVAR(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_96): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_96);
    GGVAR(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_97): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_97);
    GGVAR(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_98): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_98);
    GGVAR(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_99): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_99);
    GGVAR(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_100): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_100);
    GGVAR(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_101): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_101);
    GGVAR(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_102): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_102);
    GGVAR(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_103): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_103);
    GGVAR(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_104): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_104);
    GGVAR(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_105): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_105);
    GGVAR(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_106): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_106);
    GGVAR(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_107): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_107);
    GGVAR(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_108): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_108);
    GGVAR(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_109): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_109);
    GGVAR(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_110): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_110);
    GGVAR(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_111): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_111);
    GGVAR(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_112): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_112);
    GGVAR(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_113): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_113);
    GGVAR(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_114): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_114);
    GGVAR(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_115): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_115);
    GGVAR(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_116): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_116);
    GGVAR(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_117): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_117);
    GGVAR(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_118): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_118);
    GGVAR(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_119): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_119);
    GGVAR(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_120): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_120);
    GGVAR(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_121): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_121);
    GGVAR(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_122): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_122);
    GGVAR(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_123): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_123);
    GGVAR(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_124): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_124);
    GGVAR(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_125): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_125);
    GGVAR(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_126): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_126);
    GGVAR(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_127): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_127);
    GGVAR(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_128): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_128);
    GGVAR(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_129): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_129);
    GGVAR(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_130): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_130);
    GGVAR(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_131): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_131);
    GGVAR(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_132): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_132);
    GGVAR(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_133): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_133);
    GGVAR(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_134): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_134);
    GGVAR(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_135): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_135);
    GGVAR(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_136): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_136);
    GGVAR(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_137): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_137);
    GGVAR(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_138): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_138);
    GGVAR(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_139): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_139);
    GGVAR(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_140): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_140);
    GGVAR(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_141): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_141);
    GGVAR(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_142): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_142);
    GGVAR(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_143): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_143);
    GGVAR(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_144): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_144);
    GGVAR(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_145): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_145);
    GGVAR(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_146): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_146);
    GGVAR(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_147): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_147);
    GGVAR(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_148): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_148);
    GGVAR(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_149): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_149);
    GGVAR(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_150): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_150);
    GGVAR(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_151): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_151);
    GGVAR(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_152): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_152);
    GGVAR(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_153): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_153);
    GGVAR(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_154): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_154);
    GGVAR(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_155): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_155);
    GGVAR(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_156): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_156);
    GGVAR(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_157): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_157);
    GGVAR(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_158): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_158);
    GGVAR(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_159): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_159);
    GGVAR(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_160): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_160);
    GGVAR(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_161): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_161);
    GGVAR(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_162): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_162);
    GGVAR(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_163): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_163);
    GGVAR(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_164): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_164);
    GGVAR(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_165): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_165);
    GGVAR(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_166): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_166);
    GGVAR(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_167): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_167);
    GGVAR(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_168): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_168);
    GGVAR(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_169): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_169);
    GGVAR(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_170): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_170);
    GGVAR(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_171): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_171);
    GGVAR(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_172): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_172);
    GGVAR(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_173): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_173);
    GGVAR(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_174): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_174);
    GGVAR(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_175): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_175);
    GGVAR(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_176): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_176);
    GGVAR(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_177): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_177);
    GGVAR(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_178): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_178);
    GGVAR(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_179): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_179);
    GGVAR(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_180): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_180);
    GGVAR(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class GEGVAR(beltlinked,762x54_7N13_181): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_181);
    GGVAR(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class GEGVAR(beltlinked,762x54_7N13_182): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_182);
    GGVAR(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class GEGVAR(beltlinked,762x54_7N13_183): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_183);
    GGVAR(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class GEGVAR(beltlinked,762x54_7N13_184): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_184);
    GGVAR(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class GEGVAR(beltlinked,762x54_7N13_185): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_185);
    GGVAR(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class GEGVAR(beltlinked,762x54_7N13_186): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_186);
    GGVAR(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class GEGVAR(beltlinked,762x54_7N13_187): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_187);
    GGVAR(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class GEGVAR(beltlinked,762x54_7N13_188): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_188);
    GGVAR(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class GEGVAR(beltlinked,762x54_7N13_189): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_189);
    GGVAR(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class GEGVAR(beltlinked,762x54_7N13_190): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_190);
    GGVAR(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class GEGVAR(beltlinked,762x54_7N13_191): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_191);
    GGVAR(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class GEGVAR(beltlinked,762x54_7N13_192): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_192);
    GGVAR(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class GEGVAR(beltlinked,762x54_7N13_193): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_193);
    GGVAR(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class GEGVAR(beltlinked,762x54_7N13_194): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_194);
    GGVAR(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class GEGVAR(beltlinked,762x54_7N13_195): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_195);
    GGVAR(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class GEGVAR(beltlinked,762x54_7N13_196): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_196);
    GGVAR(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class GEGVAR(beltlinked,762x54_7N13_197): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_197);
    GGVAR(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class GEGVAR(beltlinked,762x54_7N13_198): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_198);
    GGVAR(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class GEGVAR(beltlinked,762x54_7N13_199): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_199);
    GGVAR(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class GEGVAR(beltlinked,762x54_7N13_200): GEGVAR(CoreBelt,762x54_7N13) {
    displayName = CSTRING(beltlinked_762x54_7N13_200);
    GGVAR(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
