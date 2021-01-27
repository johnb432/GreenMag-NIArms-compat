#include "script_component.hpp"

class CfgPatches {
   	class ADDON {
      		name = COMPONENT_NAME;
      		units[] = {};
      		weapons[] = {};
      		requiredVersion = REQUIRED_VERSION;
      		requiredAddons[] = {
         			"cba_main",
            "greenmag_main",
            "hlcweapons_core",
            "hlcweapons_ACR",
            "hlcweapons_AKs",
            "hlcweapons_AR15",
            "hlcweapons_AUG",
            "hlcweapons_falpocalypse",
            "hlcweapons_FHAWCovert",
            "hlcweapons_FN3011",
            "hlcweapons_g3",
            "hlcweapons_G36",
            "hlcweapons_M134",
            "hlcweapons_M14",
            "hlcweapons_M16A2",
            "hlcweapons_M60E4",
            "hlcweapons_MG3s",
            "hlcweapons_MP5",
            "hlcweapons_saw",
            "hlcweapons_SG550",
            "hlcweapons_Springfield1903",
            "hlcweapons_stgw57",
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96"
      		};
      		authors[] = {"johnb43"};
   	};
};

#include "CfgWeapons.hpp"

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_50Rnd_45ACP_B_1921;

    #include "CfgMagACR.hpp"
    #include "CfgMagAK545.hpp"
    #include "CfgMagAK762.hpp"
    #include "CfgMagAUG.hpp"
    #include "CfgMagFAL.hpp"
    #include "CfgMagG3.hpp"
    #include "CfgMagG36.hpp"
    #include "CfgMagHK33.hpp"
    #include "CfgMagM14.hpp"
    #include "CfgMagM60.hpp"
    #include "CfgMagMG3.hpp"
    #include "CfgMagMisc.hpp"
    #include "CfgMagPistolMisc.hpp"
    #include "CfgMagRifleMisc.hpp"
    #include "CfgMagSG550.hpp"
    #include "CfgMagSMGMisc.hpp"
    #include "CfgMagSTANAG.hpp"

    //New additions
    #include "CfgMag303.hpp"
    #include "CfgMagMauser.hpp"
    #include "CfgMagPKM.hpp"
};
