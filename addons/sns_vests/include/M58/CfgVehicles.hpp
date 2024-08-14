// Reconfigs of harnesses as backpacks
class tmtm_b_m58_bare: Bag_Base
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness";
    picture="\sns_dutch\ui\gear_m58_ca.paa";

    model="\sns_dutch\sns_gear_m58_bare.p3d";

    hiddenSelections[]= { "camo" };
    hiddenSelectionsTextures[]= {
        "\sns_dutch\data\gear_m58_co.paa"
    };

    maximumLoad=30;
    mass=15;
};

class tmtm_b_m58_satchel: tmtm_b_m58_bare
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness (Satchel)";
    model="\sns_dutch\sns_gear_m58_drop.p3d";

    maximumLoad=100;
};

class tmtm_b_m58_satchel_m43: tmtm_b_m58_satchel
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness (Satchel, M43)";
    model="\sns_dutch\sns_gear_m58_m43.p3d";
};

class tmtm_b_m58_satchel_alice: tmtm_b_m58_satchel
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness (Satchel, ALICE)";
    model="\sns_dutch\sns_gear_m58_laat.p3d";
};

class tmtm_b_m58_satchel_holster: tmtm_b_m58_satchel
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness (Satchel, Holster)";
    picture="\sns_dutch\ui\gear_m58_pistal_ca.paa";
    model="\sns_dutch\sns_gear_m58_pistal.p3d";
};

class tmtm_b_m58_satchel_m43_holster: tmtm_b_m58_satchel_holster
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness (Satchel, Holster, M43)";
    model="\sns_dutch\sns_gear_m58_pistal_m43.p3d";
};

class tmtm_b_m58_satchel_alice_holster: tmtm_b_m58_satchel_holster
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58 Harness (Satchel, Holster, ALICE)";
    model="\sns_dutch\sns_gear_m58_pistal_laat.p3d";
};

class tmtm_b_m58_p37_bare: tmtm_b_m58_bare
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58/P37 Harness";
    picture="\sns_dutch\ui\gear_p37_ca.paa";
    model="\sns_dutch\sns_gear_p37_bare.p3d";

    maximumLoad=60;
};

class tmtm_b_m58_p37_satchel: tmtm_b_m58_p37_bare
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58/P37 Harness (Satchel)";
    model="\sns_dutch\sns_gear_p37.p3d";

    maximumLoad=130; // pouches + satchel should have more load than just satchel
};

class tmtm_b_m58_p37_satchel_m43: tmtm_b_m58_p37_satchel
{
    author="Justin + 089, erem2k";
    scope=2;
    scopeArsenal=2;

    displayName="M58/P37 Harness (Satchel, M43)";
    model="\sns_dutch\sns_gear_p37_m43.p3d";
};
