#ifndef LIFE_FAIRY_H
#define LIFE_FAIRY_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Life_fairy.
* @author	 Victor Vieira.
*/

class Life_fairy : public Basic_room {

public:

	/**
	* @brief 		Life_fairy's Constructor.
	* @details	 	Sets the dialogue and the HP that will be healed.
	* @param[in]	p A pointer for this run player.
	*/
	
	Life_fairy(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text and heal player's HP.
	* @return		void.
	*/

	void room_interaction() override;

};

#endif