#ifndef BATTLEROOM_H
#define BATTLEROOM_H

#include <string>
#include <vector>
#include <utility>
#include "dice.hpp"
#include "enum_winner.hpp"
#include "lucky.hpp"
#include "mage.hpp"
#include "ranger.hpp"
#include "warrior.hpp"
#include "boss.hpp"
#include "gnome.hpp"
#include "skeleton.hpp"
#include "slime.hpp"
#include "pumpkin.hpp"
#include "wolf.hpp"

/**
 * @brief      Class represents a battle between a player and an enemy
 * @author     Laís Lima
 * @class      Battle_room
 */
class Battle_room{
	private:
		/**
		 * @var Battle_room::_id
		 * @brief Value represents the identifier of the room in the game map.
		 */
		int _id;
		/**
		 * @var Battle_room::_battle_on
		 * @brief Value represents if the battle is still happenning.
		 */
		bool _battle_on;
		/**
		 * @var Battle_room::_battle_run
		 * @brief Value represents if the player has ran from the battle.
		 */
		bool _battle_run;
		/**
		 * @var Battle_room::_dodge
		 * @brief Value represents if the the player has dodged the enemy's attack
		 */
		bool _dodge;
		/**
		 * @var Battle_room::_won_game
		 * @brief Value represents if the the player has won the game.
		 */
		bool _won_game;
		/**
		 * @var Battle_room::_damage
		 * @brief Value represents the damage the player or the enemy has suffered.
		 */
		int _damage;
		/**
		 * @var Battle_room::_current_decision
		 * @brief Value represents the choice the player has made.
		 */	
		int _current_decision;
		/**
		 * @var Battle_room::_dice
		 * @brief Object that represents dice.
		 * @detais The dice can have up to 20 sides.
		 */
		Dice _dice;
		/**
		 * @var Battle_room::_current-player
		 * @brief Object that represents the player.
		 */
		Player *_current_player;
		/**
		 * @var Battle_room::_chosen_enemy
		 * @brief Object that represents enemy linked to this battle.
		 */
		Enemy *_chosen_enemy;
		/**
		 * @var Battle_room::_winner
		 * @brief Object that represents if the winner is the player or the enemy
		 */
		Winner _winner; 
		/**
		 * @var Battle_room::_possible_decisions
		 * @brief Vector that contains the texts corresponding to the options for the player's action.
		 */
		std::vector<std::string> _possible_decisions;
		/**
		 * @var Battle_room::_next_turn
		 * @brief Contain the identifiers of the next turn in the game map.
		 */
		std::pair<short, short> _next_turn;
		/**
		 * @brief      Define the current attack for the player.
		 * @detais     The first refers left and the second refers to right.
		 *
		 * @param[in]  i     number of the attack the player has chosen
		 * @return void
		 */
		void define_attack(short i);
		/**
		 * @brief      Apply damage to the enemy if the player sucesfully attacks.
		 * 
		 * @return void
		 */
		void player_attacking();
		/**
		 * @brief      { function_description }
		 * 
		 * @return void
		 */
		void enemy_attacking();
		/**
		 * @brief      Stops a battle.
		 * @detais     Checks if te enemy or the player died.
		 *
		 * @return     True if battle should end, False otherwise.
		 */
		bool stop_battle();
		/**
		 * @brief      Gets the possible decisions for the player during the battle
		 *
		 * @param      player  The player
		 * @return     void
		 */
		void fill_possible_decisions(Player *player);
	public:
		/**
		 * @brief      Constructs the object.
		 * @detais		Configures the player and the enemy, and sets it's attributes value to 0.
		 *
		 * @param      player  Pointer to object that reprsenets the player.
		 * @param      enemy   pointer to object that represents the enemy.
		 */
		Battle_room(Player *player, Enemy *enemy); 
		/**
		 * @brief      Destroys the object of the enemy.
		 */
		~Battle_room();
		/**
		 * @brief      Sets the current player.
		 *
		 * @param      p     Pointer tobject that represents the player.
		 * 
		 * @return void
		 */
		void set_player(Player *p);
		/**
		 * @brief      Sets the battle on.
		 *
		 * @param[in]  value_battle  The value represents if the battle is on or off.
		 * @return void
		 */
		void set_battle_on(bool value_battle);
		/**
		 * @brief      Determines if battle on.
		 *
		 * @return     True if battle on, False otherwise.
		 */
		bool is_battle_on();
		/**
		 * @brief      Sets the identifier.
		 *
		 * @param[in]  x     Value of the identifier of this room in the game map.
		 * @return void
		 */
		void set_id(int x);
		/**
		 * @brief      Gets the identifier.
		 *
		 * @return     Value identifier of this room in the game map.
		 */
		int get_id();
		/**
		 * @brief      Sets the identifiers of the next turn in the game map.
		 *
		 * @param[in]  left   The left identifier
		 * @param[in]  right  The right identifier
		 * @return     void
		 */
		void set_next_turn(short left, short right);
		/**
		 * @brief      Gets the identifiers of the next turn in the game map.
		 *
		 * @return     Both identifier of the possible next turns.
		 */
		std::pair <short, short> get_next_turn();
		/**
		 * @brief      Implements the battle.
		 * @detais     the player and the enemy take turns trying to attack.
		 * 
		 * @return void
		 */
		void run_battle();
		/**
		 * @brief      Gets if the player has won the game.
		 *
		 * @return     True if player won, False otherwise.
		 */
		bool get_won_game();
		/**
		 * @brief      Gets if the player has ran from the game.
		 *
		 * @return     True if player ran, False otherwise.
		 */
		bool get_battle_run();

};

#endif