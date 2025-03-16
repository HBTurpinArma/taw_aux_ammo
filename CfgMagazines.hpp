class CfgMagazines {

	///////////////
	//4.6x30 Ammo// 
	///////////////
	//40 Round Mags (Used in MP7/MP7A2)
	class rhsusf_mag_40Rnd_46x30_JHP;
	class TAW_AMMO_40RND_46x30_JHP_MAG: rhsusf_mag_40Rnd_46x30_JHP {
		author = "TAW";
		count = 40;
		displayName = "4.6x30 mm 40Rnd Mag";
		descriptionshort="Caliber: 4.6x30 mm<br />Rounds: 40<br />Used in: MP7A2";
		ammo = "TAW_AMMO_9x19_JHP_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_40RND_46x30_JHP_TRACER_MAG: TAW_AMMO_40RND_46x30_JHP_MAG {
		displayName = "4.6x30 mm 40Rnd Mag (Tracer)";
		descriptionshort="Caliber: 4.6x30 mm<br />Rounds: 40<br />Used in: MP7A2";
		tracersEvery = 1;
		lastRoundsTracer = 40;
	};

	////////////////
	//.45 ACP Ammo// 
	////////////////
	//6 Round Cyclinder (Used in Chiappa Rhino/)
	class 6Rnd_45ACP_Cylinder;
	class TAW_AMMO_6RND_45ACP_CYLINDER: 6Rnd_45ACP_Cylinder {
		author = "TAW";
		count = 30;
		displayName = ".45 ACP 6Rnd Cylinder";
		descriptionshort="Caliber: .45 ACP<br />Rounds: 6<br />Used in: Rhino 60DS";
		ammo = "TAW_AMMO_45ACP_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	//11 Round Mags (Used In FNX-45/M1911/Custom Covert II/)
	class 11Rnd_45ACP_Mag;
	class TAW_AMMO_11RND_45ACP_MAG: 11Rnd_45ACP_Mag {
		author = "TAW";
		count = 30;
		displayName = ".45 ACP 11Rnd Mag";
		descriptionshort="Caliber: .45 ACP<br />Rounds: 11<br />Used in: FNX-45/M1911/Custom Covert II";
		ammo = "TAW_AMMO_45ACP_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	//30 Round Mags (Used in Vector/UMP/Glock/Thompson)
	//class 30Rnd_45ACP_Mag_SMG_01;
	class JCA_25Rnd_45ACP_UMP_Mag;
	class TAW_AMMO_30RND_45ACP_MAG: JCA_25Rnd_45ACP_UMP_Mag {
		author = "TAW";
		count = 30;
		displayName = ".45 ACP 30Rnd Mag";
		descriptionshort="Caliber: .45 ACP<br />Rounds: 30<br />Used in: UMP/Vector";
		ammo = "TAW_AMMO_45ACP_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_30RND_45ACP_TRACER_MAG: TAW_AMMO_30RND_45ACP_MAG {
		displayName = ".45 ACP 30Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};

	/////////////
	//9x19 Ammo//
	/////////////
	//10 Round Mags (Used in Makarov PM)
	//15 Round Mags (Used in P320/P226/MP443/Glock/M9Beretta/CZ99/TYPE94NAMBU/PC9-ZOAF/HK-USP/CZ75/BROWNING)
	class JCA_15Rnd_9x19_P320C_JHP_Mag;
	class TAW_AMMO_15RND_9x19_JHP_MAG: JCA_15Rnd_9x19_P320C_JHP_Mag {
		author = "TAW";
		count = 30;
		displayName = "9x19 mm 15Rnd Mag";
		descriptionshort="Caliber: 9x19 mm<br />Rounds: 15<br />Used in: P226/P320/Glock17/M9/MP443";
		ammo = "TAW_AMMO_9x19_JHP_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_15RND_9x19_JHP_TRACER_MAG: TAW_AMMO_15RND_9x19_JHP_MAG {
		displayName = "9x19 mm 15Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 15;
	};
	//30 Round Mags (Used in MP5)
	class JCA_30Rnd_9x19_MP5_JHP_Mag;
	class TAW_AMMO_30RND_9x19_JHP_MAG: JCA_30Rnd_9x19_MP5_JHP_Mag {
		author = "TAW";
		count = 30;
		displayName = "9x19 mm 30Rnd Mag";
		descriptionshort="Caliber: 9x19 mm<br />Rounds: 30<br />Used in: MP5/Scorpion Evo";
		ammo = "TAW_AMMO_9x19_JHP_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_30RND_9x19_JHP_TRACER_MAG: TAW_AMMO_30RND_9x19_JHP_MAG {
		displayName = "9x19 mm 30Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};


	/////////////
	//9x21 Ammo// //OPFOR?
	/////////////
	//18 Round Mags (Used in P99/6P53/6P9/MP443-Grach)
	class rhs_18rnd_9x21mm_7N28;
	class TAW_AMMO_18RND_9x21_MAG: rhs_18rnd_9x21mm_7N28 {
		author = "TAW";
		count = 18;
		displayName = "9x21 mm 18Rnd Mag";
		descriptionshort="Caliber: 9x21 mm<br />Rounds: 18<br />Used in: P99/6P53/6P9/MP443-Grach";
		ammo = "TAW_AMMO_9x21_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};

	//30 Round Mags (Used in Scorpion)
	class 30Rnd_9x21_Mag;
	class TAW_AMMO_30RND_9x21_MAG: 30Rnd_9x21_Mag {
		author = "TAW";
		count = 30;
		displayName = "9x21 mm 30Rnd Mag";
		descriptionshort="Caliber: 9x21 mm<br />Rounds: 30<br />Used in: Scorpion";
		ammo = "TAW_AMMO_9x21_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_30RND_9x21_TRACER_MAG: TAW_AMMO_30RND_9x21_MAG {
		displayName = "9x21 mm 30Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};


	////////////////
	//5.56x45 Ammo//
	////////////////
	//Standard 30 Rounders
	class ACE_30Rnd_556x45_Stanag_Mk318_mag;
	class TAW_AMMO_30RND_556x45_MAG: ACE_30Rnd_556x45_Stanag_Mk318_mag {
		author = "TAW";
		count = 30;
		displayName = "5.56x45 mm 30Rnd Mag";
		descriptionshort="Caliber: 5.56x45 mm<br />Rounds: 30";
		ammo = "TAW_AMMO_556x45_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_30RND_556x45_TRACER_MAG: TAW_AMMO_30RND_556x45_MAG {
		displayName = "5.56x45 mm 30Rnd Mag (Tracer)";	
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	// class TAW_AMMO_30RND_556x45_AP_MAG: TAW_AMMO_30RND_556x45_MAG {
	// 	displayName = "5.56x45 mm 30Rnd Mag (AP)";
	// 	ammo = "TAW_AMMO_556x45_BALL_AP"
	// };
	//Standard 120 Round c-MAGs Drums
	class 150Rnd_556x45_Drum_Mag_F;
	class TAW_AMMO_120RND_556x45_DRUM: 150Rnd_556x45_Drum_Mag_F {
		author = "TAW";
		count = 120;
		displayName = "5.56x45 mm 120Rnd Drum";
		descriptionshort="Caliber: 5.56x45 mm<br />Rounds: 120";
		ammo = "TAW_AMMO_556x45_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_120RND_556x45_TRACER_DRUM: TAW_AMMO_120RND_556x45_DRUM {
		displayName = "5.56x45 mm 120Rnd Drum (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 120;
	};
	//Standard 200 Round Boxes
	class rhsusf_200rnd_556x45_M855_box;
	class TAW_AMMO_200RND_556x45_BOX: rhsusf_200rnd_556x45_M855_box {
		author = "TAW";
		count = 200;
		displayName = "5.56x45 mm 200Rnd Box";
		descriptionshort="Caliber: 5.56x45 mm<br />Rounds: 200<br />Used in: Minimi/M249";
		ammo = "TAW_AMMO_556x45_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_200RND_556x45_TRACER_BOX: TAW_AMMO_200RND_556x45_BOX {
		displayName = "5.56x45 mm 200Rnd Box (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 200;
	};


	//AK Speciality 5.56x45 Ammo
	//30 Round Mags (Used in AK101)
	class 30Rnd_762x39_AK12_Mag_F;
	class TAW_AMMO_30RND_556x45_AK_MAG: 30Rnd_762x39_AK12_Mag_F {
		author = "TAW";
		count = 30;
		displayName = "5.56x45 mm 30Rnd Mag";
		descriptionshort="Caliber: 5.56x45 mm<br />Rounds: 30<br />Used in: AK-101";
		ammo = "TAW_AMMO_556x45_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_30RND_556x45_AK_TRACER_MAG: TAW_AMMO_30RND_556x45_AK_MAG {
		displayName = "5.56x45 mm 30Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};

	class 75Rnd_762x39_AK12_Mag_F;
	class TAW_AMMO_75RND_556x45_AK_MAG: 75Rnd_762x39_AK12_Mag_F {
		author = "TAW";
		count = 75;
		displayName = "5.56x45 mm 75Rnd AK Mag";
		descriptionshort="Caliber: 5.56x45 mm<br />Rounds: 75<br />Used in: AK-101";
		ammo = "TAW_AMMO_556x45_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class TAW_AMMO_75RND_556x45_AK_TRACER_MAG: TAW_AMMO_75RND_556x45_AK_MAG {
		displayName = "5.56x45 mm 75Rnd AK Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 75;
	};





	///////////////
	//6.5x39 Ammo//
	///////////////
	//Standard 30 Rounders
	class 30Rnd_65x39_caseless_black_mag;
	class TAW_AMMO_30RND_65x39_MAG: 30Rnd_65x39_caseless_black_mag {
		author = "TAW";
		count = 30;
		displayName = "6.5x39 mm 30Rnd Mag";
		descriptionshort="Caliber: 6.5x39 mm<br />Rounds: 30<br />Used in: MX/C/M/SW/3GL";
		ammo = "TAW_AMMO_65x39_CASELESS"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_30RND_65x39_TRACER_MAG: TAW_AMMO_30RND_65x39_MAG {
		displayName = "6.5x39 mm 30Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	//Standard 100 Rounders
	class 100Rnd_65x39_caseless_black_mag;
	class TAW_AMMO_100RND_65x39_MAG: 100Rnd_65x39_caseless_black_mag {
		author = "TAW";
		count = 100;
		displayName = "6.5x39 mm 100Rnd Mag";
		descriptionshort="Caliber: 6.5x39 mm<br />Rounds: 100<br />Used in: MX/C/M/SW/3GL";
		ammo = "TAW_AMMO_65x39_CASELESS"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_100RND_65x39_TRACER_MAG: TAW_AMMO_100RND_65x39_MAG {
		displayName = "6.5x39 mm 100Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};	
	//Standard 200 Round Belts
	class 200Rnd_65x39_cased_box;
	class TAW_AMMO_200RND_65x39_BOX: 200Rnd_65x39_cased_box {
		author = "TAW";
		count = 200;
		displayName = "6.5x39 mm 200Rnd Belt";
		descriptionshort="Caliber: 6.5x39 mm<br />Rounds: 200<br />Used in: Mk200/Stoner99";
		ammo = "TAW_AMMO_65x39_CASELESS"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_200RND_65x39_TRACER_BOX: TAW_AMMO_200RND_65x39_BOX {
		displayName = "6.5x39 mm 200Rnd Belt (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};	
	//MSBS Speciality Rounds
	class 30Rnd_65x39_caseless_msbs_mag;
	class TAW_AMMO_30RND_65x39_MSBS_MAG: 30Rnd_65x39_caseless_msbs_mag {
		author = "TAW";
		count = 30;
		displayName = "6.5x39 mm 30Rnd MSBS Mag";
		descriptionshort="Caliber: 6.5x39 mm<br />Rounds: 30<br />Used in: MSBS";
		ammo = "TAW_AMMO_65x39_CASELESS"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_30RND_65x39_TRACER_MSBS_MAG: TAW_AMMO_30RND_65x39_MSBS_MAG {
		displayName = "6.5x39 mm 30Rnd MSBS Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};	

	////////////////
	//7.62x51 Ammo//
	////////////////
	//5 Round Clip (Used in M24)
	class rhsusf_5Rnd_762x51_m118_special_Mag;
	class TAW_AMMO_5RND_762x51_CLIP: rhsusf_5Rnd_762x51_m118_special_Mag {
		author = "TAW";
		count = 5;
		displayName = "7.62x51 mm 5Rnd Clip";
		descriptionshort="Caliber: 7.62x51 mm<br />Rounds: 5<br />Used in: M24/M40A5";
		ammo = "TAW_AMMO_762x51_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_5RND_762x51_AP_CLIP: TAW_AMMO_5RND_762x51_CLIP {
		displayName = "7.62x51 mm 5Rnd Clip (AP)";
		ammo = "TAW_AMMO_762x51_BALL_AP"
	};
	// Standard 10 Round Mag (There's like 0 benefit to actually having these...)
	class ACE_10Rnd_762x51_M118LR_Mag;
	class TAW_AMMO_10RND_762x51_MAG: ACE_10Rnd_762x51_M118LR_Mag {
		author = "TAW";
		count = 10;
		displayName = "7.62x51 mm 10Rnd Mag";
		descriptionshort="Caliber: 7.62x51 mm<br />Rounds: 10";
		ammo = "TAW_AMMO_762x51_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_10RND_762x51_TRACER_MAG: TAW_AMMO_10RND_762x51_MAG {
		displayName = "7.62x51 mm 10Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 10;
	};
	// class TAW_AMMO_10RND_762x51_AP_MAG: TAW_AMMO_10RND_762x51_MAG {
	// 	displayName = "7.62x51 mm 10Rnd Mag (AP)";
	// 	ammo = "TAW_AMMO_762x51_BALL_AP"
	// };
	//Standard 20 Round Mag
	class ACE_20Rnd_762x51_M118LR_Mag;
	class TAW_AMMO_20RND_762x51_MAG: ACE_20Rnd_762x51_M118LR_Mag {
		author = "TAW";
		count = 20;
		displayName = "7.62x51 mm 20Rnd Mag";
		descriptionshort="Caliber: 7.62x51 mm<br />Rounds: 20";
		ammo = "TAW_AMMO_762x51_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_20RND_762x51_TRACER_MAG: TAW_AMMO_20RND_762x51_MAG {
		displayName = "7.62x51 mm 20Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 20;
	};
	// class TAW_AMMO_20RND_762x51_AP_MAG: TAW_AMMO_20RND_762x51_MAG {
	// 	displayName = "7.62x51 mm 20Rnd Mag (AP)";
	// 	ammo = "TAW_AMMO_762x51_BALL_AP"
	// };
	//Standard 100 Round Box
	class rhsusf_100Rnd_762x51;
	class TAW_AMMO_100RND_762x51_BOX: rhsusf_100Rnd_762x51 {
		author = "TAW";
		count = 100;
		displayName = "7.62x51 mm 100Rnd Box";
		descriptionshort="Caliber: 7.62x51 mm<br />Rounds: 100<br />Used in: M240";
		ammo = "TAW_AMMO_762x51_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_100RND_762x51_TRACER_BOX: TAW_AMMO_100RND_762x51_BOX {
		displayName = "7.62x51 mm 100Rnd Box (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};

	////////////////
	//7.62x54 Ammo//
	////////////////
	//5 Round Clips (Used in Mosin)
	class rhsgref_5Rnd_762x54_m38;
	class TAW_AMMO_5RND_762x54_CLIP: rhsgref_5Rnd_762x54_m38 {
		author = "TAW";
		count = 10;
		displayName = "7.62x54 mm 5Rnd Clip";
		descriptionshort="Caliber: 7.62x54 mm<br />Rounds: 5<br />Used in: Mosin";
		ammo = "TAW_AMMO_762x54_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	//10 Round Mags (Used in SVDS/SVDM)
	class 10Rnd_762x54_Mag;
	class TAW_AMMO_10RND_762x54_MAG: 10Rnd_762x54_Mag {
		author = "TAW";
		count = 10;
		displayName = "7.62x54 mm 10Rnd Mag";
		descriptionshort="Caliber: 7.62x54 mm<br />Rounds: 5<br />Used in: SVDS/SVDM";
		ammo = "TAW_AMMO_762x54_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_10RND_762x54_TRACER_MAG: TAW_AMMO_10RND_762x54_MAG {
		displayName = "7.62x54 mm 10Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 10;
	};
	//150 Round Boxes (Used in PKP/PKM/Negev)
	class 150Rnd_762x54_Box;
	class TAW_AMMO_100RND_762x54_BOX: 150Rnd_762x54_Box {
		author = "TAW";
		count = 100;	
		displayName = "7.62x54 mm 100Rnd Box";
		descriptionshort="Caliber: 7.62x54 mm<br />Rounds: 100<br />Used in: PKP/PKM/Negev";
		ammo = "TAW_AMMO_762x54_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_100RND_762x54_TRACER_BOX: TAW_AMMO_100RND_762x54_BOX {
		displayName = "7.62x54 mm 100Rnd Box (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};


	////////////////
	//7.92x57 Ammo//
	////////////////
	//200 Round Belts (Used in MG42)

	////////////////
	//7.62x63 Ammo//
	////////////////


	///////////////
	//9.3X64 Ammo//
	///////////////
	//10 Round Mags (Used in Cyrus)
	class 10Rnd_93x64_DMR_05_Mag;
	class TAW_AMMO_10RND_93x64_MAG: 10Rnd_93x64_DMR_05_Mag {
		author = "TAW";
		count = 10;	
		displayName = "9.3x64 mm 10Rnd Mag";
		descriptionshort="Caliber: 9.3x64 mm<br />Rounds: 10<br />Used in: Cyrus";
		ammo = "TAW_AMMO_93x64_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	//150 Round Belts (Used in HK121) (SHOULDNT THIS BE 762?)
	class 150Rnd_93x64_Mag;
	class TAW_AMMO_120RND_93x64_BOX: 150Rnd_93x64_Mag {
		author = "TAW";
		count = 120;	
		displayName = "9.3x64 mm 120Rnd Box";
		descriptionshort="Caliber: 9.3x64 mm<br />Rounds: 120<br />Used in: Navid";
		ammo = "TAW_AMMO_93x64_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	

	/////////////
	//.300 Ammo// 
	/////////////
	//5 Round Mags (Used in M2010 ESR)
	class rhsusf_5Rnd_300winmag_xm2010;
	class TAW_AMMO_5RND_300_WM_MAG: rhsusf_5Rnd_300winmag_xm2010 {
		author = "TAW";
		count = 5;
		displayName = ".300 WM 5Rnd Mag";
		descriptionshort="Caliber: .300 WM<br />Rounds: 5<br />Used in: XM2910";
		ammo = "TAW_AMMO_300_WM_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	

	/////////////
	//.338 Ammo// 
	/////////////
	//5 Round Clip (Used in T-5000/M115A3)
	class 10Rnd_338_Mag;
	class TAW_AMMO_5RND_338_LM_CLIP: 10Rnd_338_Mag {	
		author = "TAW";
		count = 5;	
		displayName = ".338 LM 5Rnd Clip";
		descriptionshort="Caliber: .338 LM<br />Rounds: 5<br />Used in: T5000/M115A3";
		ammo = "TAW_AMMO_338_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 5
	};	
	class TAW_AMMO_5RND_338_LM_API_CLIP: TAW_AMMO_5RND_338_LM_CLIP {	
		displayName = ".338 LM 5Rnd Clip (API)";
		ammo = "TAW_AMMO_338_API_BALL"
	};		
	//10 Round Mag (Used in Noreen)
	class TAW_AMMO_10RND_338_LM_MAG: 10Rnd_338_Mag {	
		author = "TAW";
		count = 10;	
		displayName = ".338 LM 10Rnd Mag";
		descriptionshort="Caliber: .338 LM<br />Rounds: 10<br />Used in: MAR10/Noreen";
		ammo = "TAW_AMMO_338_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_10RND_338_LM_API_MAG: TAW_AMMO_10RND_338_LM_MAG {	
		displayName = ".338 LM 10Rnd Mag (API)";
		ammo = "TAW_AMMO_338_API_BALL"
	};	
	//20 Round Mag (Used in GX-AMR Mk1 Sabretooth)
	class GX_AMR_MK2_338_25Rnd_Mag;
	class TAW_AMMO_20RND_338_LM_MAG: GX_AMR_MK2_338_25Rnd_Mag {	
		author = "TAW";
		count = 20;	
		displayName = ".338 LM 20Rnd Mag";
		descriptionshort="Caliber: .338 LM<br />Rounds: 20<br />Used in: Scarab";
		ammo = "TAW_AMMO_338_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 18;
	};	
	class TAW_AMMO_20RND_338_LM_API_MAG: TAW_AMMO_20RND_338_LM_MAG {	
		displayName = ".338 LM 20Rnd Mag (API)";
		ammo = "TAW_AMMO_338_API_BALL"
	};	
	//130 Round Belts (Used in LWMMG)
	class 130Rnd_338_Mag;
	class TAW_AMMO_120RND_338_BOX: 130Rnd_338_Mag {
		author = "TAW";
		count = 120;	
		displayName = ".338 120Rnd Box";
		descriptionshort="Caliber: .338<br />Rounds: 120<br />Used in: SPMG";
		ammo = "TAW_AMMO_338_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_120RND_338_TRACER_BOX: TAW_AMMO_120RND_338_BOX {
		displayName = ".338 120Rnd Box (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 120;
	};	

	/////////////
	//.408 Ammo//
	/////////////
	class 7Rnd_408_Mag;
	class TAW_AMMO_7RND_408_MAG: 7Rnd_408_Mag {
		author = "TAW";
		count = 7;	
		displayName = ".408 7Rnd Mag";
		descriptionshort="Caliber: .408<br />Rounds: 7<br />Used in: M320 LRR/Intervention";
		ammo = "TAW_AMMO_408_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	

	////////////////
	//12.7X54 Ammo//
	////////////////
	//10 Round Mags (Used in ASP-1 Kir)


	////////////////
	//12.7X99 Ammo//
	////////////////
	//10 Round Mags (Used in M107, GM6 LYNX, GX-AMR-MK1)
	class ACE_10Rnd_127x99_Mag;
	class TAW_AMMO_10RND_127x99_MAG: ACE_10Rnd_127x99_Mag {
		author = "TAW";
		count = 10;
		displayName = "12.7x99 mm 10Rnd Mag";
		descriptionshort="Caliber: 12.7x99 mm<br />Rounds: 10<br />Used in: M107/GM6 LYNX/Sabretooth";
		ammo = "TAW_AMMO_127x99_BALL"
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};	
	class TAW_AMMO_10RND_127x99_TRACER_MAG: TAW_AMMO_10RND_127x99_MAG {
		displayName = "12.7x99 mm 10Rnd Mag (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 10;
	};
	class TAW_AMMO_10RND_127x99_API_MAG: TAW_AMMO_10RND_127x99_MAG {
		displayName = "12.7x99 mm 10Rnd Mag (API)";
		ammo = "TAW_AMMO_127x99_API_BALL";
	};

};
