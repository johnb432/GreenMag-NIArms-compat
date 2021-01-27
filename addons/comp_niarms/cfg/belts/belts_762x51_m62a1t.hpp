//Core Items
class GEGVAR(CoreBelt,762x51_m62a1t): CBA_MiscItem {
				author = CSTRING(Author);
				scope = 1;
				scopeArsenal = 1;
				scopeCurator = 1;
				displayName = CSTRING(corebelt_762x51_m62a1t);
				picture = QGPATH(main,data\belt.paa);
				model = "\A3\weapons_F\ammo\mag_univ.p3d";
				descriptionShort = "";
				icon = "iconObject_circle";
				mapSize = 0.034;

				GGVAR(item) = QGEGVAR(beltlinked,762x51_m62a1t);
			 GGVAR(basicammo) = QGEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
			 GGVAR(ammo) = QGEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
			 GGVAR(typeName) = "762x51_m62a1t";

				class ItemInfo: CBA_MiscItem_ItemInfo {
								mass = 0.15;
				};
};

//7.62x51
class GEGVAR(beltlinked,762x51_m62a1t_1): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_1);
    GGVAR(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_2): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_2);
    GGVAR(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_3): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_3);
    GGVAR(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_4): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_4);
    GGVAR(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_5): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_5);
    GGVAR(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_6): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_6);
    GGVAR(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_7): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_7);
    GGVAR(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_8): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_8);
    GGVAR(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_9): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_9);
    GGVAR(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_10): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_10);
    GGVAR(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_11): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_11);
    GGVAR(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_12): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_12);
    GGVAR(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_13): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_13);
    GGVAR(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_14): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_14);
    GGVAR(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_15): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_15);
    GGVAR(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_16): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_16);
    GGVAR(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_17): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_17);
    GGVAR(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_18): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_18);
    GGVAR(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_19): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_19);
    GGVAR(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_20): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_20);
    GGVAR(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_21): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_21);
    GGVAR(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_22): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_22);
    GGVAR(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_23): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_23);
    GGVAR(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_24): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_24);
    GGVAR(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_25): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_25);
    GGVAR(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_26): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_26);
    GGVAR(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_27): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_27);
    GGVAR(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_28): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_28);
    GGVAR(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_29): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_29);
    GGVAR(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_30): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_30);
    GGVAR(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_31): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_31);
    GGVAR(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_32): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_32);
    GGVAR(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_33): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_33);
    GGVAR(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_34): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_34);
    GGVAR(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_35): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_35);
    GGVAR(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_36): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_36);
    GGVAR(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_37): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_37);
    GGVAR(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_38): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_38);
    GGVAR(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_39): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_39);
    GGVAR(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_40): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_40);
    GGVAR(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_41): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_41);
    GGVAR(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_42): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_42);
    GGVAR(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_43): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_43);
    GGVAR(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_44): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_44);
    GGVAR(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_45): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_45);
    GGVAR(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_46): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_46);
    GGVAR(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_47): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_47);
    GGVAR(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_48): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_48);
    GGVAR(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_49): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_49);
    GGVAR(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_50): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_50);
    GGVAR(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_51): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_51);
    GGVAR(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_52): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_52);
    GGVAR(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_53): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_53);
    GGVAR(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_54): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_54);
    GGVAR(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_55): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_55);
    GGVAR(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_56): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_56);
    GGVAR(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_57): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_57);
    GGVAR(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_58): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_58);
    GGVAR(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_59): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_59);
    GGVAR(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_60): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_60);
    GGVAR(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_61): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_61);
    GGVAR(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_62): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_62);
    GGVAR(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_63): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_63);
    GGVAR(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_64): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_64);
    GGVAR(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_65): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_65);
    GGVAR(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_66): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_66);
    GGVAR(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_67): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_67);
    GGVAR(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_68): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_68);
    GGVAR(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_69): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_69);
    GGVAR(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_70): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_70);
    GGVAR(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_71): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_71);
    GGVAR(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_72): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_72);
    GGVAR(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_73): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_73);
    GGVAR(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_74): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_74);
    GGVAR(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_75): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_75);
    GGVAR(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_76): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_76);
    GGVAR(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_77): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_77);
    GGVAR(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_78): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_78);
    GGVAR(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_79): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_79);
    GGVAR(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_80): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_80);
    GGVAR(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_81): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_81);
    GGVAR(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_82): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_82);
    GGVAR(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_83): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_83);
    GGVAR(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_84): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_84);
    GGVAR(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_85): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_85);
    GGVAR(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_86): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_86);
    GGVAR(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_87): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_87);
    GGVAR(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_88): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_88);
    GGVAR(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_89): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_89);
    GGVAR(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_90): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_90);
    GGVAR(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_91): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_91);
    GGVAR(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_92): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_92);
    GGVAR(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_93): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_93);
    GGVAR(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_94): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_94);
    GGVAR(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_95): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_95);
    GGVAR(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_96): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_96);
    GGVAR(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_97): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_97);
    GGVAR(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_98): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_98);
    GGVAR(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_99): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_99);
    GGVAR(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_100): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_100);
    GGVAR(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_101): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_101);
    GGVAR(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_102): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_102);
    GGVAR(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_103): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_103);
    GGVAR(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_104): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_104);
    GGVAR(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_105): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_105);
    GGVAR(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_106): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_106);
    GGVAR(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_107): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_107);
    GGVAR(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_108): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_108);
    GGVAR(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_109): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_109);
    GGVAR(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_110): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_110);
    GGVAR(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_111): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_111);
    GGVAR(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_112): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_112);
    GGVAR(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_113): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_113);
    GGVAR(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_114): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_114);
    GGVAR(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_115): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_115);
    GGVAR(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_116): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_116);
    GGVAR(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_117): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_117);
    GGVAR(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_118): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_118);
    GGVAR(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_119): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_119);
    GGVAR(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_120): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_120);
    GGVAR(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_121): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_121);
    GGVAR(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_122): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_122);
    GGVAR(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_123): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_123);
    GGVAR(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_124): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_124);
    GGVAR(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_125): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_125);
    GGVAR(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_126): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_126);
    GGVAR(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_127): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_127);
    GGVAR(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_128): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_128);
    GGVAR(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_129): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_129);
    GGVAR(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_130): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_130);
    GGVAR(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_131): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_131);
    GGVAR(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_132): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_132);
    GGVAR(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_133): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_133);
    GGVAR(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_134): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_134);
    GGVAR(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_135): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_135);
    GGVAR(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_136): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_136);
    GGVAR(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_137): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_137);
    GGVAR(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_138): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_138);
    GGVAR(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_139): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_139);
    GGVAR(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_140): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_140);
    GGVAR(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_141): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_141);
    GGVAR(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_142): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_142);
    GGVAR(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_143): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_143);
    GGVAR(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_144): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_144);
    GGVAR(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_145): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_145);
    GGVAR(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_146): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_146);
    GGVAR(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_147): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_147);
    GGVAR(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_148): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_148);
    GGVAR(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_149): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_149);
    GGVAR(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_150): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_150);
    GGVAR(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_151): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_151);
    GGVAR(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_152): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_152);
    GGVAR(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_153): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_153);
    GGVAR(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_154): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_154);
    GGVAR(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_155): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_155);
    GGVAR(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_156): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_156);
    GGVAR(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_157): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_157);
    GGVAR(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_158): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_158);
    GGVAR(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_159): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_159);
    GGVAR(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_160): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_160);
    GGVAR(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_161): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_161);
    GGVAR(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_162): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_162);
    GGVAR(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_163): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_163);
    GGVAR(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_164): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_164);
    GGVAR(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_165): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_165);
    GGVAR(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_166): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_166);
    GGVAR(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_167): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_167);
    GGVAR(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_168): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_168);
    GGVAR(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_169): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_169);
    GGVAR(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_170): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_170);
    GGVAR(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_171): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_171);
    GGVAR(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_172): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_172);
    GGVAR(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_173): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_173);
    GGVAR(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_174): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_174);
    GGVAR(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_175): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_175);
    GGVAR(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_176): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_176);
    GGVAR(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_177): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_177);
    GGVAR(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_178): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_178);
    GGVAR(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_179): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_179);
    GGVAR(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_180): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_180);
    GGVAR(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_181): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_181);
    GGVAR(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_182): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_182);
    GGVAR(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_183): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_183);
    GGVAR(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_184): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_184);
    GGVAR(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_185): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_185);
    GGVAR(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_186): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_186);
    GGVAR(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_187): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_187);
    GGVAR(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_188): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_188);
    GGVAR(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_189): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_189);
    GGVAR(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_190): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_190);
    GGVAR(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_191): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_191);
    GGVAR(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_192): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_192);
    GGVAR(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_193): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_193);
    GGVAR(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_194): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_194);
    GGVAR(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_195): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_195);
    GGVAR(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_196): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_196);
    GGVAR(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_197): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_197);
    GGVAR(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_198): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_198);
    GGVAR(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_199): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_199);
    GGVAR(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_200): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_200);
    GGVAR(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_201): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_201);
    GGVAR(bullets) = 201;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_202): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_202);
    GGVAR(bullets) = 202;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_203): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_203);
    GGVAR(bullets) = 203;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_204): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_204);
    GGVAR(bullets) = 204;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_205): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_205);
    GGVAR(bullets) = 205;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_206): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_206);
    GGVAR(bullets) = 206;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_207): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_207);
    GGVAR(bullets) = 207;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_208): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_208);
    GGVAR(bullets) = 208;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_209): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_209);
    GGVAR(bullets) = 209;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_210): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_210);
    GGVAR(bullets) = 210;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_211): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_211);
    GGVAR(bullets) = 211;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_212): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_212);
    GGVAR(bullets) = 212;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_213): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_213);
    GGVAR(bullets) = 213;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 31.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_214): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_214);
    GGVAR(bullets) = 214;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 32.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_215): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_215);
    GGVAR(bullets) = 215;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 32.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_216): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_216);
    GGVAR(bullets) = 216;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 32.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_217): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_217);
    GGVAR(bullets) = 217;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 32.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_218): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_218);
    GGVAR(bullets) = 218;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 32.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_219): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_219);
    GGVAR(bullets) = 219;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 32.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_220): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_220);
    GGVAR(bullets) = 220;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_221): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_221);
    GGVAR(bullets) = 221;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_222): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_222);
    GGVAR(bullets) = 222;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_223): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_223);
    GGVAR(bullets) = 223;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_224): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_224);
    GGVAR(bullets) = 224;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_225): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_225);
    GGVAR(bullets) = 225;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_226): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_226);
    GGVAR(bullets) = 226;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 33.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_227): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_227);
    GGVAR(bullets) = 227;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_228): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_228);
    GGVAR(bullets) = 228;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_229): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_229);
    GGVAR(bullets) = 229;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_230): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_230);
    GGVAR(bullets) = 230;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.50;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_231): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_231);
    GGVAR(bullets) = 231;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.65;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_232): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_232);
    GGVAR(bullets) = 232;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.80;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_233): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_233);
    GGVAR(bullets) = 233;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 34.95;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_234): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_234);
    GGVAR(bullets) = 234;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 35.10;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_235): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_235);
    GGVAR(bullets) = 235;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 35.25;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_236): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_236);
    GGVAR(bullets) = 236;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 35.40;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_237): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_237);
    GGVAR(bullets) = 237;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 35.55;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_238): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_238);
    GGVAR(bullets) = 238;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 35.70;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_239): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_239);
    GGVAR(bullets) = 239;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 35.85;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_240): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_240);
    GGVAR(bullets) = 240;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.00;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_241): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_241);
    GGVAR(bullets) = 241;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.15;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_242): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_242);
    GGVAR(bullets) = 242;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.30;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_243): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_243);
    GGVAR(bullets) = 243;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.45;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_244): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_244);
    GGVAR(bullets) = 244;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.60;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_245): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_245);
    GGVAR(bullets) = 245;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.75;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_246): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_246);
    GGVAR(bullets) = 246;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 36.90;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_247): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_247);
    GGVAR(bullets) = 247;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 37.05;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_248): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_248);
    GGVAR(bullets) = 248;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 37.20;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_249): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_249);
    GGVAR(bullets) = 249;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 37.35;
    };
};
class GEGVAR(beltlinked,762x51_m62a1t_250): GEGVAR(CoreBelt,762x51_m62a1t) {
    displayName = CSTRING(beltlinked_762x51_m62a1t_250);
    GGVAR(bullets) = 250;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 37.50;
    };
};
