#ifndef ABISM_DEATH_ROOM_H
#define ABISM_DEATH_ROOM_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Abism_death_room.
* @author	 Victor Vieira.
*/

class Abism_death_room : public Basic_room {

public:

	/**
	* @brief 		Abism_death_room's Constructor.
	* @details	 	Sets the dialogue.
	* @param[in]	p A pointer for this run player.
	*/

	Abism_death_room(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text and say's if the game should end.
	* @return		void.
	*/	
	
	void room_interaction() override;
	
};

#endif