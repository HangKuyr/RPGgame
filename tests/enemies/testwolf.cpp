#include "doctest.h"
#include "enemy.hpp"
#include "wolf.hpp"
#include "dice.hpp"

Enemy* RWW = new Wolf();

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RWW->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 2"){
	CHECK(RWW->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 3"){
	CHECK(RWW->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 4"){
	CHECK(RWW->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 5"){
	CHECK(RWW->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 6"){
	CHECK(RWW->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 7"){
	CHECK(RWW->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 8"){
	CHECK(RWW->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 9"){
	RWW->set_hp(9);
	CHECK(RWW->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 10"){
	CHECK(RWW->e_damage() <= 14);
	delete(RWW);
}
