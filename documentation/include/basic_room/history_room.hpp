#ifndef HISTORY_ROOM_H
#define HISTORY_ROOM_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, History_room.
* @author	 Victor Vieira.
*/

class History_room : public Basic_room {

public:

	/**
	* @brief 		History_room's Constructor.
	* @details	 	Sets the dialogue and adds in a counter that says the version of the room will be used.
	* @param[in]	p A pointer for this run player.
	*/

	History_room(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text.
	* @return		void.
	*/	
	
	void room_interaction() override;
	
};

#endif