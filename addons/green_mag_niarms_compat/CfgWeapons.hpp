class CfgWeapons {
    class hgun_P07_F;
    class SMG_02_F;
    class arifle_Mk20_plain_F;
    class LMG_RCWS;
    class srifle_EBR_F;
    class UK3CB_BAF_L105A2;
    class UK3CB_BAF_L110_Base;
    class UK3CB_BAF_L115_Base;
    class UK3CB_BAF_Slung_Static_Weapon_Base;
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
        ACE_Overheating_allowSwapBarrel = 1;
        magazineWell[] += {"M240_762x51","CBA_762x51_LINKS"};
    };
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
        ACE_Overheating_allowSwapBarrel = 1;
        magazines[] = {"UK3CB_BAF_556_200Rnd"};
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","M249_556x45","CBA_556x45_MINIMI"};
    };
    class UK3CB_BAF_L110A1: UK3CB_BAF_L110_556_Base {
        class WeaponSlotsInfo {
            mass = 164;
        };
    };

    class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
        magazines[] = {"UK3CB_BAF_556_30Rnd"};
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo {};
    };
    class UK3CB_BAF_L119A1: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo {
            mass = 75.3;
        };
    };
    class UK3CB_BAF_L119A1_CQB: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo {
            mass = 71.8;
        };
    };
    class UK3CB_BAF_L119A1_UKUGL: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 108.3;
        };
    };
    class UK3CB_BAF_L119A1_FG: UK3CB_BAF_L119_Base {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };

    class UK3CB_BAF_L128A1: srifle_EBR_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds","CBA_12g_7rnds","CBA_12g_8rnds"};
    };

    class UK3CB_BAF_L129A1: srifle_EBR_F {
        magazineWell[] += {"CBA_762x51_SR25","CBA_762x51_AR10"};
    };

    class UK3CB_BAF_L1A1: Rifle_Base_F {
        magazineWell[] += {"CBA_762x51_FAL","CBA_762x51_FAL_L"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 95;
        };
    };
    class UK3CB_BAF_L1A1_Wood: UK3CB_BAF_L1A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 95;
        };
    };

    class UK3CB_BAF_L7A2: Rifle_Base_F {
        ACE_Overheating_allowSwapBarrel = 1;
        magazineWell[] += {"M240_762x51","CBA_762x51_LINKS"};
    };

    class UK3CB_BAF_Tripod: UK3CB_BAF_Slung_Static_Weapon_Base {
  		    magazineWell[] += {"CBA_762x51_LINKS","CBA_50BMG_100rnds"};
   	};
   	class UK3CB_BAF_L16_Tripod: UK3CB_BAF_Tripod {
   		   magazineWell[] = {};
   	};

    class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
        magazines[] = {"UK3CB_BAF_556_30Rnd"};
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };

    class UK3CB_BAF_L22: UK3CB_BAF_L85A2 {
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo {
            mass = 78;
        };
    };
    class UK3CB_BAF_L22A2: UK3CB_BAF_L22 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 78;
        };
    };

    class UK3CB_BAF_L85A3: UK3CB_BAF_L85A2 {
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        class WeaponSlotsInfo {
            mass = 82;
        };
    };
    class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2 {
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
        UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
    };
    class UK3CB_BAF_L86A3: UK3CB_BAF_L85A2 {
        magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    };

    class UK3CB_BAF_L91A1: SMG_02_F {
        magazineWell[] += {"CBA_9x19_MP5"};
        class WeaponSlotsInfo {
            mass = 68.3;
        };
    };
    class UK3CB_BAF_L92A1: UK3CB_BAF_L91A1 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75;
        };
    };

    class UK3CB_BAF_L131A1: hgun_P07_F {
  		    magazineWell[] += {"CBA_9x19_Glock_Full"};
    };
    class UK3CB_BAF_L9A1: hgun_P07_F {
        magazines[] += {"UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_17Rnd"};
    };
    class UK3CB_BAF_L105A1: hgun_P07_F {
        magazineWell[] += {"CBA_9x19_P226"};
    };
    class UK3CB_BAF_L107A1: UK3CB_BAF_L105A1 {
        magazineWell[] += {"CBA_9x19_P226","CBA_9x19_P228"};
    };
    class UK3CB_BAF_L117A2: UK3CB_BAF_L105A2 {
        magazineWell[] += {"CBA_9x19_P226","CBA_9x19_P228"};
    };

    class UK3CB_BAF_L7A2_veh: LMG_RCWS {
        magazineWell[] += {"CBA_762x51_LINKS"};
        magazines[] += {
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer"
        };
    };
    class UK3CB_BAF_L112A1_veh: LMG_RCWS {
        magazineWell[] += {"CBA_762x51_LINKS"};
        magazines[] += {
            "150Rnd_762x51_Box",
            "150Rnd_762x51_Box_Tracer"
        };
    };

    class HMG_M2;
    class UK3CB_BAF_L111A1_vehicle: HMG_M2 {
        magazineWell[] += {"CBA_50BMG_100rnds"};
    };
    class UK3CB_BAF_L111A1_veh: HMG_M2 {
        magazineWell[] += {"CBA_50BMG_100rnds"};
    };

    class UK3CB_BAF_L111A1: UK3CB_BAF_Slung_Static_Weapon_Base {
        magazineWell[] += {"CBA_50BMG_100rnds"};
    };
};
