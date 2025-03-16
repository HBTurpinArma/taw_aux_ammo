class CfgAmmo {

	////////////////
	//5.56x45 Ammo//
	////////////////
	class ACE_556x45_Ball_Mk318;
	class TAW_AMMO_556x45_BALL: ACE_556x45_Ball_Mk318 {
		ACE_caliber=5.6999998;
		ACE_bulletLength=23.01;
		ACE_bulletMass=4.0180001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.303};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={742,812,862,904,921,944,958};
		ACE_barrelLengths[]={203.2,254,304.79999,368.29999,406.39999,457.20001,508};
		airLock=1;
		hit=9;
		indirectHit=0;
		indirectHitRange=0;
		cost=1;
		typicalSpeed=950;
		airFriction=-0.00130202;
		waterFriction=-0.30000001;
		caliber=0.86956501;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerScale=1;
		tracerStartTime=0.17;
		tracerEndTime=1.62;
		audibleFire=35;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		aiAmmoUsageFlags=64;
		class CamShakeExplode
		{
			power=2.2360699;
			duration=0.40000001;
			frequency=20;
			distance=6.7082;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	class ACE_556x45_Ball_M995_AP;
	class TAW_AMMO_556x45_BALL_AP: ACE_556x45_Ball_M995_AP {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	///////////////
	//6.5x39 Ammo//
	///////////////
	class B_65x39_Caseless;
	class TAW_AMMO_65x39_CASELESS: B_65x39_Caseless {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	////////////////
	//7.65x17 Ammo//
	////////////////


	////////////////
	//7.62x51 Ammo//
	////////////////
	class ACE_762x51_Ball_Mk316_Mod_0;
	class TAW_AMMO_762x51_BALL: ACE_762x51_Ball_Mk316_Mod_0 {
		ACE_caliber=7.8499999;
		ACE_bulletLength=31.5;
		ACE_bulletMass=11.34;
		ACE_muzzleVelocityVariationSD=0.30000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-5.3099999,-5.0939999,-4.5700002,-4.0240002,-3.3959999,-2.5599999,-1.528,-0.30599999,1.192,3.0339999,5.2379999};
		ACE_ballisticCoefficients[]={0.48899999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={757,767,777,792,807,812};
		ACE_barrelLengths[]={254,330.20001,406.39999,508,609.59998,660.40002};
		hit=16;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=3;
		audibleFire=45;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=790;
		caliber=1.8;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		tracerScale=1.2;
		tracerStartTime=0.19;
		tracerEndTime=1.72;
		airFriction=-0.00084907003;
		class CamShakeExplode
		{
			power=2.8284299;
			duration=0.60000002;
			frequency=20;
			distance=8.48528;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
	// class ACE_762x51_Ball_M993_AP;
	class TAW_AMMO_762x51_BALL_AP: TAW_AMMO_762x51_BALL {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		ACE_caliber=7.8499999;
		ACE_bulletLength=31.5;
		ACE_bulletMass=8.2299995;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.359};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={897,909,920,938,958,962};
		ACE_barrelLengths[]={254,330.20001,406.39999,508,609.59998,660.40002};
		hit=12;
		typicalSpeed=930;
		caliber=2.2;
		airFriction=-0.0011050201;
	};

	////////////////
	//7.62x54 Ammo//
	////////////////
	class B_762x54_Tracer_Green;
	class TAW_AMMO_762x54_BALL: B_762x54_Tracer_Green {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	////////////////
	//7.92x57 Ammo//
	////////////////

	///////////////
	//9.3X64 Ammo//
	///////////////
	class B_93x64_Ball;
	class TAW_AMMO_93x64_BALL: B_93x64_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	////////////////
	//12.7X54 Ammo//
	////////////////

	////////////////
	//12.7X99 Ammo//
	////////////////
	class ACE_127x99_Ball_AMAX;
	class TAW_AMMO_127x99_BALL: ACE_127x99_Ball_AMAX {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	class ACE_127x99_API;
	class TAW_AMMO_127x99_API_BALL: ACE_127x99_API {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	////////////////
	//.45 ACP Ammo// 
	////////////////
	class B_45ACP_Ball;
	class TAW_AMMO_45ACP_BALL: B_45ACP_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	///////////////
	//4.6x30 Ammo// 
	///////////////
	class rhs_ammo_46x30_JHP;
	class TAW_AMMO_46x30_JHP_BALL: rhs_ammo_46x30_JHP {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	/////////////
	//9x18 Ammo// //Simplification to just 9x21 instead of 9x18
	/////////////
	// class rhs_B_9x18_57N181S;
	// class TAW_AMMO_9x18_JHP_BALL: rhs_B_9x17_57N181S {
	// 	model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	// 	nvgOnly = 0;
	// }; 

	/////////////
	//9x19 Ammo//
	/////////////
	class JCA_B_9x19_Ball_MP5_JHP;
	class TAW_AMMO_9x19_JHP_BALL: JCA_B_9x19_Ball_MP5_JHP {
		ACE_caliber=9.0299997;
		ACE_bulletLength=14.859;
		ACE_bulletMass=9.5249996;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.176};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={301};
		ACE_barrelLengths[]={99};
		hit=6.9000001;
		typicalSpeed=360;
		airFriction=-0.00115136;
		caliber=0.72000003;
		visibleFire=1;
		audibleFire=20;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_9mm";
		cost=100;
		deflecting=25;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
		airLock=1;
		tracerScale=0.5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
	}; 

	/////////////
	//9x21 Ammo//
	/////////////
	class B_9x21_Ball;
	class TAW_AMMO_9x21_BALL: B_9x21_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	}; 

	/////////////
	//.300 Ammo// 
	/////////////
	class rhsusf_B_300winmag;
	class TAW_AMMO_300_WM_BALL: rhsusf_B_300winmag {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

	/////////////
	//.338 Ammo// 
	/////////////
	class ACE_338_Ball;
	class TAW_AMMO_338_BALL: ACE_338_Ball {
		ACE_caliber=8.6099997;
		ACE_bulletLength=39.400002;
		ACE_bulletMass=16.200001;
		ACE_muzzleVelocityVariationSD=0.30000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-5.3099999,-5.0939999,-4.5700002,-4.0240002,-3.3959999,-2.5599999,-1.528,-0.30599999,1.192,3.0339999,5.2379999};
		ACE_ballisticCoefficients[]={0.648};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={908};
		ACE_barrelLengths[]={685.79999};
		hit=20;
		caliber=0.44299999;
		typicalSpeed=906;
		tracerScale=1.2;
		tracerStartTime=0.23;
		tracerEndTime=2.75;
		airFriction=-0.00061662;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};
	// class ACE_338_Ball_API526;
	class TAW_AMMO_338_API_BALL: TAW_AMMO_338_BALL {
		ACE_caliber=8.6099997;
		ACE_bulletLength=39;
		ACE_bulletMass=16.4;
		ACE_muzzleVelocityVariationSD=0.30000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-5.3099999,-5.0939999,-4.5700002,-4.0240002,-3.3959999,-2.5599999,-1.528,-0.30599999,1.192,3.0339999,5.2379999};
		ACE_ballisticCoefficients[]={0.55400002};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={898};
		ACE_barrelLengths[]={685.79999};
		ace_vehicle_damage_incendiary=1;
		caliber=1.0700001;
		hit=24;
		indirectHit=4;
		indirectHitRange=0.1;
		typicalSpeed=896;
		airFriction=-0.00072329998;
		CraterEffects="ExploAmmoCrater";
		class HitEffects
		{
			hitMetal="ImpactMetalSabotSmall";
			hitMetalPlate="ImpactMetalSabotSmall";
			hitBuilding="ImpactConcreteSabotSmall";
			hitConcrete="ImpactConcreteSabotSmall";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundRed="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitHay="ImpactHay";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitMan="ImpactEffectsBlood";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
			default_mat="ImpactEffectsGroundSabot";
		};
	};

	/////////////
	//.408 Ammo// 
	/////////////
	class B_408_Ball;
	class TAW_AMMO_408_BALL: B_408_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly = 0;
	};

};	