#include <macro.h>
/*
	COP UNIFORM SCRIPT
	Edited: by maximum for better handling of actual uniforms
	Created for www.altisliferpg.com
*/
//#define FETCH_CONST(var) (call var)
//sleep 0.1;
/*
if(side player == independent) then {
	if ((uniform player) == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\medic\medic_uniform.paa"];
	};
};
*/
if(side player == WEST) then {
	// PCSO
	if ((uniform player) == "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) == 1) then {
		player setObjectTextureGlobal [0, "textures\apc_uniform_pcso.paa"];
	};
	// JC/PC/SC
	if ((uniform player) == "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) > 1) then {
		player setObjectTextureGlobal [0, "textures\apc_uniform_jcpcsc.paa"];
	};
	// SGT
	if ((uniform player) == "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) > 4) then {
		player setObjectTextureGlobal [0, "textures\apc_uniform_sgt.paa"];
	};
	// INSP
	if ((uniform player) == "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) > 5) then {
		player setObjectTextureGlobal [0, "textures\apc_uniform_insp.paa"];
	};
	// SUPT
	if ((uniform player) == "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) > 7) then {
		player setObjectTextureGlobal [0, "textures\apc_uniform_supt.paa"];
	};
	// COMM
	if ((uniform player) == "U_B_CombatUniform_mcam" && FETCH_CONST(life_coplevel) > 9) then {
		player setObjectTextureGlobal [0, "textures\apc_uniform_comm.paa"];
	};
	// invisible backpack
	if ((backpack player) == "B_FieldPack_cbr" && (FETCH_CONST(life_coplevel) > 0)) then {
		(unitbackpack player) setObjectTextureGlobal [0, ""];
	};
};
/*
if(side player == civilian) then {
	// Prisoner - DO THIS!
	if(side player == civilian && uniform player == "U_B_CombatUniform_mcam") then {
	player setObjectTextureGlobal [0, "textures\civilians\prisoner.paa"];
	};
};
*/