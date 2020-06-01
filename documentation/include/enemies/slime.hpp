#ifndef SLIME_H
#define SLIME_H

#include "enemy.hpp"

/**
 * @brief      Class for Enemy Slime.
 * @author     Lucas Marinho.
 */
class Slime : public Enemy{
	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Slime's variables according to his level.
		 */
		Slime(short level);

		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Slime's variables according to his level and dropped xp.
		 */
		Slime(short level, short d_xp);

		/**
		 * @brief      Override of the Enemy::e_damage.
		 * @details    Based on the main attack, do the Enemy's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short e_damage() override;
};

#endif