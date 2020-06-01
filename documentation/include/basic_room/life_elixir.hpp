#ifndef LIFE_ELIXIR_H
#define LIFE_ELIXIR_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Life_elixir.
* @author	 Victor Vieira.
*/

class Life_elixir : public Basic_room {

public:

	/**
	* @brief 		Life_elixir's Constructor.
	* @details	 	Sets the dialogue.
	* @param[in]	p A pointer for this run player.
	*/

	Life_elixir(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text and heal player's HP until the max.
	* @return		void.
	*/	

	void room_interaction() override;

};

#endif