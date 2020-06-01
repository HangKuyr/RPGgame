#ifndef MAGE_H
#define MAGE_H

#include "player.hpp"

/**
 * @brief      Class for Player's RPG Class Mage.
 * @author     Lucas Marinho.
 */

class Mage : public Player{
	public:
		/**
		 * @brief      Mage's Constructor.
		 * @details    Sets the Attack, Main Attack, Player's name and all other variables based on the RPG Class atributes.
		 * @param[in]  name  The Player's name
		 */
		Mage(std::string name);
		
		/**
		 * @brief      Override of the Player::p_damage.
		 * @details    Based on the main attack, do the Player's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short p_damage() override;

		
		void level_up() override;
};

#endif