#include <iostream>
#include "doctest.h"
#include "enemy.hpp"
#include "skeleton.hpp"
#include "dice.hpp"

Enemy* RS = new Skeleton();

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 2"){
	CHECK(RS->e_damage() <= 8);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 3"){
	CHECK((RS->get_ac() < 18 || RS->get_hp() < 21) == true);
}

TEST_CASE("Teste Enemy Damage - 4"){
	CHECK(RS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 5"){
	CHECK(RS->e_damage() <= 8);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 6"){
	CHECK((RS->get_ac() < 18 || RS->get_hp() < 21) == true);
}

TEST_CASE("Teste Enemy Damage - 7"){
	CHECK(RS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 8"){
	CHECK(RS->e_damage() <= 8);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 9"){
	CHECK((RS->get_ac() < 18 || RS->get_hp() < 21) == true);
}

TEST_CASE("Teste Enemy Damage - 10"){
	RS->set_hp(3);
	CHECK(RS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 11"){
	CHECK(RS->e_damage() <= 14);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 12"){
	short hp = RS->get_hp() + 1;
	RS->e_damage();
	CHECK(RS->get_hp() == hp);
}

TEST_CASE("Teste Enemy Damage (Efeito da Função) - 13"){
	short ac = RS->get_ac() + 1;
	RS->e_damage();
	CHECK(RS->get_ac() == ac);
	delete(RS);
}
