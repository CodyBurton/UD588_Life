/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 10, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 15, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 13, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 16, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 11, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 12, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 7, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 25, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 35, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 60, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 75, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 100, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 210, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 1000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 2, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 6, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 7, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 3, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 5, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 2, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 4, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 25, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 30, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 50, { "", "", -1 } },
			{ "H_Hat_blue", "", 32, { "", "", -1 } },
			{ "H_Hat_brown", "", 35, { "", "", -1 } },
			{ "H_Hat_checker", "", 43, { "", "", -1 } },
			{ "H_Hat_grey", "", 21, { "", "", -1 } },
			{ "H_Hat_tan", "", 28, { "", "", -1 } },
			{ "H_Cap_blu", "", 35, { "", "", -1 } },
			{ "H_Cap_grn", "", 54, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 2500, { "", "", -1 } },
			{ "H_Cap_oli", "", 30, { "", "", -1 } },
			{ "H_Cap_red", "", 25, { "", "", -1 } },
			{ "H_Cap_tan", "", 60, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 2, { "", "", -1 } },
			{ "G_Shades_Blue", "", 1, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 3, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 5, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 5, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 4, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 250, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 10, { "", "", -1 } },
			{ "G_Lady_Dark", "", 10, { "", "", -1 } },
			{ "G_Lady_Blue", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 35, { "", "", -1 } },
			{ "G_Combat", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 250, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 450, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 350, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 400, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 450, { "", "", -1 } },
			{ "B_Carryall_oli", "", 500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 500, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam", "Police Uniform", 350, { "life_coplevel", "SCALAR", 1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_BandollierB_blk", "Bandoillier", 400, { "life_coplevel", "SCALAR", 2 } },
			{ "V_TacVest_blk_POLICE", "Bulletproof Vest", 1250, { "life_coplevel", "SCALAR", 5 } },
			{ "V_PlateCarrier1_blk", "Assault Rig", 3500, { "life_coplevel", "SCALAR", 8 } },
			{ "V_PlateCarrierSpec_blk", "High-Protection Armour", 8500, { "life_coplevel", "SCALAR", 10 } },
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_FieldPack_cbr", "Backpack", 650, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 2500, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 3000, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 10000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 12500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 25000, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 32000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 3200, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 1200, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 2100, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 250, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 450, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 300, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 300, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 400, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 450, { "", "", -1 } },
			{ "B_Carryall_oli", "", 500, { "", "", -1 } },
			{ "B_Carryall_khk", "", 500, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 350, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 340, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 550, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 225, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 350, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 460, { "", "", -1 } },
			{ "U_C_Driver_2", "", 700, { "", "", -1 } },
			{ "U_C_Driver_1", "", 670, { "", "", -1 } },
			{ "U_C_Driver_3", "", 800, { "", "", -1 } },
			{ "U_C_Driver_4", "", 880, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 500, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 500, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 500, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 500, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 500, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 500, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 750, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 750, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 750, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 750, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};