#ifndef LUCKY_h
#define LUCKY_h

#include "player.hpp"

/**
 * @brief      Class for Player's RPG Class Lucky.
 * @author     Lucas Marinho.
 */

class Lucky : public Player{
	public:
		/**
		 * @brief      Lucky's Constructor.
		 * @details    Sets the Attack, Main Attack, Player's name, however, other variables are set as random dices.
		 * @param[in]  name  The Player's name
		 */
		Lucky(std::string name);

		/**
		 * @brief      Override of the Player::p_damage.
		 * @details    Based on the main attack, do the Player's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short p_damage() override;

		/**
		 * @brief      Override of the Player::level_up
		 * @details    If the Player::_next_level is 0 or less, the Player levels up and gain some attributes increase as level, life, attaks and dodge hability.
		 * @return     void
		 */
		void level_up() override;
};

#endif