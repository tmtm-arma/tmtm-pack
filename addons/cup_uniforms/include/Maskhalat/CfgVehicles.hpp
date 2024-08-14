//////////////////////////////////////////////////////////////////////////
// Maskhalat
class tmtm_maskhalat_base: O_Soldier_base_F
{
    scope=1;
    class Wounds
    {
        tex[] = {};
        mat[] = {
            /// Replace with w1 and w2 from the NAPA folder

            // "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01.rvmat",
            // "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",
            // "a3\Characters_F_Enoch\Uniforms\Data\Gorka_01_injury.rvmat",

            // "A3\Characters_F\Common\Data\basicbody.rvmat",
            // "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
            // "A3\Characters_F\Common\Data\basicbody_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"

        };
    };

    picture = "";
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier.p3d";
    modelSides[] = { 3, 1 };
    hiddenSelections[] = { "Camo1", "Camo2", "clan", "insignia" };
    hiddenSelectionsMaterials[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket.rvmat",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants.rvmat"
    };
};
class tmtm_maskhalat_loose_base: tmtm_maskhalat_base
{
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier2.p3d";
};
class tmtm_maskhalat_hood_base: tmtm_maskhalat_base
{
    model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_NAPA\CUP_NAPA_Soldier4.p3d";
};

//////////////////////////////////////////////////////////////////////////
// Maskhalat (Berezka White)
class tmtm_maskhalat_berezkaWhite: tmtm_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "Maskhalat (Berezka White)";
    uniformClass = "tmtm_u_maskhalat_berezkaWhite";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
    };
};
// Maskhalat + Loose Pants (Berezka White)
class tmtm_maskhalat_berezkaWhite_loose: tmtm_maskhalat_loose_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName = "Maskhalat (Berezka White/Loose)";
    uniformClass = "tmtm_u_maskhalat_berezkaWhite_loose";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
    };
};
// Maskhalat + Loose Pants (Berezka White/Hood)
class tmtm_maskhalat_berezkaWhite_hood: tmtm_maskhalat_hood_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka White/Hood)";
    uniformClass = "tmtm_u_maskhalat_berezkaWhite_hood";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
    };
};
// Maskhalat (Berezka Yellow)
class tmtm_maskhalat_berezkaYellow: tmtm_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Yellow)";
    uniformClass = "tmtm_u_maskhalat_berezkaYellow";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
    };
};
// Maskhalat + Loose Pants (Berezka Yellow)
class tmtm_maskhalat_berezkaYellow_loose: tmtm_maskhalat_loose_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Yellow/Loose)";
    uniformClass = "tmtm_u_maskhalat_berezkaYellow_loose";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
    };
};
// Maskhalat + Loose Pants (Berezka Yellow/Hood)
class tmtm_maskhalat_berezkaYellow_hood: tmtm_maskhalat_hood_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Yellow/Hood)";
    uniformClass = "tmtm_u_maskhalat_berezkaYellow_hood";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
    };
};
// Maskhalat + Loose Pants (Svitanok)
class tmtm_maskhalat_svitanok_loose: tmtm_maskhalat_loose_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Svitanok/Loose)";
    uniformClass = "tmtm_u_maskhalat_svitanok_loose";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_svitanok_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_svitanok_co.paa"
    };
};
// Maskhalat + Loose Pants (Svitanok/Hood)
class tmtm_maskhalat_svitanok_hood: tmtm_maskhalat_hood_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Svitanok/Hood)";
    uniformClass = "tmtm_u_maskhalat_svitanok_hood";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_svitanok_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_svitanok_co.paa"
    };
};
// Maskhalat + Loose Pants (Berezka Winter)
class tmtm_maskhalat_berezkaWinter_loose: tmtm_maskhalat_loose_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Winter/Loose)";
    uniformClass = "tmtm_u_maskhalat_berezkaWinter_loose";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWinter_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWinter_co.paa"
    };
};
// Maskhalat + Loose Pants (Berezka Winter/Hood)
class tmtm_maskhalat_berezkaWinter_hood: tmtm_maskhalat_hood_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Winter/Hood)";
    uniformClass = "tmtm_u_maskhalat_berezkaWinter_hood";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWinter_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWinter_co.paa"
    };
};