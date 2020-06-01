#include "doctest.h"
#include "player.hpp"
#include "mage.hpp"
#include "dice.hpp"

Player* RM = new Mage("Lucas");

TEST_CASE("Teste Level Up - 1"){
	RM->level_up();
	CHECK(RM->get_level() == 2);
}

TEST_CASE("Teste Level Up - 2"){
	RM->level_up();
	CHECK(RM->get_level() == 3);
}

TEST_CASE("Teste Level Up - 3"){
	RM->level_up();
	CHECK(RM->get_level() == 4);
}

TEST_CASE("Teste Level Up - 4"){
	RM->level_up();
	CHECK(RM->get_level() == 5);
}

TEST_CASE("Teste Damage - 1"){
	CHECK(RM->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 2"){
	CHECK(RM->p_damage() <= 16);
}

TEST_CASE("Teste Damage - 3"){
	CHECK(RM->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 4"){
	CHECK(RM->p_damage() <= 16);
}

TEST_CASE("Teste Damage - 5"){
	RM->set_m_attack("Blizzard");
	CHECK(RM->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 6"){
	CHECK(RM->p_damage() <= 24);
}

TEST_CASE("Teste Damage - 7"){
	RM->set_m_attack("Thunder Storm");
	CHECK(RM->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 8"){
	CHECK(RM->p_damage() <= 36);
	delete(RM);
}
