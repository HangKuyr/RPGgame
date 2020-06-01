#ifndef DMG_NPC_H
#define DMG_NPC_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Dmg_npc.
* @author	 Victor Vieira.
*/

class Dmg_npc : public Basic_room {

public:

	/**
	* @brief 		Dmg_npc's Constructor.
	* @details	 	Sets the dialogue, the damage player will recieve and the room version.
	* @param[in]	p A pointer for this run player, version A bool representing the room version.
	*/

	Dmg_npc(Player* p, bool version);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text, do the damage in the player and based on his remaining HP say's if the game should end.
	* @return		void.
	*/	

	void room_interaction() override;
	
};

#endif