#ifndef GNOME_H
#define GNOME_H

#include "enemy.hpp"

/**
 * @brief      Class for Enemy Gnome.
 * @author     Lucas Marinho.
 */
class Gnome: public Enemy{
	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Gnome's variables according to his status.
		 */
		Gnome();

		/**
		 * @brief      Override of the Enemy::e_damage.
		 * @details    Based on the main attack, do the Enemy's attack, it can do 3 different attacks.
		 * @return     The attack's damage.
		 */
		short e_damage() override;
};

#endif