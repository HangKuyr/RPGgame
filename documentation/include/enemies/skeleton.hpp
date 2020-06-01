#ifndef SKELETON_H
#define SKELETON_H

#include "enemy.hpp"

/**
 * @brief      Class for Enemy Skeleton.
 * @author     Lucas Marinho.
 */
class Skeleton: public Enemy{
	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Skeleton's variables according to his status.
		 */
		Skeleton();

		/**
		 * @brief      Override of the Enemy::e_damage.
		 * @details    Based on the main attack, do the Enemy's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short e_damage() override;
};

#endif