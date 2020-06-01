#include "doctest.h"
#include "player.hpp"
#include "lucky.hpp"
#include "dice.hpp"

Lucky* RL = new Lucky("Lucas");

TEST_CASE("Teste Level Up - 1"){
	RL->level_up();
	CHECK(RL->get_level() == 2);
}

TEST_CASE("Teste Level Up - 2"){
	RL->level_up();
	CHECK(RL->get_level() == 3);
}

TEST_CASE("Teste Level Up - 3"){
	RL->level_up();
	CHECK(RL->get_level() == 4);
}

TEST_CASE("Teste Level Up - 4"){
	RL->level_up();
	CHECK(RL->get_level() == 5);
}


TEST_CASE("Teste Damage - 1"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 2"){
	CHECK(RL->p_damage() <= 12);
}

TEST_CASE("Teste Damage - 3"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 4"){
	CHECK(RL->p_damage() <= 12);
}

TEST_CASE("Teste Damage - 5"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 6"){
	CHECK(RL->p_damage() <= 12);
}

TEST_CASE("Teste Damage - 7"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 8"){
	CHECK(RL->p_damage() <= 12);
}

TEST_CASE("Teste Damage - 9"){
	RL->set_m_attack("Lucky Kick");
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 10"){
	CHECK(RL->p_damage() <= 32);
}

TEST_CASE("Teste Damage - 11"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 12"){
	CHECK(RL->p_damage() <= 32);
}

TEST_CASE("Teste Damage - 13"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 14"){
	CHECK(RL->p_damage() <= 32);
}

TEST_CASE("Teste Damage - 15"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 16"){
	CHECK(RL->p_damage() <= 32);
}

TEST_CASE("Teste Damage - 17"){
	RL->set_m_attack("Try to not die");
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 18"){
	CHECK(RL->p_damage() <= 72);
}

TEST_CASE("Teste Damage - 19"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 20"){
	CHECK(RL->p_damage() <= 72);
}

TEST_CASE("Teste Damage - 21"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 22"){
	CHECK(RL->p_damage() <= 72);
}

TEST_CASE("Teste Damage - 23"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 24"){
	CHECK(RL->p_damage() <= 72);
}

TEST_CASE("Teste Damage - 25"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 26"){
	CHECK(RL->p_damage() <= 72);
}

TEST_CASE("Teste Damage - 27"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 28"){
	CHECK(RL->p_damage() <= 72);
}

TEST_CASE("Teste Damage - 29"){
	CHECK(RL->p_damage() >= 1);
}

TEST_CASE("Teste Damage - 30"){
	CHECK(RL->p_damage() <= 72);
	delete(RL);
}