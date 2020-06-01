#ifndef ROOM_H
#define ROOM_H

#include "battle_room.hpp"
#include "basic_room.hpp"
#include "enum_type.hpp"
#include <boost/variant.hpp>         

/**
 * @author Lais Lima
 * @brief   Class represents a generic room 
 * @class  Room
 */
class Room{
	private:
		/**
		 * @var Room::_battle
		 * @brief Object represents a battle
		 */
		Battle_room *_battle;
		/**
		 * @var Room::_interaction
		 * @brief Object represents a interaction with object or person
		 */
		Basic_room *_interaction;
		/**
		 * @var Room::_type
		 * @brief Object of enumeration that indicates the rooms's type
		 */
		Type _type;
	public:
		/**
		 * @brief      Constructs the object.
		 * @detais     Inicializes a battle type room. 
		 * @see        Battle_room
		 *
		 * @param      player  The player
		 * @param      enemy   The enemy
		 * @param[in]  id      The identifier
		 */
		Room(Player *player, Enemy *enemy, short id);
		/**
		 * @brief      Constructs the object.
		 * @detais     Inicializes an interaction type room.
		 * @see        Basic_room
		 *
		 * @param      basic  The basic
		 */
		Room(Basic_room *basic);
		/**
		 * @brief      Destroys the object of the type of room stored inside.
		 */
		~Room();
		/**
		 * @brief      Gets the room stored in the class.
		 *
		 * @return     The room inside a boost::variant variable.
		 */
		boost::variant< Battle_room*, Basic_room*> get_room();
		/**
		 * @brief      Gets the type of room stored.
		 *
		 * @return     The specif type of the room.
		 */
		Type get_type();
};

#endif

