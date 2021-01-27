//Core Items
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

//5.56x45
class GEGVAR(beltlinked,556x45_IRtracer_1): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_1);
    GGVAR(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_2): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_2);
    GGVAR(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_3): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_3);
    GGVAR(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_4): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_4);
    GGVAR(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_5): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_5);
    GGVAR(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_6): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_6);
    GGVAR(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_7): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_7);
    GGVAR(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_8): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_8);
    GGVAR(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_9): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_9);
    GGVAR(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_10): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_10);
    GGVAR(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_11): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_11);
    GGVAR(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_12): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_12);
    GGVAR(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_13): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_13);
    GGVAR(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_14): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_14);
    GGVAR(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_15): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_15);
    GGVAR(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_16): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_16);
    GGVAR(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_17): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_17);
    GGVAR(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_18): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_18);
    GGVAR(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_19): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_19);
    GGVAR(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_20): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_20);
    GGVAR(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_21): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_21);
    GGVAR(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_22): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_22);
    GGVAR(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_23): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_23);
    GGVAR(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_24): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_24);
    GGVAR(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_25): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_25);
    GGVAR(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_26): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_26);
    GGVAR(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_27): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_27);
    GGVAR(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_28): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_28);
    GGVAR(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_29): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_29);
    GGVAR(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_30): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_30);
    GGVAR(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_31): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_31);
    GGVAR(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_32): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_32);
    GGVAR(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_33): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_33);
    GGVAR(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_34): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_34);
    GGVAR(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_35): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_35);
    GGVAR(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_36): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_36);
    GGVAR(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_37): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_37);
    GGVAR(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_38): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_38);
    GGVAR(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_39): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_39);
    GGVAR(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_40): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_40);
    GGVAR(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_41): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_41);
    GGVAR(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_42): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_42);
    GGVAR(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_43): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_43);
    GGVAR(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_44): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_44);
    GGVAR(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_45): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_45);
    GGVAR(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_46): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_46);
    GGVAR(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_47): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_47);
    GGVAR(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_48): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_48);
    GGVAR(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_49): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_49);
    GGVAR(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_50): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_50);
    GGVAR(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_51): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_51);
    GGVAR(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_52): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_52);
    GGVAR(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_53): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_53);
    GGVAR(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_54): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_54);
    GGVAR(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_55): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_55);
    GGVAR(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_56): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_56);
    GGVAR(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_57): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_57);
    GGVAR(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_58): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_58);
    GGVAR(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_59): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_59);
    GGVAR(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_60): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_60);
    GGVAR(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_61): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_61);
    GGVAR(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_62): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_62);
    GGVAR(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_63): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_63);
    GGVAR(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_64): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_64);
    GGVAR(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_65): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_65);
    GGVAR(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_66): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_66);
    GGVAR(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_67): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_67);
    GGVAR(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_68): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_68);
    GGVAR(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_69): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_69);
    GGVAR(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_70): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_70);
    GGVAR(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_71): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_71);
    GGVAR(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_72): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_72);
    GGVAR(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_73): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_73);
    GGVAR(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_74): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_74);
    GGVAR(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_75): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_75);
    GGVAR(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_76): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_76);
    GGVAR(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_77): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_77);
    GGVAR(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_78): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_78);
    GGVAR(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_79): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_79);
    GGVAR(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_80): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_80);
    GGVAR(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_81): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_81);
    GGVAR(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_82): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_82);
    GGVAR(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_83): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_83);
    GGVAR(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_84): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_84);
    GGVAR(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_85): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_85);
    GGVAR(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_86): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_86);
    GGVAR(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_87): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_87);
    GGVAR(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_88): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_88);
    GGVAR(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_89): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_89);
    GGVAR(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_90): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_90);
    GGVAR(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_91): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_91);
    GGVAR(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_92): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_92);
    GGVAR(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_93): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_93);
    GGVAR(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_94): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_94);
    GGVAR(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_95): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_95);
    GGVAR(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_96): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_96);
    GGVAR(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_97): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_97);
    GGVAR(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_98): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_98);
    GGVAR(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_99): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_99);
    GGVAR(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_100): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_100);
    GGVAR(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_101): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_101);
    GGVAR(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_102): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_102);
    GGVAR(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_103): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_103);
    GGVAR(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_104): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_104);
    GGVAR(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_105): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_105);
    GGVAR(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_106): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_106);
    GGVAR(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_107): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_107);
    GGVAR(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_108): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_108);
    GGVAR(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_109): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_109);
    GGVAR(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_110): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_110);
    GGVAR(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_111): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_111);
    GGVAR(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_112): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_112);
    GGVAR(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_113): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_113);
    GGVAR(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_114): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_114);
    GGVAR(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_115): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_115);
    GGVAR(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_116): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_116);
    GGVAR(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_117): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_117);
    GGVAR(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_118): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_118);
    GGVAR(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_119): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_119);
    GGVAR(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_120): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_120);
    GGVAR(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_121): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_121);
    GGVAR(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_122): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_122);
    GGVAR(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_123): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_123);
    GGVAR(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_124): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_124);
    GGVAR(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_125): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_125);
    GGVAR(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_126): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_126);
    GGVAR(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_127): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_127);
    GGVAR(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_128): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_128);
    GGVAR(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_129): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_129);
    GGVAR(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_130): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_130);
    GGVAR(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_131): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_131);
    GGVAR(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_132): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_132);
    GGVAR(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_133): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_133);
    GGVAR(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_134): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_134);
    GGVAR(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_135): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_135);
    GGVAR(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_136): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_136);
    GGVAR(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_137): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_137);
    GGVAR(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_138): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_138);
    GGVAR(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_139): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_139);
    GGVAR(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_140): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_140);
    GGVAR(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_141): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_141);
    GGVAR(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_142): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_142);
    GGVAR(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_143): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_143);
    GGVAR(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_144): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_144);
    GGVAR(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_145): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_145);
    GGVAR(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_146): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_146);
    GGVAR(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_147): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_147);
    GGVAR(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_148): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_148);
    GGVAR(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_149): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_149);
    GGVAR(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_150): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_150);
    GGVAR(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_151): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_151);
    GGVAR(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_152): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_152);
    GGVAR(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_153): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_153);
    GGVAR(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_154): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_154);
    GGVAR(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_155): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_155);
    GGVAR(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_156): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_156);
    GGVAR(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_157): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_157);
    GGVAR(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_158): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_158);
    GGVAR(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_159): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_159);
    GGVAR(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_160): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_160);
    GGVAR(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_161): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_161);
    GGVAR(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_162): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_162);
    GGVAR(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_163): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_163);
    GGVAR(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_164): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_164);
    GGVAR(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_165): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_165);
    GGVAR(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_166): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_166);
    GGVAR(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_167): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_167);
    GGVAR(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_168): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_168);
    GGVAR(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_169): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_169);
    GGVAR(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_170): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_170);
    GGVAR(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_171): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_171);
    GGVAR(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_172): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_172);
    GGVAR(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_173): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_173);
    GGVAR(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_174): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_174);
    GGVAR(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_175): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_175);
    GGVAR(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_176): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_176);
    GGVAR(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_177): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_177);
    GGVAR(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_178): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_178);
    GGVAR(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_179): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_179);
    GGVAR(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_180): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_180);
    GGVAR(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_181): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_181);
    GGVAR(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_182): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_182);
    GGVAR(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_183): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_183);
    GGVAR(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_184): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_184);
    GGVAR(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_185): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_185);
    GGVAR(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_186): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_186);
    GGVAR(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_187): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_187);
    GGVAR(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_188): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_188);
    GGVAR(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_189): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_189);
    GGVAR(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_190): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_190);
    GGVAR(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_191): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_191);
    GGVAR(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_192): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_192);
    GGVAR(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_193): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_193);
    GGVAR(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_194): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_194);
    GGVAR(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_195): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_195);
    GGVAR(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_196): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_196);
    GGVAR(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_197): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_197);
    GGVAR(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_198): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_198);
    GGVAR(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_199): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_199);
    GGVAR(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class GEGVAR(beltlinked,556x45_IRtracer_200): GEGVAR(CoreBelt,556x45_IRtracer) {
    displayName = CSTRING(beltlinked_556x45_IRtracer_200);
    GGVAR(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
