#include "doctest.h"

#include "battle_room.hpp"
#include "event.hpp"

#include <iostream> 
#include <sstream>
#include <string>
#include <memory>

 //CHECK_THROWS_AS( example->pick_player(), std::invalid_argument);

TEST_CASE("Test Event pick_player - lucky") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    std::unique_ptr<Event> example(new Event);
 	example->pick_player();
 	CHECK(static_cast<bool>(example));
 	
    std::cin.rdbuf(orig);

}

TEST_CASE("Test Event pick_player - mage") {
 	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n2");
    std::cin.rdbuf(input.rdbuf());
    // test 
    std::unique_ptr<Event> example(new Event);
 	example->pick_player();
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);
}

TEST_CASE("Test Event pick_player - ranger") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n3");
    std::cin.rdbuf(input.rdbuf());
    // test
     std::unique_ptr<Event> example(new Event);
 	example->pick_player();
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);

}

TEST_CASE("Test Event pick_player - warrior") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n4");
    std::cin.rdbuf(input.rdbuf());
    // test
    std::unique_ptr<Event> example(new Event);
 	example->pick_player();
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);

}

TEST_CASE("Test Event pick_player - number in the name") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("l23\nlisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    std::unique_ptr<Event> example(new Event);
 	
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);
}

TEST_CASE("Test Event pick_player - letter in the choice") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\na\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    std::unique_ptr<Event> example(new Event);
 	
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);
}

TEST_CASE("Test Event pick_player - wrong number in the choice") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n9\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    std::unique_ptr<Event> example(new Event);
 	
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);
}

TEST_CASE("Test Event pick_player - character in the choice") {
	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n{li\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
    std::unique_ptr<Event> example(new Event);
 	
 	CHECK(static_cast<bool>(example));

    std::cin.rdbuf(orig);
}
TEST_CASE("Test Game start"){

    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());
    std::unique_ptr<Event> example(new Event);
    example->game_start();
    CHECK(buffer.str() == std::string(" Welcome to Nothing Woods\n Tutorial: \n\t1. After you choose your player you won't be able to change it\n\t2. When you're asked to choose between options that goes from 1 until 6, please press the corresponding number in your keyboard key\n\t3. When you're asked to choose between left and right, please press the L or R in your keyboard\n\t4. When you're asked to choosed between two answers, please press 1 or 2 in your keyboard\n\t5. During the game you will face battles against different enemies and encounter rooms where you will find objects and people to interact with\n\t6. Pay attention to all the information received from other characters because it will help you during your path\n\t7. At each turn of the battle you and your enemy each have one action, and you will have 6 options to choose from:\n\t\t1st You will attack using your first attack, is the only one you have when you start the game, you will throw a dice, and if\nthe value is greater than the enemy's armor, you will cause him damage, otherwise your attack won't reach the enemy\n\t\t2nd You will atack using your second attack, you will get this attack when you increase your level, you will be notified when you get it,\nso don't try to use it before, otherwise you will lose your action in the current turn\n\t\t3rd You will attack using your third attack, the same rule explained for the attack 2 is valid \n\t\t4rt You will try to dodge the enemy's attack, if you are able to dodge it, the enemy will suffer a damage correspoding to the class you have chosen, otherwise, if you fail to dodge, you will suffer a damage from the enemy\n\t\t5th You will try to use a potion to restore your life, and try do dodge the enemy's attack, and if you fail you will suffer a damage corresponding to your enemy's strengh, but you will still be able to use your potion\n\t\t6th You will try to  run from the battle, but if you can't be fast enough you will suffer damage from the enemy \n"));
    std::cout.rdbuf(sbuf);
}


 
