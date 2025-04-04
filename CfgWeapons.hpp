
class rhs_western_rifle_underbarrel_slot;
class CfgWeapons {
	// class GM6_base_F;
	// class GX_AMR_MK1_Weapon: GM6_base_F {
	// 	magazines[] = {"TAW_AMMO_10RND_127x99_MAG","TAW_AMMO_10RND_127x99_TRACER_MAG","TAW_AMMO_10RND_127x99_API_MAG"};
	// 	//magazineWell[] = {"CBA_50BMG_M107"};
	// };
	// class GX_AMR_MK2_Weapon: GX_AMR_MK1_Weapon {
	// 	magazines[] = {"TAW_AMMO_20RND_338_LM_MAG","TAW_AMMO_20RND_338_LM_API_MAG"};
	// 	// magazineWell[] = {"MAR10_338"};
	// };

	// class pdw2000_base_F;
	// class hgun_PDW2000_F: pdw2000_base_F {
	// 	magazines[] += {"TAW_AMMO_18RND_9x21_MAG","TAW_AMMO_30RND_9x21_MAG","TAW_AMMO_30RND_9x21_TRACER_MAG"};
	// 	magazineWell[] += {"Pistol_9x21"};
	// };


	// AK101/2, rechambered AK-103 to 5.56x45mm
	class rhs_weap_ak74m;
	class rhs_weap_ak74m_zenitco01: rhs_weap_ak74m {class WeaponSlotsInfo;};
	class rhs_weap_ak74m_zenitco01_b33 : rhs_weap_ak74m_zenitco01 {class WeaponSlotsInfo;};
	
	class rhs_weap_ak105;
	class rhs_weap_ak105_zenitco01: rhs_weap_ak105 {class WeaponSlotsInfo;};
	class rhs_weap_ak105_zenitco01_b33 : rhs_weap_ak105_zenitco01 {class WeaponSlotsInfo;};

	class arifle_AK101_F: rhs_weap_ak74m_zenitco01 {
		_generalMacro = "arifle_AK101_F";
		baseWeapon = "arifle_AK101_F";
		scope = 2;
		displayName = "AK-101";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class BipodSlot: rhs_western_rifle_underbarrel_slot {
				linkProxy = "rhsafrf\addons\rhs_weapons\rhs_grip_proxy";
			};
		};

		recoil = "recoil_ak12";

		rhs_fold="";
    	rhs_npz="";
    	rhs_grip1_change = "";
		rhs_grip2_change = "";
		rhs_grip3_change = "";

