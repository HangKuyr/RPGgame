#ifndef LEFT_RIGHT_H
#define LEFT_RIGHT_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Left_right.
* @author	 Victor Vieira.
*/

class Left_right : public Basic_room {

public:

	/**
	* @brief 		Left_right's Constructor.
	* @details	 	Sets the dialogue.
	* @param[in]	p A pointer for this run player.
	*/

	Left_right(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text.
	* @return		void.
	*/	

	void room_interaction() override;
	
};

#endif