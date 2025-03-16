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
};	