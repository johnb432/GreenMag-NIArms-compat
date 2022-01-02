#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
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
            "hlcweapons_XM8",
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96",
            "sp_fwa_mas"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/GreenMag-NIArms-compat";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "GreenMag - NIArms AiO (New) COMPAT";
        author = "johnb43";
        tooltipOwned = "GreenMag - NIArms AiO (New) COMPAT";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/GreenMag-NIArms-compat";
        description = "GreenMag - NIArms AiO (New) compat mod made by johnb43.";
        overview = "GreenMag - NIArms AiO (New) compat mod made by johnb43.";
        picture = "\z\greenmag\addons\comp_niarms\ui\logo_greenmag_niarms_compat.paa";
        logo = "\z\greenmag\addons\comp_niarms\ui\logo_greenmag_niarms_compat.paa";
        overviewPicture = "\z\greenmag\addons\comp_niarms\ui\logo_greenmag_niarms_compat.paa";
    };
};

#include "CfgWeapons.hpp"

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_50Rnd_45ACP_B_1921;

    #include "magazines\CfgMagACR.hpp"
    #include "magazines\CfgMagAK545.hpp"
    #include "magazines\CfgMagAK762.hpp"
    #include "magazines\CfgMagAUG.hpp"
    #include "magazines\CfgMagFAL.hpp"
    #include "magazines\CfgMagG3.hpp"
    #include "magazines\CfgMagG36.hpp"
    #include "magazines\CfgMagHK33.hpp"
    #include "magazines\CfgMagM14.hpp"
    #include "magazines\CfgMagM60.hpp"
    #include "magazines\CfgMagMG3.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagPistolMisc.hpp"
    #include "magazines\CfgMagRifleMisc.hpp"
    #include "magazines\CfgMagSG550.hpp"
    #include "magazines\CfgMagSMGMisc.hpp"
    #include "magazines\CfgMagSTANAG.hpp"

    //New additions
    #include "magazines\CfgMag303.hpp"
    #include "magazines\CfgMagMauser.hpp"
    #include "magazines\CfgMagPKM.hpp"
};
