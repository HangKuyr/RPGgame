#ifndef BOSS_H
#define BOSS_H

#include "enemy.hpp"

/**
 * @brief      Class for Enemy Boss.
 * @author     Lucas Marinho.
 */
class Boss : public Enemy{
	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Boss's variables according to his status.
		 */
		Boss();

		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Boss's variables according to his level.
		 */
		Boss(short level);

		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Boss's variables according to his level and name.
		 */
		Boss(short level, short d_xp);

		/**
		 * @brief      Override of the Enemy::e_damage.
		 * @details    Based on the main attack, do the Enemy's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short e_damage() override;
};

#endif