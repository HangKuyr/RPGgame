#ifndef PUMPKIN_H
#define PUMPKIN_H

#include "enemy.hpp"

/**
 * @brief      Class for Enemy Pumpkin.
 * @author     Lucas Marinho.
 */
class Pumpkin: public Enemy{
	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Pumpkin's variables according to his level.
		 */
		Pumpkin(short level);

		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Pumpkin's variables according to his level and dropped xp.
		 */
		Pumpkin(short level, short d_xp);

		/**
		 * @brief      Override of the Enemy::e_damage.
		 * @details    Based on the main attack, do the Enemy's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short e_damage() override;
};

#endif