class cfgPatches
{
  class St_Crime_Street_Criminals
  {
    units[]={"St_Crime_Ammo_Carrier","St_Crime_Shooter_PDW","St_Crime_Medic","St_Crime_Engineer","St_Crime_Crime_Boss","St_Crime_Shooter_pistol","St_Crime_Unarmed","St_Crime_Group_Leader","St_Crime_Team_Leader","St_Crime_Competitor","St_Crime_Get_Away_Driver","St_Crime_Bomb_Maker","St_Crime_Heli_Pilot","St_Crime_Pilot","St_Crime_Fuel_Truck","St_Crime_Hatchback","St_Crime_Jeep","St_Crime_Offroad","St_Crime_Crossover","St_Crime_M900","St_Crime_Cessna","St_Crime_RHIB_Boat","St_Crime_Utility_Truck","St_Crime_Van_Services","St_Crime_Van_Transportation"};
    weapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","St_Crime_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","St_Crime_hgun_ACPC2_F_acc_flashlight_pistol"};
    requiredVersion=0.1;
    requiredAddons[]={"A3_Weapons_F_Items","A3_Weapons_F","A3_Weapons_F_SMGs_Pdw2000","A3_Weapons_F_Pistols_Rook40","A3_Characters_F_Exp","A3_Characters_F","A3_Characters_F_Exp_Vests","A3_Characters_F_Orange","A3_Weapons_F_Pistols_Pistol_Heavy_02","A3_Characters_F_Enoch","A3_Weapons_F_Pistols_ACPC2","A3_Characters_F_Orange_Headgear","A3_Characters_F_Orange_Vests"};
  };
};

class cfgFactionClasses
{
  class St_Crime_Street_Criminals
  {
    icon="";
    displayName="Street Criminals";
    side=0;
    priority=1;
  };
};


class cfgWeapons
{
  class hgun_PDW2000_F;
  class hgun_Rook40_F;
  class hgun_Pistol_heavy_02_F;
  class hgun_ACPC2_F;

  class St_Crime_hgun_PDW2000_F: hgun_PDW2000_F
  {
    displayName="PDW2000 9 mm";
    scope=1;
    class LinkedItems
    {
    };
  };

  class St_Crime_hgun_Rook40_F: hgun_Rook40_F
  {
    displayName="Rook-40 9 mm";
    scope=1;
    class LinkedItems
    {
    };
  };

  class St_Crime_hgun_Pistol_heavy_02_F_acc_flashlight_pistol: hgun_Pistol_heavy_02_F
  {
    displayName="Zubr .45 ACP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight_pistol";
      };
    };
  };

  class St_Crime_hgun_ACPC2_F_acc_flashlight_pistol: hgun_ACPC2_F
  {
    displayName="ACP-C2 .45 ACP";
    scope=1;
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        slot="PointerSlot";
        item="acc_flashlight_pistol";
      };
    };
  };

};

class cfgVehicles
{
  class I_G_Soldier_A_F;
  class B_TacticalPack_blk;
  class I_G_Soldier_AR_F;
  class B_Messenger_Gray_F;
  class I_G_medic_F;
  class B_TacticalPack_rgr;
  class I_G_engineer_F;
  class I_G_officer_F;
  class I_G_Soldier_lite_F;
  class B_Messenger_Black_F;
  class I_G_Soldier_unarmed_F;
  class I_G_Soldier_SL_F;
  class B_Messenger_Coyote_F;
  class I_G_Soldier_TL_F;
  class B_LegStrapBag_black_F;
  class B_Messenger_Olive_F;
  class B_FieldPack_blk;
  class I_helipilot_F;
  class I_pilot_F;
  class C_Van_01_fuel_F;
  class C_Hatchback_01_F;
  class C_Offroad_02_unarmed_F;
  class C_Offroad_01_F;
  class C_SUV_01_F;
  class C_Heli_Light_01_civil_F;
  class C_Plane_Civil_01_F;
  class C_Boat_Transport_02_F;
  class C_Van_01_transport_F;
  class C_Van_02_service_F;
  class C_Van_02_transport_F;

