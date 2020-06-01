#include "doctest.h"
#include "player.hpp"
#include "ranger.hpp"
#include "dice.hpp"

Player* RR = new Ranger("Lucas");

TEST_CASE("Teste Level Up - 1"){
	RR->level_up();
	CHECK(RR->get_level() == 2);
}

TEST_CASE("Teste Level Up - 2"){
	RR->level_up();
	CHECK(RR->get_level() == 3);
}

TEST_CASE("Teste Level Up - 3"){
	RR->level_up();
	CHECK(RR->get_level() == 4);
}

TEST_CASE("Teste Level Up - 4"){
	RR->level_up();
	CHECK(RR->get_level() == 5);
}

TEST_CASE("Teste Damage - 1"){
	CHECK(RR->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 2"){
	CHECK(RR->p_damage() <= 16);
}

TEST_CASE("Teste Damage - 3"){
	RR->set_m_attack("Double Shot");
	CHECK(RR->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 4"){
	CHECK(RR->p_damage() <= 40);
}

TEST_CASE("Teste Damage - 5"){
	RR->set_m_attack("Dark Arrow");
	CHECK(RR->p_damage() == 0);
}

TEST_CASE("Teste Damage - 6"){
	RR->set_m_attack("Quick Shot");
	CHECK(RR->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 7"){
	CHECK(RR->p_damage() <= 16);
}

TEST_CASE("Teste Damage - 8"){
	RR->set_m_attack("Double Shot");
	CHECK(RR->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 9"){
	CHECK(RR->p_damage() <= 40);
}

TEST_CASE("Teste Damage - 10"){
	CHECK(RR->get_hp() == RR->get_init_hp() - 3);
	delete(RR);
}
