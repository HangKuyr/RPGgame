#ifndef XP_ROOM_H
#define XP_ROOM_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Xp_room.
* @author	 Victor Vieira.
*/

class Xp_room : public Basic_room {

public:

	/**
	* @brief 		Xp_room's Constructor.
	* @details	 	Sets the dialogue and how much experience the player will receive.
	* @param[in]	p A pointer for this run player.
	*/

	Xp_room(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text, give player some experience, check if he/she should level up and show the status.
	* @return		void.
	*/	

	void room_interaction() override;

};

#endif