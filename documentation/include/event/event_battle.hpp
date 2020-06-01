#ifndef EVENTBATTLE_H
#define EVENTBATTLE_H

#include "battle_room.hpp"
#include "event.hpp"
#include <utility>

/**
 * @brief  Class represents an specifc event of type battle
 * @author Lais Lima
 * @class   Event_battle
 */
class Event_battle:public Event{
	public:
		/**
		 * @brief      Constructs the object of Room of type battle.
		 * @detais 	   Inicialiazes the enemy and creates a Room that contain a battle agains this enemy.
		 * 
		 * @exception std::runtime_error Pointer is null
		 *
		 * @param[in]  x     Identification of the room stored inside the event in the game map.
		 */
		Event_battle(short x);
		~Event_battle();

};
#endif
