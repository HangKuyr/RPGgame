#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include "dice.hpp"

/**
 * @brief      Class for the Enemy of the game.
 * @author     Lucas Marinho.
 */
class Enemy {

	protected:
		/**
		* @var Enemy::roll 
		* @brief Dice's object, used to generate random dices.
		*/
		Dice roll;

		/**
		 * @var Enemy::name 
		 * @brief Enemy's name.
		 */
		std::string name;

		/**
		 * @var Enemy::race 
		 * @brief Enemy's name.
		 */
		std::string race;

		/**
		 * @var Enemy::level 
		 * @brief Enemy's Level, can be 1-7.
		 */
		short level;

		/**
		 * @var Enemy::d_xp 
		 * @brief Enemy's Experience dropped when the Enemy dies.
		 */
		short d_xp;

		/**
		 * @var Enemy::hp 
		 * @brief Enemy's Health Points, when goes to 0, the Enemy dies.
		 */
		short hp;

		/**
		 * @var Enemy::ac 
		 * @brief Enemy's Armor Class, used to se if the Enemy can hit the Enemy, can be 1-20.
		 */
		short ac;	

		/**
		 * @var Enemy::attacks[] 
		 * @brief Enemy's Attacks, he can have 3 differents attacks.
		 */
		std::string attacks[3];

		/**
		 * @var Enemy::e_taunt;
		 * @brief Enemy Taunt, correspond how much the Player has to get on a dice to run from the battle.
		 */
		short e_taunt;

		/**
		 * @var Enemy::dodge_fail
		 * @brief      Defines the parameter passed to Enemy::p_fail when the Player fails to dodge the Enemy's attack.
		 * @see        Enemy::p_fail
		 */
		short dodge_fail;

		/**
		 * @var Enemy::potion_fail
		 * @brief      Defines the parameter passed to Enemy::p_fail when the Player fails to dodge, using a potion, the Enemy's attack.
		 * @see        Enemy::p_fail
		 */
		short potion_fail;

		/**
		 * @var Enemy::run_fail
		 * @brief      Defines the parameter passed to Enemy::p_fail when the Player fails to run from the battle.
		 * @see        Enemy::p_fail
		 */
		short run_fail;

	public:
		/**
		 * @brief      Constructor of the Enemy.
		 * @details    Define all Enemy's variables as empty or 0.
		 */
		Enemy();
		
		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Enemy(); 

		/**
		 * @brief      Sets the HP.
		 * 
		 * @param[in]  hp   The HP.
		 * @return     void
		 */
		void set_hp(short hp);

		/**
		 * @brief      Gets the dice.
		 *
		 * @param[in]  roll  The number of the dice that it wants to roll.
		 *
		 * @return     The dice's value.
		 */
		short get_dice(short roll);

		/**
		 * @brief      Gets the Enemy's name.
		 *
		 * @return     The Enemy's name.
		 */
		std::string get_name();

		/**
		 * @brief      Gets the XP dropped when the Enemy dies.
		 *
		 * @return     The dropped XP.
		 */
		short get_d_xp();

		/**
		 * @brief      Gets the HP.
		 *
		 * @return     The HP.
		 */
		short get_hp();

		/**
		 * @brief      Gets the Armor Class.
		 *
		 * @return     The armor class.
		 */
		short get_ac();

		/**
		 * @brief      Gets the Enemy taunt.
		 *
		 * @return     The Enemy taunt.
		 */
		short get_e_taunt();

		/**
		 * @brief      Gets the Dodge fail to the Enemy::p_fail.
		 *
		 * @return     The Dodge fail.
		 */
		short get_dodge_fail();

		/**
		 * @brief      Gets the Potion fail to the Enemy::p_fail.
		 *
		 * @return     The potion fail.
		 */
		short get_potion_fail();

		/**
		 * @brief      Gets the Run fail to the Enemy::p_fail.
		 *
		 * @return     The run fail.
		 */
		short get_run_fail();

		/**
		 * @brief      Print the Enemy's Status as level, hp, death xp, ac, race, name, attacks.
		 * @return     void
		 */
		void status();

		/**
		 * @brief      Used to define the damage that the Enemy will do.
		 * @see        Boss::e_damage
		 * @see        Gnome::e_damage
		 * @see        Skeletor::e_damage
		 * @see        Slime::e_damage
		 * @see        Pumpkin::e_damage
		 * @see        Wolf::e_damage
		 * @return     The damage. 
		 */
		virtual short e_damage();

		/**
		 * @brief      Defines the damage that the Enemy does when the Player fail to dodge.
		 * @details    When the Player fail to dodge, the function calls a Dice's funcition using the parameter as the Dice::roll_dice parameter.
		 * @see        Dice::roll_dice
		 * @param[in]  how_bad  How punitive the Enemy is when the Player fails to dodge.
		 * @return     The dodge's damage.
		 */
		short p_fail(short how_bad);
};

#endif