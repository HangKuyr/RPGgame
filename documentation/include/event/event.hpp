#ifndef EVENT_H
#define EVENT_H

#include "player.hpp"
#include "enemy.hpp"
#include "enum_type.hpp"
#include "room.hpp"
#include <vector>
#include <string>
#include <utility>
#include <cstdlib>
#include <cassert>
#include <exception>

/**
 * @brief   Class represents a generic event 
 * @author Lais Lima
 * @class  Event
 */
class Event{
	private:
		/**
		 * @var Event::_game_on
		 * @brief Value represents if the game is still on.
		 */
		bool _game_on;
		/**
		 * @var Event::_won
		 * @brief Value represents if the player has won the game.
		 */
		bool _won;
		/**
		 * @var Event::_current_room
		 * @brief Identification of the room the player is in this moment.
		 */
		std::pair<short, Type> _current_room;
		/**
		 * @var Event::_next_room
		 * @brief Identification of the room the player will enter next.
		 */
		std::pair<short, Type> _next_room;
		/**
		 * @var Event::_next_class
		 * @brief Identification of the object of the next room the player will enter next.
		 */
		std::pair<Room*, Room*> _next_class;
		/**
		 * @var Event::_messages
		 * @brief Contain the texts to be shown by the end of the game.
		 */
		std::vector<std::string> _messages;
		/**
		 * @brief      Checks if the name has any characters that aren't allowed.
		 * 
		 * @param[in]  s     Represents the name the user has chosen.
		 *
		 * @return     Number represents the type of error that the user has commited.
		 */
		short valid_name(std::string s);
		
	protected:
		/**
		 * @var Event::_selected_player
		 * @brief Object that represents the player.
		 */
		Player *selected_player;
		/**
		 * @var Event::_room
		 * @brief Object that represents the room this event constains.
		 */
		Room *room;

	public:
		/**
		 * @brief      Constructs the object.
		 * @detais		Inicialize the messages texts, sets the attributes values to zero and the player to a nullptr.
		 */
		Event();
		/**
		 * @brief      Destroys the object Room.
		 */
		virtual ~Event();
		
		/**
		 * @brief      Sets the player.
		 *
		 * @param      play  Pointer to object that represents the player.
		 * 
		 * @return void
		 */
		void set_player(Player* play);
		/**
		 * @brief      Gets the current player.
		 *
		 * @return     Pointer to object that represents the player.
		 */
		Player* get_player();
		/**
		 * @brief      Sets the if the game is on.
		 *
		 * @param[in]  value_game  Value represents if the game is on.
		 * 
		 * @return void
		 */
		void set_game_on(bool value_game);
		/**
		 * @brief      Gets if the game is still running.
		 *
		 * @return     True if the game is still running, False otherwise.
		 */
		bool get_game_on();
		/**
		 * @brief      Sets if the player has won the game.
		 *
		 * @param[in]  value_won  Value represents if te player has won. 
		 * 
		 * @return void
		 */
		void set_won(bool value_won);
		/**
		 * @brief      Gets if the player has won the game.
		 *
		 * @return     True if the player has won, False otherwise.
		 */
		bool get_won();
		
		/**
		 * @brief      Returns the room stored.
		 *
		 * @return     Object Room stored in the class. 
		 */
		Room* return_room();
		/**
		 * @brief      Sets the next class the player will enter.
		 *
		 * @param      left   The left class in the game map.
		 * @param      right  The right class in the game map.
		 * 
		 * @return void
		 */
		void set_next_class(Room *left,Room *right);
		/**
		 * @brief      Gets the next class the player will enter.
		 *
		 * @return     The next class in the game map.
		 */
		std::pair<Room*, Room*> get_next_class();

		/**
		 * @brief      Sets the room the player is now.
		 *
		 * @param[in]  a     Represents the identification and the type of the current room.
		 * 
		 * @return void
		 */
		void set_current_room(std::pair<short, Type> a);
		/**
		 * @brief      Gets the room the player is now.
		 *
		 * @return     Represents the identification and the type the player is now.
		 */
		std::pair <short, Type> get_current_room();
		/**
		 * @brief      Sets the next room the player will enter.
		 *
		 * @param[in]  a     Represents the identification and the type of the next room.
		 * 
		 * @return void
		 */
		void set_next_room(std::pair<short, Type> a);
		/**
		 * @brief      Gets the next will the player will enter.
		 *
		 * @return     Represents the next room the player will enter.
		 */
		std::pair <short, Type> get_next_room();

		/**
		 * @brief      Insert a message in the messages vector.
		 *
		 * @param[in]  text  The text to be inserted in the vector.
		 * 
		 * @return void
		 */
		void insert_message(std::string text);
		/**
		 * @brief      Prints the respective message stored in the vector of texts.
		 *
		 * @param[in]  i     Identifier of the message in the vector of messages.
		 * 
		 * @return  void
		 */
		void get_messages(short i);

		/**
		 * @brief      Run the beggining of the game.
		 * @detais     Print the tutorial of the game.
		 * 
		 * @return void
		 */
		void game_start();
		/**
		 * @brief      Gives the user the options to choose his class
		 * @exception std::invalid_argument Invalid name!You wrote a number!
		 * @exception std::invalid_argument Invalid name!You wrote a non-alphanumeric character!
		 * @exception std::invalid_argument Invalid name!Your name can't contain blank spaces!
		 * @exception std::runtime_error Pointer is null
		 * 
		 * @return void
		 */
		void pick_player();

};

#endif
