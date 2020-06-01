#ifndef INICIALIZER_H
#define INICIALIZER_H

#include <vector>
#include "event_battle.hpp"
#include "event_interaction.hpp"
#include <boost/variant.hpp>

/**
 * @brief      Class for inicializer of rooms of the game.
 * @detais     Contain the methods to run the rooms in a sequence.
 * @author 	   Lais Lima
 * @class      Inicializer
 */  
class Inicializer{
	private:
		/**
		 * @var Inicializer::_main_event
		 * @brief Object of event that control the main features of the game.
		 * @detais Object that will inicialize the tutorial and the player pointer and contain the value if the game is still on.
		 */
		Event* _main_event;
		/**
		 * @var Inicializer::_choices
		 * @brief vector contain all the rooms of the game map.
		 */
		std::vector<Event*> _choices;
		/**
		 * @brief      Run the methods from Battle_room class.
		 * @detais     Setup the next room in case the player runs or end the game if he dies.
		 * 
		 * @return void
		 */
		void running_battle();
		/**
		 * @brief      Run the methods from Basic_room class.
		 * @detais     Setup end game if the player dies.
		 * 
		 * @return void
		 */
		void running_interaction();
		/**
		 * @brief      Checks if there-s any of the conditions necessary for the game to end.
		 * @detais     Print messages on the screen in case the game ends.
		 * 
		 * @return void
		 */
		void game_end();
		/**
		 * @brief      Validate the number received for id_room.
		 * @detais     Checks id the number is in the range accepted for the identifiers.
		 *
		 * @param[in]  id_room  The identifier of room being used.
		 * 
		 * @return void
		 */
		void valid_number(int id_room);
	public:	
		/**
		 * @brief      Constructs the object.
		 *
		 * @param      e     Pointer to object refering to the main event.
		 */
		Inicializer(Event *e);
		/**
		 * @brief      Destroys the objects of events stored in the vector choices.
		 */
		~Inicializer();
		/**
		 * @brief      Inicialize all the events containing the 38 rooms of the game.
		 * @detais     The events are stored in the vector choices
		 */
		void inicialize_objects();
		/**
		 * @brief      Configure the next room in each object of the vector choices
		 * 
		 * @return void
		 */
		void inicialize_next_turn();  	

		/**
		 * @brief     Configure the indetifier of the next room the player will enter.
		 * @detais    If there's a crossroad the player will be able to choose where to go.
		 *
		 * @param[in]  id_room  The identifier of the current room.
		 * 
		 * @return void
		 */
		void configure_next(int id_room);
		/**
		 * @brief      Configure the identifier of the room the player is now,
		 *
		 * @param[in]  id_room  The identifier of the room the player is now
		 */
		void configure_current(int id_room);
		/**
		 * @brief      According to the room the player is now calls the method corresponding to it's type
		 */
		void run_room();
		/**
		 * @brief      Gets the vector choices.
		 * @detais     Vector contain all events that store the 38 rooms of the game. 
		 *
		 * @return     The vector choices.
		 */
		std::vector<Event*>*get_choices();
};

#endif