#ifndef WOLF_H
#define WOLF_H

#include "enemy.hpp"

/**
 * @brief      Class for Enemy Wolf.
 * @author     Lucas Marinho.
 */
class Wolf: public Enemy{
	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Wolf's variables according to his status.
		 */
		Wolf();

		/**
		 * @brief      Override of the Enemy::e_damage.
		 * @details    Based on the main attack, do the Enemy's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short e_damage() override;
};

#endif