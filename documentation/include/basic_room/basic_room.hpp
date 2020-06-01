#ifndef BASIC_ROOM_H
#define BASIC_ROOM_H

#include "player.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <utility>
#include <exception>

/**
* @brief	 Class for Game Map and base all the others non-battle rooms, Basic_room.
* @author	 Victor Vieira.
*/

class Basic_room {

protected:

	/*
	* @var 		Basic_room::end_game.
	* @brief	Bool that inform if the game must be ended or not.
	*/

	bool end_game;

	/*
	* @var 		Basic_room::id.
	* @brief	A number used to identify the specific room object.
	*/

	short id;

	/*
	* @var 		Basic_room::attribute.
	* @brief	A number that its use varies in the derivative class depending the needing.
	*/

	short attribute;

	/*
	* @var 		Basic_room::room_version.
	* @brief	A number used to specify, in derivative class, the room's version. 
	*/

	short room_version;

	/*
	* @var 		Basic_room::texts.
	* @brief	A vector that stores all initial texts.
	*/

	std::vector<std::string> texts;

	/*
	* @var 		Basic_room::next_turn.
	* @brief	A pair that stores the id of the next two possible room's (left one and the right one).
	*/

	std::pair<short, short>next_turn;

	/*
	* @var 		Basic_room::end_game.
	* @brief	A Player object, used to call Player's methods.
	*/

	Player* player;

	/*
	* @var 		Basic_room::end_game.
	* @brief	A static number used to specify History_room variants.
	*/

	static short history_version;

	/**
	* @brief 	Prints all the strings in the text vector. 
	* @details	Does a looping that print each string per loop.
	* @return 	void.
	*/

	void print_texts();

	/**
	* @brief	Signals the end of the game.
	* @return 	void.
	*/

	void finish_game();

public:

	/**
	* @brief 		Basic_room's Constructor.
	* @details	 	Sets some important variables.
	* @param[in]	p A pointer for this run player.
	*/

	Basic_room(Player* p);

	/**
	* @brief	Basic_room's Destructor.	
	*/

	virtual ~Basic_room();

	/**
	* @brief	Gets the player pointer.
	* @return 	Return player's pointer. 
	*/
	
	Player* get_player();

	/**
	* @brief	Gets a pair that says what are the next rooms.
	* @return 	Return the id of the two next room's.
	*/

	std::pair <short, short> get_next_turn();

	/**
	* @brief 	Gets a bool irforming the end of the game.
	* @return 	Return if the game must end or not.
	*/

	bool get_end_game();

	/**
	* @brief	Gets the room id.
	* @return 	Return the room id.
	*/

	short get_id();

	/**
	* @brief	Gets a usefull variable.
	* @return 	Return a usefull variable.
	*/

	short get_attribute();

	/**
	* @brief		Sets Player's pointer.				
	* @param[in]	p A Player pointer.
	* @details		This number use depend on the derived class.
	* @return 		void.
	*/
	
	void set_player(Player *p);

	/**
	* @brief		Sets the id of the next two room's.		
	* @param[in]	left and right The ids of the next two room's.
	* @return 		void.	
	*/

	void set_next_turn(short left, short right);

	/**
	* @brief		Sets the room id.			
	* @param[in]	x The room's id.
	* @return 		void.
	*/

	void set_id(short x);

	/**
	* @brief		Sets a usefull number.		
	* @param[in]	x A usefull number.
	* @details		This number use depend on the derived class.
	* @return 		void.
	*/

	void set_attribute(short x);

	/**
	* @brief		Be overridden by the derived classes.		
	* @return 		void.
	*/

	virtual void room_interaction(){};

	/**
	* @brief		Ask player to where he/she want to go.
	* @details		It ask for a command, depending on this command the character route change.	
	* @exception	std::exception Invalid key choice.
	* @return 		Return player's choice of way.
	*/

	virtual bool choosing_way();
};

#endif
