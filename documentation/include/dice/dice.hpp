#ifndef ROLL_DICE_H
#define ROLL_DICE_H

#include <cstdlib>

/**
 * @brief      Class for the dices used on the game.
 * @author     Lucas Marinho.
 */
class Dice{
	public:
		/**
		 * @brief      Calculate a random dice based on the number of faces we want.
		 *
		 * @param[in]  num   The number of the dice's face.
		 *
		 * @return     The final dice's value.
		 */
		short roll_dice(short num);
};

#endif