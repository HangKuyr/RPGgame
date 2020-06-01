#include "doctest.h"
#include "enemy.hpp"
#include "boss.hpp"
#include "dice.hpp"

Enemy* RB = new Boss();

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 2"){
	CHECK(RB->e_damage() <= 4);
}

TEST_CASE("Teste Enemy Damage - 3"){
	RB->set_hp(25);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 4"){
	CHECK(RB->e_damage() <= 10);
}

TEST_CASE("Teste Enemy Damage - 5"){
	RB->set_hp(5);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 6"){
	CHECK(RB->e_damage() <= 20);
}

TEST_CASE("Teste Enemy Damage - 7"){
	RB = new Boss(5);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 8"){
	CHECK(RB->e_damage() <= 12);
}

TEST_CASE("Teste Enemy Damage - 9"){
	RB->set_hp(17);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 10"){
	CHECK(RB->e_damage() <= 24);
}

TEST_CASE("Teste Enemy Damage - 11"){
	RB->set_hp(5);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 12"){
	CHECK(RB->e_damage() <= 34);
}

TEST_CASE("Teste Enemy Damage - 13"){
	RB = new Boss(7, 900);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 14"){
	CHECK(RB->e_damage() <= 18);
}

TEST_CASE("Teste Enemy Damage - 15"){
	RB->set_hp(28);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 16"){
	CHECK(RB->e_damage() <= 40);
}

TEST_CASE("Teste Enemy Damage - 5"){
	RB->set_hp(5);
	CHECK(RB->e_damage() >= 1);
}

TEST_CASE("Teste Enemy Damage - 1"){
	CHECK(RB->e_damage() <= 50);
	delete(RB);
}