		class XtdGearInfo {
			model = "arifle_ak101";
			rail = "side";
		};
	};
	class arifle_AK101_B33_F: rhs_weap_ak74m_zenitco01_b33 {
		_generalMacro = "arifle_AK101_B33_F";
		baseWeapon = "arifle_AK101_B33_F";
		scope = 2;
		displayName = "AK-101 (B33 Top Rail)";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class BipodSlot: rhs_western_rifle_underbarrel_slot {
				linkProxy = "rhsafrf\addons\rhs_weapons\rhs_grip_proxy";
			};
		};

		recoil = "recoil_ak12";

		rhs_fold="";
    	rhs_npz="";
    	rhs_grip1_change = "";
		rhs_grip2_change = "";
		rhs_grip3_change = "";

		class XtdGearInfo {
			model = "arifle_ak101";
			rail = "top";
		};
	};

	class arifle_AK102_F: rhs_weap_ak105_zenitco01 {
		_generalMacro = "arifle_AK102_F";
		baseWeapon = "arifle_AK102_F";
		scope = 2;
		displayName = "AK-102";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class BipodSlot: rhs_western_rifle_underbarrel_slot {
				linkProxy = "rhsafrf\addons\rhs_weapons\rhs_grip_proxy";
			};
		};

		recoil = "recoil_ak12";

		rhs_fold="";
    	rhs_npz="";
    	rhs_grip1_change = "";
		rhs_grip2_change = "";
		rhs_grip3_change = "";

		class XtdGearInfo {
			model = "arifle_ak102";
			rail = "side";
		};
	};
	class arifle_AK102_B33_F: rhs_weap_ak105_zenitco01_b33 {
		_generalMacro = "arifle_AK102_B33_F";
		baseWeapon = "arifle_AK102_B33_F";
		scope = 2;
		displayName = "AK-102 (B33 Top Rail)";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};

		class WeaponSlotsInfo: WeaponSlotsInfo {
			class BipodSlot: rhs_western_rifle_underbarrel_slot {
				linkProxy = "rhsafrf\addons\rhs_weapons\rhs_grip_proxy";
			};
		};

		recoil = "recoil_ak12";

		rhs_fold="";
    	rhs_npz="";
    	rhs_grip1_change = "";
		rhs_grip2_change = "";
		rhs_grip3_change = "";

		class XtdGearInfo {
			model = "arifle_ak102";
			rail = "top";
		};
	};

	// AK201/2, rechambered AK-12/15 to 5.56x45mm
	class Rifle_Base_F;
	class arifle_AK12_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};
	class arifle_AK12_F: arifle_AK12_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
	};
	class arifle_AK201_F: arifle_AK12_F {
		_generalMacro = "arifle_AK201_F";
		baseWeapon = "arifle_AK201_F";
		DLC = ""; //Is this needed? Is it causing me issues?
		scope = 2;
		displayName = "AK-201";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				class compatibleItems {
					ACE_muzzle_mzls_L = 1;
					JCA_muzzle_snds_556_advanced_black = 1;
					JCA_muzzle_snds_556_advanced_olive = 1;
					JCA_muzzle_snds_556_advanced_sand = 1;
					muzzle_snds_M = 1;
					muzzle_snds_m_khk_F = 1;
					muzzle_snds_m_snd_F = 1;
					rhsusf_acc_nt4_black = 1;
					rhsusf_acc_nt4_tan = 1;
					rhsusf_acc_rotex5_grey = 1;
					rhsusf_acc_rotex5_tan = 1;
					rhsusf_acc_SF3P556 = 1;
					rhsusf_acc_SFMB556 = 1;
				};	
			};
		};

		class XtdGearInfo {
			model = "arifle_ak201";
			ugl = "none";
		};
	};

	class arifle_AK12_GL_F: arifle_AK12_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
	};
	class arifle_AK201_GL_F: arifle_AK12_GL_F {
		_generalMacro = "arifle_AK201_GL_F";
		baseWeapon = "arifle_AK201_GL_F";
		scope = 2;
		DLC = ""; //Is this needed? Is it causing me issues?
		displayName = "AK-201 (GL)";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				class compatibleItems {
					ACE_muzzle_mzls_L = 1;
					JCA_muzzle_snds_556_advanced_black = 1;
					JCA_muzzle_snds_556_advanced_olive = 1;
					JCA_muzzle_snds_556_advanced_sand = 1;
					muzzle_snds_M = 1;
					muzzle_snds_m_khk_F = 1;
					muzzle_snds_m_snd_F = 1;
					rhsusf_acc_nt4_black = 1;
					rhsusf_acc_nt4_tan = 1;
					rhsusf_acc_rotex5_grey = 1;
					rhsusf_acc_rotex5_tan = 1;
					rhsusf_acc_SF3P556 = 1;
					rhsusf_acc_SFMB556 = 1;
				};	
			};
		};

		class XtdGearInfo {
			model = "arifle_ak201";
			ugl = "gl";
		};
	};

	class arifle_AK12U_F: arifle_AK12_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
	};
	class arifle_AK202_F: arifle_AK12U_F {
		_generalMacro = "arifle_AK202_GL_F";
		baseWeapon = "arifle_AK202_GL_F";
		scope = 2;
		DLC = ""; //Is this needed? Is it causing me issues?
		displayName = "AK-202";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG", "TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_30RND_556x45_AK_MK262_MAG", "TAW_AMMO_60RND_556x45_AK_MAG", "TAW_AMMO_60RND_556x45_AK_TRACER_MAG", "TAW_AMMO_60RND_556x45_AK_MK262_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MK262_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot: MuzzleSlot {
				class compatibleItems {
					ACE_muzzle_mzls_L = 1;
					JCA_muzzle_snds_556_advanced_black = 1;
					JCA_muzzle_snds_556_advanced_olive = 1;
					JCA_muzzle_snds_556_advanced_sand = 1;
					muzzle_snds_M = 1;
					muzzle_snds_m_khk_F = 1;
					muzzle_snds_m_snd_F = 1;
					rhsusf_acc_nt4_black = 1;
					rhsusf_acc_nt4_tan = 1;
					rhsusf_acc_rotex5_grey = 1;
					rhsusf_acc_rotex5_tan = 1;
					rhsusf_acc_SF3P556 = 1;
					rhsusf_acc_SFMB556 = 1;
				};	
			};
		};
	};

};	