// Imports
class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1;
class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3;
class CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4;

// Base classes
/// Jacket #1 - Plain
class tmtm_vkpo_jacket_winter_base_1: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_1
{
    scope=0;
    scopeArsenal=0;
    scopeCurator=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoPants.rvmat"
    };
};

/// Jacket #2 - Kneepads (Round)
class tmtm_vkpo_jacket_winter_base_2: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_3
{
    scope=0;
    scopeArsenal=0;
    scopeCurator=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoPants.rvmat"
    };
};

/// Jacket #3 - Kneepads (Small)
class tmtm_vkpo_jacket_winter_base_3: CUP_U_O_RUS_Soldier_VKPO_Jacket_Winter_4
{
    scope=0;
    scopeArsenal=0;
    scopeCurator=0;

    hiddenSelectionsMaterials[] = {
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoPants.rvmat"
    };
};

// Content
/// Jacket #1 - Plain
class tmtm_vkpo_jacket_winter_Forest_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_Forest_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestMountain_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Forest/Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestMountain_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestOxblood_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Forest/Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestOxblood_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestMTP_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Forest/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestMTP_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_Mountain_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_Mountain_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainForest_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Mountain/Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainForest_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainOxblood_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Mountain/Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainOxblood_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainMTP_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Mountain/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainMTP_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_Oxblood_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_Oxblood_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodForest_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Oxblood/Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodForest_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodMountain_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Oxblood/Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMountain_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodMTP_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, CDF Oxblood/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMTP_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTP_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTP_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPForest_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, MTP/CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPForest_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPMountain_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, MTP/CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPMountain_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPOxblood_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, MTP/CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPOxblood_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackForest_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Black/CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackForest_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackMountain_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Black/CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackMountain_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackOxblood_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Black/CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackOxblood_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackMTP_1: tmtm_vkpo_jacket_winter_base_1
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Black/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackMTP_1";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa"
    };
};

/// Jacket #2 - Kneepads (Round)
class tmtm_vkpo_jacket_winter_Forest_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_Forest_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestMountain_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Forest/Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestMountain_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestOxblood_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Forest/Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestOxblood_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestMTP_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Forest/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestMTP_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_Mountain_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_Mountain_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainForest_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Mountain/Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainForest_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainOxblood_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Mountain/Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainOxblood_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainMTP_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Mountain/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainMTP_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_Oxblood_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_Oxblood_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodForest_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Oxblood/Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodForest_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodMountain_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Oxblood/Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMountain_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodMTP_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, CDF Oxblood/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMTP_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTP_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTP_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPForest_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, MTP/CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPForest_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPMountain_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, MTP/CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPMountain_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPOxblood_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, MTP/CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPOxblood_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackForest_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, Black/CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackForest_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackMountain_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, Black/CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackMountain_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackOxblood_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, Black/CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackOxblood_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackMTP_2: tmtm_vkpo_jacket_winter_base_2
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #1, Black/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackMTP_2";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};

/// Jacket #3 - Kneepads (Small)
class tmtm_vkpo_jacket_winter_Forest_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_Forest_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestMountain_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Forest/Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestMountain_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestOxblood_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Forest/Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestOxblood_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_ForestMTP_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Forest/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_ForestMTP_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_forest_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_Mountain_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_Mountain_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainForest_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Mountain/Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainForest_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainOxblood_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Mountain/Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainOxblood_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MountainMTP_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Mountain/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_MountainMTP_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mountain_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_Oxblood_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_Oxblood_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodForest_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Oxblood/Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodForest_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodMountain_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Oxblood/Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMountain_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_OxbloodMTP_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, CDF Oxblood/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_OxbloodMTP_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_oxblood_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTP_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTP_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPForest_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, MTP/CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPForest_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPMountain_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, MTP/CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPMountain_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_MTPOxblood_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, MTP/CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_MTPOxblood_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_mtp_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackForest_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, Black/CDF Forest";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackForest_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_forest_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackMountain_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, Black/CDF Mountain";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackMountain_3";
    picture="";

    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mountain_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
class tmtm_vkpo_jacket_winter_blackOxblood_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, Black/CDF Oxblood";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackOxblood_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_oxblood_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};

class tmtm_vkpo_jacket_winter_blackMTP_3: tmtm_vkpo_jacket_winter_base_3
{
    author="trenchgun, erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="AWU Jacket, Kneepads #2, Black/MTP";
    uniformClass="tmtm_u_vkpo_jacket_winter_blackMTP_3";

    picture="";
    hiddenSelectionsTextures[]={
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacket_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpoJacketHands_black_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_vkpopants_mtp_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\ra_Gloves_Shoes_s_co.paa",
        "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RussiaModern\Outfit\data\6b51_s_CO.paa"
    };
};
