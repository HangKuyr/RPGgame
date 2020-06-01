#include "doctest.h"
#include "player.hpp"
#include "dice.hpp"

Player* RP = new Player("Leroy");

TEST_CASE("Teste Get Dice"){
	CHECK(RP->get_dice(0) == 0);
}

TEST_CASE("Teste Get Class"){
	CHECK(RP->get_r_class() == "");
}

TEST_CASE("Teste Get Level"){
	RP->set_level(5);
	CHECK(RP->get_level() == 5);
}

TEST_CASE("Teste Get XP"){
	RP->set_xp(300);
	CHECK(RP->get_xp() == 300);
}

TEST_CASE("Teste Get HP"){
	RP->set_hp(25);
	CHECK(RP->get_hp() == 25);
}

TEST_CASE("Teste Get Init HP"){
	RP->set_init_hp(12);
	CHECK(RP->get_init_hp() == 12);
}

TEST_CASE("Teste Get AC"){
	RP->set_ac(20);
	CHECK(RP->get_ac() == 20);
}

TEST_CASE("Teste Get Potions"){
	RP->set_potions(5);
	CHECK(RP->get_potions() == 5);
}

TEST_CASE("Teste Get Dodge Buff"){
	RP->set_dodge_buff(5);
	CHECK(RP->get_dodge_buff() == 5);
}

TEST_CASE("Teste Get Dodge Hability"){
	RP->set_dodge_hability(5);
	CHECK(RP->get_dodge_hability() == 5);
}

TEST_CASE("Teste Get Main Attack"){
	RP->set_m_attack("One Punch");
	CHECK(RP->get_m_attack() == "One Punch");
}

TEST_CASE("Teste Get Attack 0"){
	RP->set_attack("One Punch", 0);
	CHECK(RP->get_attack(0) == "One Punch");
}

TEST_CASE("Teste Get Attack 1"){
	RP->set_attack("Boku", 1);
	CHECK(RP->get_attack(1) == "Boku");
}

TEST_CASE("Teste Get Attack 2"){
	RP->set_attack("Danmachi", 2);
	CHECK(RP->get_attack(2) == "Danmachi");
}

TEST_CASE("Teste Player Damage"){
	CHECK(RP->p_damage() == 0);
}

TEST_CASE("Teste Modify HP - 1"){
	RP->set_hp(15);
	RP->p_modify_hp(5);
	CHECK(RP->get_hp() == 20);
}

TEST_CASE("Teste Modify HP - 2"){
	RP->set_hp(15);
	RP->p_modify_hp(-7);
	CHECK(RP->get_hp() == 8);
}

TEST_CASE("Teste Modify HP - 3"){
	RP->set_hp(15);
	RP->p_modify_hp('a');
	CHECK(RP->get_hp() == 15);
}

TEST_CASE("Teste Modify HP - 4"){
	RP->p_modify_hp(-50);
	CHECK(RP->get_hp() == 15);
}

TEST_CASE("Teste Modify HP - 5"){
	RP->set_hp(15);
	RP->p_modify_hp(-100);
	CHECK(RP->get_hp() == 15);
}

TEST_CASE("Teste Modify HP - 6"){
	RP->set_hp(15);
	RP->p_modify_hp('+');
	CHECK(RP->get_hp() == 15);
}

TEST_CASE("Teste Modify HP - 7"){
	RP->set_hp(15);
	RP->p_modify_hp(41);
	CHECK(RP->get_hp() == 15);
}

TEST_CASE("Teste Modify HP - 7"){
	RP->set_hp(15);
	RP->set_init_hp(15);
	RP->p_modify_hp(1);
	CHECK(RP->get_hp() == 15);
}

TEST_CASE("Teste Heal HP - 1"){
	RP->set_hp(15);
	RP->set_init_hp(30);
	RP->p_potion_heal();
	CHECK(RP->get_hp() == 20);
}

TEST_CASE("Teste Heal HP - 2"){
	RP->set_hp(29);
	RP->set_init_hp(30);
	RP->p_potion_heal();
	CHECK(RP->get_hp() == 30);
}

TEST_CASE("Teste Heal Potions - 1"){
	RP->set_potions(5);
	RP->p_potion_heal();
	CHECK(RP->get_potions() == 4);
}

TEST_CASE("Teste Heal Potions - 2"){
	RP->set_hp(29);
	RP->set_potions(0);
	RP->p_potion_heal();
	CHECK(RP->get_hp() == 29);
}

TEST_CASE("Teste Decision"){
	CHECK((RP->p_decision() >= 1 && RP->p_decision() <= 6));
}

TEST_CASE("Teste Dodge Damage - 1"){
	CHECK(RP->d_damage(-1) == 0);
}

TEST_CASE("Teste Dodge Damage - 2"){
	CHECK(RP->d_damage(-500) == 0);
}

TEST_CASE("Teste Dodge Damage - 3"){
	CHECK(RP->d_damage(20) == 0);
}

TEST_CASE("Teste Dodge Damage - 4"){
	CHECK(RP->d_damage(-1) == 0);
}

TEST_CASE("Teste Dodge Damage - 4"){
	CHECK(RP->d_damage('a') == 0);
}

TEST_CASE("Teste Dodge Damage - 4"){
	CHECK(RP->d_damage(0) >= 1);
}

TEST_CASE("Teste Dodge Damage - 5"){
	CHECK(RP->d_damage(0) <= 4);
}

TEST_CASE("Teste Dodge Damage - 6"){
	CHECK(RP->d_damage(1) >= 1);
}
TEST_CASE("Teste Dodge Damage - 7"){
	CHECK(RP->d_damage(1) <= 6);
}

TEST_CASE("Teste Dodge Damage - 8"){
	CHECK(RP->d_damage(2) >= 1);
}

TEST_CASE("Teste Dodge Damage - 9"){
	CHECK(RP->d_damage(2) <= 8);
}

TEST_CASE("Teste Dodge Damage - 10"){
	CHECK(RP->d_damage(3) >= 1);
}

TEST_CASE("Teste Dodge Damage - 11"){
	CHECK(RP->d_damage(3) <= 10);
}

TEST_CASE("Teste Dodge Damage - 12"){
	CHECK(RP->d_damage(4) >= 1);
}

TEST_CASE("Teste Dodge Damage - 13"){
	CHECK(RP->d_damage(4) <= 12);
}

TEST_CASE("Teste Dodge Damage - 14"){
	CHECK(RP->d_damage(5) >= 1);
}

TEST_CASE("Teste Dodge Damage - 15"){
	CHECK(RP->d_damage(5) <= 16);
}

TEST_CASE("Teste Dodge Damage - 16"){
	CHECK(RP->d_damage(6) >= 1);
}

TEST_CASE("Teste Dodge Damage - 17"){
	CHECK(RP->d_damage(6) <= 20);
	delete(RP);
}
