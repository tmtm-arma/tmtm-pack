class tmtm_h_balaclava_th_base: HelmetBase
{
    scope=0;

    descriptionShort="$STR_A3_SP_NOARMOR";

    model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
    hiddenSelections[]= { "camo" };

    class ItemInfo: ItemInfo
    {
        hiddenSelections[]= { "camo" };

        uniformModel="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
        mass=6;

        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=0;
                passThrough=1;
            };
        };
    };
};

class tmtm_h_balaclava_th_black : tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Black)";
    picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";

    hiddenSelectionsTextures[]= {
        "\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"
        };
    };
};

class tmtm_h_balaclava_th_olive : tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Olive)";
    picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_olive_ca.paa";

    hiddenSelectionsTextures[]= {
        "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_balaclava_grn_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_balaclava_grn_co.paa"
        };
    };
};

class tmtm_h_balaclava_th_flecktarn: tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Flecktarn)";
    picture="\a3\Characters_F_Decade\Facewear\Data\UI\icon_G_Balaclava_Flecktarn_CA.paa";

    hiddenSelectionsTextures[]= {
        "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Flecktarn_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Flecktarn_CO.paa"
        };
    };
};

class tmtm_h_balaclava_th_tropentarn: tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Tropentarn)";
    picture="\a3\Characters_F_Decade\Facewear\Data\UI\icon_G_Balaclava_Tropentarn_CA.paa";

    hiddenSelectionsTextures[]= {
        "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Tropentarn_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Tropentarn_CO.paa"
        };
    };
};

class tmtm_h_balaclava_th_scarecrow: tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Scarecrow)";
    picture="\a3\Characters_F_Decade\Facewear\Data\UI\icon_G_Balaclava_Scarecrow_01_CA.paa";

    hiddenSelectionsTextures[]= {
        "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Scarecrow_01_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Scarecrow_01_CO.paa"
        };
    };
};

class tmtm_h_balaclava_th_stripeblue: tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Blue Stripe)";
    picture="\a3\Characters_F_Decade\Facewear\Data\UI\icon_G_Balaclava_BlueStrips_CA.paa";

    hiddenSelectionsTextures[]= {
        "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_BlueStrips_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_BlueStrips_CO.paa"
        };
    };
};

class tmtm_h_balaclava_th_pattern_orange: tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Orange Pattern)";
    picture="\a3\Characters_F_Decade\Facewear\Data\UI\icon_G_Balaclava_Flames1_CA.paa";

    hiddenSelectionsTextures[]= {
        "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Flames1_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Flames1_CO.paa"
        };
    };
};

class tmtm_h_balaclava_th_skull: tmtm_h_balaclava_th_base
{
    scope=2;
    scopeArsenal=2;
    author="$STR_A3_Bohemia_Interactive";

    displayName="Balaclava, 3 Hole (Skull)";
    picture="\a3\Characters_F_Decade\Facewear\Data\UI\icon_G_Balaclava_Skull1_CA.paa";

    hiddenSelectionsTextures[]= {
        "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Skull1_CO.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\a3\Characters_F_Decade\Facewear\Data\G_Balaclava_Skull1_CO.paa"
        };
    };
};
