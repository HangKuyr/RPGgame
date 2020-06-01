#include "doctest.h"

#include "battle_room.hpp"
#include "player.hpp"

#include <iostream> 
#include <string>
#include <memory>
#include <sstream>

TEST_CASE("Test Battle_room constructor - SLIME") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("3\n3\n3\n3\n3\n3\n3");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("Haizi")); 
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	CHECK(static_cast<bool>(example));
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - SLIME x Warrior level5 - player win") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("3\n3\n3\n3\n3\n3\n3");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("ShuiJiao")); 
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	example->run_battle();
 	CHECK(example.get()->get_won_game() == true);
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - BOSS level2 x Warrior - player lose") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("1\n1\n1\n1\n1\n1\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Boss(5);
	Player *player0 = new Warrior(std::string("Kimnam")); 
	

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	CHECK(example.get()->get_won_game() == false);
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - Pumpkin x Mage level5 - player win") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("3\n3\n3\n3\n3\n3\n3");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Pumpkin(2);
	Player *player0 = new Mage(std::string("Jinim")); 
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	example->run_battle();
 	CHECK(example.get()->get_won_game() == true);
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - BOSS level3  x Lucky - player lose") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("1\n1\n1\n1\n1\n1\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Boss(7,1000);
	Player *player0 = new Lucky(std::string("Tangyi")); 
	

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	CHECK(example.get()->get_won_game() == false);
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - BOSS level3  x Lucky - player lose - try dodge and use potion") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("4\n1\n5\n1\n1\n1\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Boss(7,1000);
	Player *player0 = new Lucky(std::string("Tangyi")); 
	

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	CHECK(example.get()->get_won_game() == false);
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - SLIME x Warrior level5 - player win - use attacks 1, 2 and 3") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("2\n3\n1\n3\n3\n3\n3");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("ShuiJiao")); 
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	example->run_battle();
 	CHECK(example.get()->get_won_game() == true);
 	
    std::cin.rdbuf(orig);
}
TEST_CASE("Test run_battle - Pumpkin x Mage level5 - player run") {

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("6\n6\n6\n6\n6\n6\n6");
    std::cin.rdbuf(input.rdbuf());
    // test
    Enemy *enemy0 = new Pumpkin(2);
	Player *player0 = new Mage(std::string("Jinim")); 
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();
	player0->set_next_level(0);
	player0->status();

    std::unique_ptr<Battle_room>example(new Battle_room(player0, enemy0));
 	example->run_battle();
 	CHECK(example.get()->get_battle_run() == true);
 	
    std::cin.rdbuf(orig);
}

/*int main(){
	Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("Haizi")); 

	Battle_room *battle0 = new Battle_room(player0, enemy0);
	battle0->run_battle();

	return 0;
}*/