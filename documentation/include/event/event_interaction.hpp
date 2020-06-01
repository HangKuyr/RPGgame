#ifndef EVENTINTERACTION_H
#define EVENTINTERACTION_H

#include "event.hpp"
#include "basic_room.hpp"
#include "pitfall_random.hpp"
#include "abism_death_room.hpp"
#include "dmg_npc.hpp"
#include "mimic_death_room.hpp"
#include "life_elixir.hpp"
#include "life_fairy.hpp"
#include "life_potion.hpp"
#include "history_room.hpp"
#include "left_right.hpp"
#include "quiz_room.hpp"
#include "tip_room.hpp"
#include "xp_room.hpp"

/**
 * @brief  Class represents an specifc event of type interaction
 * @author Lais Lima
 * @class   Event_interaction
 */
class Event_interaction:public Event{
	public:
		/**
		 * @brief      Constructs the object of type interaction.
		 * @detais     Inicialiazes a object of type Basic room and creates a Room that contain the interaction.
		 * 
		 * @exception std::runtime_error Pointer is null
		 *
		 * @param[in]  x     Identification of the room stored inside the event in the game map.
		 */
		Event_interaction(short x);
		~Event_interaction();

};
#endif