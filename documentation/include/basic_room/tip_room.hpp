#ifndef TIP_ROOM_H
#define TIP_ROOM_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Tip_room.
* @author	 Victor Vieira.
*/

class Tip_room : public Basic_room {

public:

	/**
	* @brief 		Tip_room's Constructor.
	* @details	 	Sets the dialogue.
	* @param[in]	p A pointer for this run player, version A short representing the room version.
	*/

	Tip_room(Player* p, short version);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text.
	* @return		void.
	*/	

	void room_interaction() override;

};

#endif