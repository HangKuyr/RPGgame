#include "doctest.h"
#include "enemy.hpp"
#include "slime.hpp"
#include "dice.hpp"

Enemy* RSS = new Slime(1);

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RSS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 2"){
	CHECK(RSS->e_damage() <= 4);
}

TEST_CASE("Teste Enemy Damage - 3"){
	RSS->set_hp(5);
	CHECK(RSS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 4"){
	CHECK(RSS->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage - 5"){
	RSS->set_hp(2);
	CHECK(RSS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 6"){
	CHECK(RSS->e_damage() <= 10);
}

TEST_CASE("Teste Enemy Damage - 7"){
	RSS = new Slime(4, 650);
	CHECK(RSS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 8"){
	CHECK(RSS->e_damage() <= 8);
}

TEST_CASE("Teste Enemy Damage - 9"){
	RSS->set_hp(9);
	CHECK(RSS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 10"){
	CHECK(RSS->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 11"){
	RSS->set_hp(4);
	CHECK(RSS->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 12"){
	CHECK(RSS->e_damage() <= 16);
	delete(RSS);
}
