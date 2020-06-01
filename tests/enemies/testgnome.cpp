#include "doctest.h"
#include "enemy.hpp"
#include "gnome.hpp"
#include "dice.hpp"

Enemy* RG = new Gnome();

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RG->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 2"){
	CHECK(RG->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage - 3"){
	CHECK(RG->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 4"){
	CHECK(RG->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage - 5"){
	CHECK(RG->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 6"){
	CHECK(RG->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage - 7"){
	CHECK(RG->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 8"){
	CHECK(RG->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage - 9"){
	RG->set_hp(17);
	CHECK(RG->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 10"){
	CHECK(RG->e_damage() <= 6);
}

TEST_CASE("Teste Enemy Damage - 11"){
	RG->set_hp(5);
	CHECK(RG->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 12"){
	CHECK(RG->e_damage() <= 6);
	delete(RG);
}
