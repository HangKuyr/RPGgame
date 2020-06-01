#ifndef LIFE_POTION_H
#define LIFE_POTION_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Life_potion.
* @author	 Victor Vieira.
*/

class Life_potion : public Basic_room {

public:

	/**
	* @brief 		Life_potion's Constructor.
	* @details	 	Sets the dialogue and the HP that can be healed.
	* @param[in]	p A pointer for this run player.
	*/

	Life_potion(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text and let player decide between use the potion(heal HP) or put it on the bag.
	* @exception	std::exception Invalid key choice.	
	* @return		void.
	*/

	void room_interaction() override;

};

#endif