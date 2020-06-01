#include "doctest.h"
#include "enemy.hpp"
#include "pumpkin.hpp"
#include "dice.hpp"

Enemy* RPP = new Pumpkin(2);

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RPP->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 2"){
	CHECK(RPP->e_damage() <= 8);
}

TEST_CASE("Teste Enemy Damage - 3"){
	RPP->set_hp(9);
	CHECK(RPP->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 4"){
	CHECK(RPP->e_damage() <= 10);
}

TEST_CASE("Teste Enemy Damage - 5"){
	RPP->set_hp(5);
	CHECK(RPP->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 6"){
	CHECK(RPP->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 7"){
	RPP = new Pumpkin(5, 750);
	CHECK(RPP->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 8"){
	CHECK(RPP->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 9"){
	CHECK(RPP->get_hp() == 35);
}

TEST_CASE("Teste Enemy Damage - 10"){
	RPP->set_hp(5);
	CHECK(RPP->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 11"){
	CHECK(RPP->e_damage() <= 20);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 12"){
	CHECK(RPP->get_hp() == 0);
	delete(RPP);
}