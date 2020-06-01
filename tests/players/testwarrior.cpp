#include "doctest.h"
#include "player.hpp"
#include "warrior.hpp"
#include "dice.hpp"

Player* RW = new Warrior("Lucas");

TEST_CASE("Teste Level Up - 1"){
	RW->level_up();
	CHECK(RW->get_level() == 2);
}

TEST_CASE("Teste Level Up - 2"){
	RW->level_up();
	CHECK(RW->get_level() == 3);
}

TEST_CASE("Teste Level Up - 3"){
	RW->level_up();
	CHECK(RW->get_level() == 4);
}

TEST_CASE("Teste Level Up - 4"){
	RW->level_up();
	CHECK(RW->get_level() == 5);
}

TEST_CASE("Teste Damage - 1"){
	CHECK(RW->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 2"){
	CHECK(RW->p_damage() <= 10);
}

TEST_CASE("Teste Damage - 3"){
	RW->set_m_attack("Heavy Impact");
	CHECK(RW->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 4"){
	CHECK(RW->p_damage() <= 20);
}

TEST_CASE("Teste Damage - 5"){
	RW->set_m_attack("Brutal Strike");
	CHECK(RW->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 6"){
	CHECK(RW->p_damage() <= 30);
	delete(RW);
}