  class St_Crime_Ammo_Carrier: I_G_Soldier_A_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Ammo Carrier";
    uniformClass="U_I_C_Soldier_Bandit_3_F";
    weapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","Chemlight_red","Chemlight_red","Chemlight_green","Chemlight_green","Chemlight_blue","Chemlight_blue","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_yellow","Chemlight_yellow","Chemlight_red","Chemlight_red","Chemlight_green","Chemlight_green","Chemlight_blue","Chemlight_blue","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_blk","V_Chestrig_blk","G_Bandanna_khk"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_blk","V_Chestrig_blk","G_Bandanna_khk"};
    backpack="St_Crime_Ammo_Carrier_pack";
  };

  class St_Crime_Shooter_PDW: I_G_Soldier_AR_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Shooter PDW";
    uniformClass="U_I_C_Soldier_Bandit_2_F";
    weapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_surfer_blk","G_Bandanna_shades"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_surfer_blk","G_Bandanna_shades"};
    backpack="St_Crime_Shooter_PDW_pack";
  };

  class St_Crime_Medic: I_G_medic_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Medic";
    uniformClass="U_C_Man_casual_6_F";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","Medikit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","Medikit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellYellow","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellYellow","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","SmokeShell","SmokeShell","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_surfer","V_TacChestrig_grn_F","G_EyeProtectors_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Cap_surfer","V_TacChestrig_grn_F","G_EyeProtectors_F"};
    backpack="St_Crime_Medic_pack";
  };

  class St_Crime_Engineer: I_G_engineer_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Engineer";
    uniformClass="U_C_Mechanic_01_F";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","ToolKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","ToolKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_sand","G_Lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_sand","G_Lowprofile"};
    backpack="St_Crime_Engineer_pack";
  };

  class St_Crime_Crime_Boss: I_G_officer_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Crime Boss";
    uniformClass="U_Marshal";
    weapons[]={"St_Crime_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Pistol_heavy_02_F_acc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"6Rnd_45ACP_Cylinder","Chemlight_yellow","Chemlight_red","Chemlight_green","Chemlight_blue","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    respawnMagazines[]={"6Rnd_45ACP_Cylinder","Chemlight_yellow","Chemlight_red","Chemlight_green","Chemlight_blue","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Hat_checker","V_Rangemaster_belt","G_Spectacles_Tinted"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Hat_checker","V_Rangemaster_belt","G_Spectacles_Tinted"};
    backpack="";
  };

  class St_Crime_Shooter_pistol: I_G_Soldier_lite_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Shooter pistol";
    uniformClass="U_I_C_Soldier_Bandit_5_F";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_surfer_grn","G_Balaclava_lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_surfer_grn","G_Balaclava_lowprofile"};
    backpack="St_Crime_Shooter_pistol_pack";
  };

  class St_Crime_Unarmed: I_G_Soldier_unarmed_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Unarmed";
    uniformClass="U_I_C_Soldier_Bandit_5_F";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_surfer_grn","G_Balaclava_lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_surfer_grn","G_Balaclava_lowprofile"};
    backpack="St_Crime_Unarmed_pack";
  };

  class St_Crime_Group_Leader: I_G_Soldier_SL_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Group Leader";
    uniformClass="U_C_E_LooterJacket_01_F";
    weapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"MiniGrenade","MiniGrenade","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"MiniGrenade","MiniGrenade","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_Bandanna_khk","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_Bandanna_khk","G_Aviator"};
    backpack="St_Crime_Group_Leader_pack";
  };

  class St_Crime_Team_Leader: I_G_Soldier_TL_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Team Leader";
    uniformClass="U_I_L_Uniform_01_tshirt_skull_F";
    weapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_PDW2000_F","St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_gry","G_Bandanna_sport"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Bandanna_gry","G_Bandanna_sport"};
    backpack="St_Crime_Team_Leader_pack";
  };

  class St_Crime_Competitor: I_G_Soldier_lite_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Competitor";
    uniformClass="U_Competitor";
    weapons[]={"Binocular","St_Crime_hgun_ACPC2_F_acc_flashlight_pistol","Put","Throw"};
    respawnWeapons[]={"Binocular","St_Crime_hgun_ACPC2_F_acc_flashlight_pistol","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit","FirstAidKit"};
    magazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
    respawnMagazines[]={"9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Hat_Safari_sand_F","V_Rangemaster_belt","G_Aviator"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","H_Hat_Safari_sand_F","V_Rangemaster_belt","G_Aviator"};
    backpack="St_Crime_Competitor_pack";
  };

  class St_Crime_Get_Away_Driver: I_G_Soldier_lite_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Get Away Driver";
    uniformClass="U_C_Driver_1";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HeadSet_yellow_F","G_Balaclava_lowprofile"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","H_HeadSet_yellow_F","G_Balaclava_lowprofile"};
    backpack="St_Crime_Get_Away_Driver_pack";
  };

  class St_Crime_Bomb_Maker: I_G_Soldier_lite_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Bomb Maker";
    uniformClass="U_C_Uniform_Farmer_01_F";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","IEDUrbanBig_Remote_Mag"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow","IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","IEDUrbanBig_Remote_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_earprot_black_F","V_Pocketed_black_F","G_Balaclava_combat"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_Construction_earprot_black_F","V_Pocketed_black_F","G_Balaclava_combat"};
    backpack="St_Crime_Bomb_Maker_pack";
  };

  class St_Crime_Heli_Pilot: I_helipilot_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Heli Pilot";
    uniformClass="U_C_Driver_1";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_RacingHelmet_1_F","V_Pocketed_olive_F","G_WirelessEarpiece_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_RacingHelmet_1_F","V_Pocketed_olive_F","G_WirelessEarpiece_F"};
    backpack="St_Crime_Heli_Pilot_pack";
  };

  class St_Crime_Pilot: I_pilot_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Pilot";
    uniformClass="U_C_Driver_1";
    weapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    respawnWeapons[]={"St_Crime_hgun_Rook40_F","Put","Throw"};
    items[]={"FirstAidKit","FirstAidKit"};
    respawnItems[]={"FirstAidKit","FirstAidKit"};
    magazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    respawnMagazines[]={"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Chemlight_blue","Chemlight_blue","Chemlight_green","Chemlight_green","Chemlight_red","Chemlight_red","Chemlight_yellow","Chemlight_yellow"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_RacingHelmet_1_F","V_Pocketed_olive_F","G_WirelessEarpiece_F"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","H_RacingHelmet_1_F","V_Pocketed_olive_F","G_WirelessEarpiece_F"};
    backpack="St_Crime_Pilot_pack";
  };

  class St_Crime_Fuel_Truck: C_Van_01_fuel_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Fuel Truck";
    hiddenSelectionsTextures[]={"a3\soft_f_gamma\van_01\data\van_01_ext_co.paa","a3\soft_f_gamma\van_01\data\van_01_tank_red_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Hatchback: C_Hatchback_01_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Hatchback";
    hiddenSelectionsTextures[]={"a3\soft_f_gamma\hatchback_01\data\hatchback_01_ext_base03_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Jeep: C_Offroad_02_unarmed_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Jeep";
    hiddenSelectionsTextures[]={"a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_ext_blue_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa","a3\soft_f_exp\offroad_02\data\offroad_02_int_blue_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Offroad: C_Offroad_01_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Offroad";
    hiddenSelectionsTextures[]={"a3\soft_f\offroad_01\data\offroad_01_ext_base02_co.paa","a3\soft_f\offroad_01\data\offroad_01_ext_base02_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Crossover: C_SUV_01_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Crossover";
    hiddenSelectionsTextures[]={"a3\soft_f_gamma\suv_01\data\suv_01_ext_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_M900: C_Heli_Light_01_civil_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="M900";
    hiddenSelectionsTextures[]={"a3\air_f\heli_light_01\data\heli_light_01_ext_blue_co.paa",""};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Cessna: C_Plane_Civil_01_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Cessna";
    hiddenSelectionsTextures[]={"a3\air_f_exp\plane_civil_01\data\btt_ext_01_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_ext_02_wave_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_01_co.paa","a3\air_f_exp\plane_civil_01\data\btt_int_02_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_RHIB_Boat: C_Boat_Transport_02_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="RHIB Boat";
    hiddenSelectionsTextures[]={"a3\boat_f_exp\boat_transport_02\data\boat_transport_02_exterior_civilian_co.paa","a3\boat_f_exp\boat_transport_02\data\boat_transport_02_interior_2_civilian_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Utility_Truck: C_Van_01_transport_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Utility Truck";
    hiddenSelectionsTextures[]={"a3\soft_f_gamma\van_01\data\van_01_ext_red_co.paa","a3\soft_f_gamma\van_01\data\van_01_adds_co.paa","a3\soft_f_gamma\van_01\data\van_01_int_base_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Van_Services: C_Van_02_service_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Van Services";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_civservice_co.paa","a3\soft_f_orange\van_02\data\van_wheel_dirty_co.paa","a3\soft_f_orange\van_02\data\van_glass_civservice_ca.paa","a3\soft_f_orange\van_02\data\van_body_civservice_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };

  class St_Crime_Van_Transportation: C_Van_02_transport_F
  {
    faction="St_Crime_Street_Criminals";
    side=0;
    displayName="Van Transportation";
    hiddenSelectionsTextures[]={"a3\soft_f_orange\van_02\data\van_body_orange_co.paa","a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa","a3\soft_f_orange\van_02\data\van_glass_transport_ca.paa","a3\soft_f_orange\van_02\data\van_body_orange_co.paa"};
    crew="St_Crime_Ammo_Carrier";
    typicalCargo[]={"St_Crime_Ammo_Carrier"};
  };


  class St_Crime_Ammo_Carrier_pack: B_TacticalPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=8;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
     class _xx_30Rnd_9x21_Mag {count=10;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Shooter_PDW_pack: B_Messenger_Gray_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=4;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
     class _xx_30Rnd_9x21_Mag {count=8;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Medic_pack: B_TacticalPack_rgr
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=10;name="FirstAidKit";};
     class _xx_Medikit {count=1;name="Medikit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Engineer_pack: B_Messenger_Gray_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=4;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Shooter_pistol_pack: B_Messenger_Black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=8;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Unarmed_pack: B_Messenger_Black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Group_Leader_pack: B_Messenger_Coyote_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=4;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
     class _xx_30Rnd_9x21_Mag {count=8;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Team_Leader_pack: B_Messenger_Black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=4;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
     class _xx_30Rnd_9x21_Mag {count=8;magazine="30Rnd_9x21_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Competitor_pack: B_LegStrapBag_black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
     class _xx_9Rnd_45ACP_Mag {count=4;magazine="9Rnd_45ACP_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Get_Away_Driver_pack: B_Messenger_Olive_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=8;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Bomb_Maker_pack: B_FieldPack_blk
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
     class _xx_IEDUrbanSmall_Remote_Mag {count=1;magazine="IEDUrbanSmall_Remote_Mag";};
     class _xx_IEDLandSmall_Remote_Mag {count=1;magazine="IEDLandSmall_Remote_Mag";};
     class _xx_IEDUrbanBig_Remote_Mag {count=1;magazine="IEDUrbanBig_Remote_Mag";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Heli_Pilot_pack: B_Messenger_Black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=8;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };


  class St_Crime_Pilot_pack: B_Messenger_Black_F
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_16Rnd_9x21_Mag {count=8;magazine="16Rnd_9x21_Mag";};
     class _xx_Chemlight_blue {count=2;magazine="Chemlight_blue";};
     class _xx_Chemlight_green {count=2;magazine="Chemlight_green";};
     class _xx_Chemlight_red {count=2;magazine="Chemlight_red";};
     class _xx_Chemlight_yellow {count=2;magazine="Chemlight_yellow";};
    };
    class TransportItems
    {
     class _xx_FirstAidKit {count=2;name="FirstAidKit";};
    };
    class TransportWeapons{};
  };

};

//////////////// Paste cfgGroups after this line //////////////// 
