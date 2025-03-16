class CfgWeapons {
	class GM6_base_F;
	class GX_AMR_MK1_Weapon: GM6_base_F {
		magazines[] = {"TAW_AMMO_10RND_127x99_MAG","TAW_AMMO_10RND_127x99_TRACER_MAG","TAW_AMMO_10RND_127x99_API_MAG"};
		//magazineWell[] = {"CBA_50BMG_M107"};
	};
	class GX_AMR_MK2_Weapon: GX_AMR_MK1_Weapon {
		magazines[] = {"TAW_AMMO_20RND_338_LM_MAG","TAW_AMMO_20RND_338_LM_API_MAG"};
		// magazineWell[] = {"MAR10_338"};
	};

	class pdw2000_base_F;
	class hgun_PDW2000_F: pdw2000_base_F {
		magazines[] += {"TAW_AMMO_18RND_9x21_MAG","TAW_AMMO_30RND_9x21_MAG","TAW_AMMO_30RND_9x21_TRACER_MAG"};
		magazineWell[] += {"Pistol_9x21"};
	};

	// M32 Sidearm
	class rhs_weap_m32_Base_F;
	class rhs_weap_m32: rhs_weap_m32_Base_F {
		class WeaponSlotsInfo;
	};
	class rhs_weap_m32_sidearm: rhs_weap_m32 {
		class WeaponSlotsInfo: WeaponSlotsInfo {
            allowedSlots[] = {701}; // Slots for sidearms
        };
		type = 2;
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_M32.rtm"};
	};

	// AK101, rechambered AK-12 to 5.56x45mm
	class arifle_AK12_F;
	class arifle_AK101_F: arifle_AK12_F {
		displayName = "AK-101";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG","TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};
	};
	class arifle_AK12_GL_F;
	class arifle_AK101_GL_F: arifle_AK12_GL_F {
		displayName = "AK-101 (GL)";
		magazines[] = {"TAW_AMMO_30RND_556x45_AK_MAG","TAW_AMMO_30RND_556x45_AK_TRACER_MAG", "TAW_AMMO_75RND_556x45_AK_MAG", "TAW_AMMO_75RND_556x45_AK_TRACER_MAG"};
		magazineWell[] = {"CBA_556x45_AK"};
	};




};	