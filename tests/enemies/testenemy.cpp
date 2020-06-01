#include "doctest.h"
#include "enemy.hpp"
#include "dice.hpp"

Enemy* RE = new Enemy();

TEST_CASE("Teste Get Dice"){
	CHECK(RE->get_dice(0) == 0);
}

TEST_CASE("Teste Get Death XP"){
	CHECK(RE->get_d_xp() == 0);
}

TEST_CASE("Teste Get Name"){
	CHECK(RE->get_name() == "");
}

TEST_CASE("Teste Get HP"){
	RE->set_hp(25);
	CHECK(RE->get_hp() == 25);
}

TEST_CASE("Teste Get AC"){
	CHECK(RE->get_ac() == 0);
}

TEST_CASE("Teste Get Enemy Taut"){
	CHECK(RE->get_e_taunt() == 0);
}

TEST_CASE("Teste Get Dodge Fail"){
	CHECK(RE->get_dodge_fail() == 0);
}

TEST_CASE("Teste Get Potion Fail"){
	CHECK(RE->get_potion_fail() == 0);
}

TEST_CASE("Teste Get Run Fail"){
	CHECK(RE->get_run_fail() == 0);
}

TEST_CASE("Teste Enemy Damage"){
	CHECK(RE->e_damage() == 0);
}

TEST_CASE("Teste Player Fail - 1"){
	CHECK(RE->p_fail(-1) == 0);
}

TEST_CASE("Teste Player Fail - 2"){
	CHECK(RE->p_fail(-500) == 0);
}

TEST_CASE("Teste Player Fail - 3"){
	CHECK(RE->p_fail(20) == 0);
}

TEST_CASE("Teste Player Fail - 4"){
	CHECK(RE->p_fail(-1) == 0);
}

TEST_CASE("Teste Player Fail - 4"){
	CHECK(RE->p_fail('a') == 0);
}

TEST_CASE("Teste Player Fail - 4"){
	CHECK(RE->p_fail(0) >= 1);
}

TEST_CASE("Teste Player Fail - 5"){
	CHECK(RE->p_fail(0) <= 4);
}

TEST_CASE("Teste Player Fail - 6"){
	CHECK(RE->p_fail(1) >= 1);
}
TEST_CASE("Teste Player Fail - 7"){
	CHECK(RE->p_fail(1) <= 6);
}

TEST_CASE("Teste Player Fail - 8"){
	CHECK(RE->p_fail(2) >= 1);
}

TEST_CASE("Teste Player Fail - 9"){
	CHECK(RE->p_fail(2) <= 8);
}

TEST_CASE("Teste Player Fail - 10"){
	CHECK(RE->p_fail(3) >= 1);
}

TEST_CASE("Teste Player Fail - 11"){
	CHECK(RE->p_fail(3) <= 10);
}

TEST_CASE("Teste Player Fail - 12"){
	CHECK(RE->p_fail(4) >= 1);
}

TEST_CASE("Teste Player Fail - 13"){
	CHECK(RE->p_fail(4) <= 12);
}

TEST_CASE("Teste Player Fail - 14"){
	CHECK(RE->p_fail(5) >= 1);
}

TEST_CASE("Teste Player Fail - 15"){
	CHECK(RE->p_fail(5) <= 16);
}

TEST_CASE("Teste Player Fail - 16"){
	CHECK(RE->p_fail(6) >= 1);
}

TEST_CASE("Teste Player Fail - 17"){
	CHECK(RE->p_fail(6) <= 20);
	delete(RE);
}
