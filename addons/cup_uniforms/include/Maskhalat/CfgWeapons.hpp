//////////////////////////////////////////////////////////////////////////
class tmtm_u_maskhalat_base: Uniform_Base
{
    scope=0;
    model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
    hiddenSelections[] = { "Camo1", "Camo2", "clan", "insignia" };
};

class tmtm_u_acu_base: ItemCore
{
    scope=0;
    allowedSlots[] = {BACKPACK_SLOT};
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = {"Camo1", "Camo2","camo3"};
};

class tmtm_u_acu_plain_base: tmtm_u_acu_base
{
    scope=0;
    hiddenSelections[] = {"Camo1", "Camo2"};
};

class tmtm_u_m88_base: ItemCore
{
    scope=0;
    allowedSlots[] = {BACKPACK_SLOT};
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    hiddenSelections[] = { "Camo", "clan", "insignia" };
    // class ItemInfo: UniformItem
    // {
    // 	uniformModel = "-";
    // 	uniformClass = "yourclasshere";
    // 	containerClass = "Supply60";
    // 	mass = 20;
    // };
};

//////////////////////////////////////////////////////////////////////////
// Maskhalat (Berezka White)
class tmtm_u_maskhalat_berezkaWhite: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka White)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWhite.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaWhite";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose pants (Berezka White)
class tmtm_u_maskhalat_berezkaWhite_loose: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka White/Loose)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWhite.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaWhite_loose";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Berezka White/Hood)
class tmtm_u_maskhalat_berezkaWhite_hood: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka White/Hood)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWhite.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWhite_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWhite_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaWhite_hood";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat (Berezka Yellow)
class tmtm_u_maskhalat_berezkaYellow: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Yellow)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaYellow.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaYellow";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Berezka Yellow)
class tmtm_u_maskhalat_berezkaYellow_loose: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Yellow/Loose)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaYellow.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaYellow_loose";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Berezka Yellow/Hood)
class tmtm_u_maskhalat_berezkaYellow_hood: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Yellow/Hood)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaYellow.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaYellow_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaYellow_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaYellow_hood";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Svitanok)
class tmtm_u_maskhalat_svitanok_loose: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Svitanok/Loose)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_svitanok.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_svitanok_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_svitanok_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_svitanok_loose";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Svitanok/Hood)
class tmtm_u_maskhalat_svitanok_hood: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Svitanok/Hood)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_svitanok.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_svitanok_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_svitanok_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_svitanok_hood";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Berezka Winter)
class tmtm_u_maskhalat_berezkaWinter_loose: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Winter/Loose)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWinter.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWinter_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWinter_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaWinter_loose";
        containerClass="Supply40";
        mass=20;
    };
};
// Maskhalat + Loose Pants (Berezka Winter/Hood)
class tmtm_u_maskhalat_berezkaWinter_hood: tmtm_u_maskhalat_base
{
    author="erem2k";

    scope=1;
    scopeArsenal=2;
    scopeCurator=0;

    displayName="Maskhalat (Berezka Winter/Hood)";
    picture = "\tmtm\pack\cup_uniforms\Data\UI\icon_tmtm_u_maskhalat_berezkaWinter.paa";

    hiddenSelectionsTextures[] =
    {
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_jacket_berezkaWinter_co.paa",
        "\tmtm\pack\cup_uniforms\Data\tmtm_maskhalat_pants_berezkaWinter_co.paa"
    };
    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass="tmtm_maskhalat_berezkaWinter_hood";
        containerClass="Supply40";
        mass=20;
    };
};
