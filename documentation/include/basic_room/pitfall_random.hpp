#ifndef PITFALL_RANDOM_H
#define PITFALL_RANDOM_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Pitfall_random.
* @author	 Victor Vieira.
*/

class Pitfall_random : public Basic_room {

public:

	/**
	* @brief 		Pitfall_random's Constructor.
	* @param[in]	p A pointer for this run player.
	*/

	Pitfall_random(Player* p);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Raffle a Player's class and based on this decide player's way.
	* @return		void.
	*/	

	void room_interaction() override;

	/**
	* @brief 		Override of the Basic_room::choosing_way.
	* @details	 	Return a value based in room_interaction decision.
	* @return		The direction the player ended up going.
	*/

	bool choosing_way() override;

};

#endif