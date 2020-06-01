#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <cmath>
#include <exception>
#include "dice.hpp"

/**
 * @brief  Class for the Player of the game.
 * @author Lucas Marinho
 */

class Player{
	
	private:

		
		/**
		* @var Player::_roll 
		* @brief Dice's object, used to generate random dices.
		*/
		Dice _roll;

		/**
		 * @var Player::_name 
		 * @brief Player's name.
		 */
		std::string _name;

		/**
		 * @var Player::_r_class Player's RPG Class, can be Lucky, Mage, Ranger or Warrior.
		 */
		std::string _r_class;

		/**
		 * @var Player::_level 
		 * @brief Player's Level, can be 1-5.
		 */
		short _level;

		/**
		 * @var Player::_xp 
		 * @brief Player's Experience, used to Level Up.
		 */
		short _xp;

		/**
		 * @var Player::_hp 
		 * @brief Player's Health Points, when goes to 0, the Player dies and the game ends.
		 */
		short _hp;

		/**
		 * @var Player::_init_hp 
		 * @brief Player's Initial Health Points, is used when the Player heal or level up.
		 */
		short _init_hp;

		/**
		 * @var Player::_ac 
		 * @brief Player's Armor Class, used to se if the Enemy can hit the Player, can be 1-20.
		 */
		short _ac;

		/**
		 * @var Player::_potions 
		 * @brief Player's Potions, used to heal the Player.
		 */
		short _potions;

		/**
		 * @var Player::_potion_heal 
		 * @brief Potions' Heal, the amount of HP that each Potion heal, it's set to 5.
		 */
		short _potion_heal;

		/**
		 *  @var Player::_dodge_buff 
		 *  @brief Player's Dodge Buff, used to increase the Armor Class when the Player try to dodge.
		 */
		short _dodge_buff;

		/**
		 * @var Player::_dodge_hability 
		 * @brief Player's Dodge Hability, when the Player dodge he hits the enemy and the value of the hit depends on this variable, used in Player::d_damage.
		 * @see        Player::d_damage
		 */
		short _dodge_hability;

		/**
		 * @var Player::_attacks[] 
		 * @brief Player's Attacks, he can have 3 differents attacks.
		 */
		std::string _attacks[3];

		/**
		 * @var Player::_m_attack 
		 * @brief Player's Main Attack, used to decide which attack he will use.
		 */
		std::string _m_attack;

		/**
		 * @var Player::_next_level 
		 * @brief Player's Next Level, used to verify how much XP he needs to level up.
		 */
		short _next_level;
		
	protected:
		/**
		 * @var Player::dark 
		 * @brief Ranger's Darkness, used to do a different attack.
		 * @see        Ranger::p_damage
		 */
		bool dark;

	public:
		 /**
		  * @brief      Sets the RPG Class.
		  *
		  * @param[in]  r_class  The RPG Class.
		  * @return     void
		  */
		void set_r_class(std::string r_class);

		/**
		 * @brief      Sets the level.
		 *
		 * @param[in]  level  The level.
		 * @return     void
		 */
		void set_level(short level);
		
		/**
		 * @brief      Sets the XP.
		 *
		 * @param[in]  xp    The XP.
		 * @return     void
		 */
		void set_xp(short xp);
		
		/**
		 * @brief      Sets the HP.
		 * 
		 * @param[in]  hp   The HP.
		 * @return     void
		 */
		void set_hp(short hp);
		
		/**
		 * @brief      Sets the initialized HP.
		 *
		 * @param[in]  init_hp  The initialized HP.
		 * @return     void
		 */
		void set_init_hp(short init_hp);
		
		/**
		 * @brief      Sets the AC.
		 *
		 * @param[in]  ac    The Armor Class.
		 * @return     void
		 */
		void set_ac(short ac);
		
		/**
		 * @brief      Sets the potions.
		 *
		 * @param[in]  potions  The potions.
		 * @return     void
		 */
		void set_potions(short potions);
		
		/**
		 * @brief      Sets the dodge buffer.
		 *
		 * @param[in]  dodge_buff  The dodge buffer.
		 * @return     void
		 */
		void set_dodge_buff(short dodge_buff);
		
		/**
		 * @brief      Sets the dodge hability.
		 *
		 * @param[in]  dodge_hability  The dodge hability.
		 * @return     void
		 */
		void set_dodge_hability(short dodge_hability);
		
		/**
		 * @brief      Sets the attack.
		 *
		 * @param[in]  attack  The attack.
		 * @param[in]  num     The number of the attack.
		 * @return     void
		 */
		void set_attack(std::string attack, short num);
		
