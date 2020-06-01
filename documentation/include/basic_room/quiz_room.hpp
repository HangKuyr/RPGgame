#ifndef QUIZ_ROOM_H
#define QUIZ_ROOM_H

#include "basic_room.hpp"

/**
* @brief	 Class for Game Map, Quiz_room.
* @author	 Victor Vieira.
*/

class Quiz_room : public Basic_room {

public:

	/**
	* @brief 		Quiz_room's Constructor.
	* @details	 	Sets the dialogue and which version of the room will be used.
	* @param[in]	p A pointer for this run player, version A short representing the room version.
	*/

	Quiz_room(Player* p,short version);

	/**
	* @brief 		Override of the Basic_room::room_interaction.
	* @details	 	Prints the room's text.
	* @return		void.
	*/	

	void room_interaction() override;

	/**
	* @brief 		Override of the Basic_room::choosing_way.
	* @details	 	Return a value based in player's answer, if player's press the wrong key, it will ask for the answer again.
	* @exception	std::exception Invalid key choice.
	* @return		Player's choice between the possible answers.
	*/

	bool choosing_way() override;
	
};

#endif