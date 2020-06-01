#include "dice.hpp"
#include "doctest.h"

Dice dice;

TEST_CASE("Teste de Valores - roll_dice"){
	CHECK(dice.roll_dice(-500) == 0);
}

TEST_CASE("Teste de Valores Dice - 2"){
	CHECK(dice.roll_dice(-1) == 0);
}

TEST_CASE("Teste de Valores Dice - 3"){
	CHECK(dice.roll_dice(0) == 0);
}

TEST_CASE("Teste de Valores Dice - 4"){
	CHECK(dice.roll_dice(1) == 0);

}

TEST_CASE("Teste de Valores Dice - 5"){
	CHECK(dice.roll_dice(4) >= 1);

}

TEST_CASE("Teste de Valores Dice - 6"){
	CHECK(dice.roll_dice(4) <= 4);
}

TEST_CASE("Teste de Valores Dice - 7"){
	CHECK(dice.roll_dice(6) >= 1);
}

TEST_CASE("Teste de Valores Dice - 8"){
	CHECK(dice.roll_dice(6) <= 6);
}

TEST_CASE("Teste de Valores Dice - 9"){
	CHECK(dice.roll_dice(8) >= 1);
}

TEST_CASE("Teste de Valores Dice - 10"){
	CHECK(dice.roll_dice(8) <= 8);
}

TEST_CASE("Teste de Valores Dice - 11"){
	CHECK(dice.roll_dice(10) >= 1);
}

TEST_CASE("Teste de Valores Dice - 12"){
	CHECK(dice.roll_dice(10) <= 10);
}

TEST_CASE("Teste de Valores Dice - 13"){
	CHECK(dice.roll_dice(12) >= 1);
}

TEST_CASE("Teste de Valores Dice - 14"){
	CHECK(dice.roll_dice(12) <= 12);
}

TEST_CASE("Teste de Valores Dice - 15"){
	CHECK(dice.roll_dice(16) >= 1);
}

TEST_CASE("Teste de Valores Dice - 16"){
	CHECK(dice.roll_dice(16) <= 16);
}

TEST_CASE("Teste de Valores Dice - 17"){
	CHECK(dice.roll_dice(20) >= 1);
}

TEST_CASE("Teste de Valores Dice - 18"){
	CHECK(dice.roll_dice(20) <= 20);
}