		/**
		 * @brief      Sets the main attack.
		 *
		 * @param[in]  attack  The attack.
		 * @return     void
		 */
		void set_m_attack(std::string attack);
		
		/**
		 * @brief      Sets the next level.
		 *
		 * @param[in]  next_level  The  XP required to the next level.
		 * @return     void
		 */
		void set_next_level(short next_level);
		
		/**
		 * @brief      Gets the dice.
		 *
		 * @param[in]  roll  The number of the dice that it wants to roll.
		 *
		 * @return     The dice's value.
		 */
		short get_dice(short roll);

		/**
		 * @brief      Gets the RPG Class.
		 *
		 * @return     The RPG Class.
		 */
		std::string get_r_class();

		/**
		 * @brief      Gets the level.
		 *
		 * @return     The level.
		 */
		short get_level();

		/**
		 * @brief      Gets the XP.
		 *
		 * @return     The XP.
		 */
		short get_xp();

		/**
		 * @brief      Gets the HP.
		 *
		 * @return     The HP.
		 */
		short get_hp();

		/**
		 * @brief      Gets the initialized HP.
		 *
		 * @return     The initialized HP.
		 */
		short get_init_hp();

		/**
		 * @brief      Gets the Armor Class.
		 *
		 * @return     The armor class.
		 */
		short get_ac();

		/**
		 * @brief      Gets the potions.
		 *
		 * @return     The potions.
		 */
		short get_potions();

		/**
		 * @brief      Gets the dodge buffer.
		 *
		 * @return     The dodge buffer.
		 */
		short get_dodge_buff();

		/**
		 * @brief      Gets the dodge hability.
		 *
		 * @return     The dodge hability.
		 */
		short get_dodge_hability();

		/**
		 * @brief      Gets the main attack.
		 *
		 * @return     The main attack.
		 */
		std::string get_m_attack();

		/**
		 * @brief      Gets the attack.
		 *
		 * @param[in]  num   The number of the attack.
		 *
		 * @return     The attack.
		 */
		std::string get_attack(short num);

		/**
		 * @brief      Gets the  XP required to the next level.
		 *
		 * @return     The xp to the next level.
		 */
		short get_next_level();

		/**
		 * @brief      Constructor of the Player.
		 * @details    Define all Player's variables as empty or 0 and the Player's name.
		 * @param[in]  name  The Player's name.
		 */
		Player(std::string name);

		/**
		 * @brief      Shows the Player's Status.
		 */

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Player();

		/**
		 * @brief      Print the Player's Status as level, hp, xp, class, next level, ac, potions, name, dodge buff, dodge hability and attacks.
		 * @return     void
		 */
		void status();

		/**
		 * @brief      Used to define the damage that the Player will do.
		 * @see        Lucky::p_damage
		 * @see        Mage::p_damage
		 * @see        Ranger::p_damage
		 * @see        Warrior::p_damage
		 * @return     The damage. 
		 */
		virtual short p_damage();

		/**
		 * @brief      Used to level up the Player
		 * @see        Lucky::level_up
		 * @see        Mage::level_up
		 * @see        Ranger::level_up
		 * @see        Warrior::level_up
		 * @return     void
		 */
		virtual void level_up();

		/**
		 * @brief      Enables the Player to heal himself.
		 * @details    Checks if the Player still has potions, if so, he heals 5HP, otherwise, is printed "You have no potions left!".
		 * @return     void
		 */
		void p_potion_heal();

		/**
		 * @brief      Enables the Player to make decisions.
		 * @details    Shows the possibles decisions that the Player can do.
		 * @exception  std::invalid_argument Invalid character.
		 * @exception  std::invalid_argument Invalid number.
		 * @return     The value that corresponds which decision the Player made.
		 */
		short p_decision();

		/**
		 * @brief      Defines the damage that the Player does when he dodges.
		 * @details    When the Player dodges, the function calls a Dice's funcition using the parameter as the Dice::roll_dice parameter.
		 * @see        Dice::roll_dice
		 * @param[in]  how_good  How good he is in dodging.
		 * @return     The dodge's damage.
		 */
		short d_damage(short how_good);

		/**
		 * @brief      Modifies the Player's HP.
		 * @details    Add Player's HP with value of m_ph and set as the new Player's HP.
		 * @exception  std::invalid_argument Invalid character.
		 * @exception  std::invalid_argument Invalid number.
		 * @param[in]  m_hp  The value that will modify the HP.
		 * @return     0.
		 */
		void p_modify_hp(short m_hp);
};

#endif