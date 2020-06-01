#include "doctest.h"

#include "room.hpp"
#include "enum_type.hpp"
#include "lucky.hpp"
#include "mage.hpp"
#include "ranger.hpp"
#include "warrior.hpp"
#include "boss.hpp"
#include "gnome.hpp"
#include "skeleton.hpp"
#include "slime.hpp"
#include "pumpkin.hpp"
#include "wolf.hpp"
#include "battle_room.hpp"
#include "basic_room.hpp"
#include "pitfall_random.hpp"
#include "abism_death_room.hpp"
#include "dmg_npc.hpp"
#include "mimic_death_room.hpp"
#include "life_elixir.hpp"
#include "life_fairy.hpp"
#include "life_potion.hpp"
#include "history_room.hpp"
#include "left_right.hpp"
#include "quiz_room.hpp"
#include "tip_room.hpp"
#include "xp_room.hpp"
#include <memory>
#include <typeinfo>

TEST_CASE("Test Room constructor -  battle slime") {
    Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("Haizi")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - battle boss") {
    Enemy *enemy0 = new Boss();
	Player *player0 = new Lucky(std::string("Yanzi")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - battle gnome") {
    Enemy *enemy0 = new Gnome();
	Player *player0 = new Mage(std::string("Danxin")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - interaction elixir") {
	Player *player0 = new Warrior(std::string("Houze")); 
	Basic_room *healer0 = new Life_elixir(player0);
    std::unique_ptr<Room> example(new Room(healer0));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - interaction left right") {
	Player *player0 = new Ranger(std::string("Yinqing")); 
	Basic_room *basic0 = new Left_right(player0);
    std::unique_ptr<Room> example(new Room(basic0));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - interaction tip room") {
	Player *player0 = new Lucky(std::string("Kulhu")); 
	Basic_room *basic0 = new Tip_room(player0, 1);
    std::unique_ptr<Room> example(new Room(basic0));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - interaction damage") {
	Player *player0 = new Warrior(std::string("Kekele")); 
	Basic_room *basic0 = new Dmg_npc(player0, 1);
    std::unique_ptr<Room> example(new Room(basic0));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room constructor - interaction mimic death room") {
	Player *player0 = new Ranger(std::string("Xiayao")); 
	Basic_room *basic0 = new Mimic_death_room(player0);
    std::unique_ptr<Room> example(new Room(basic0));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Room type -  battle slime") {
    Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("Haizi")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
    bool r = false; 
    if( example.get()->get_type() == Type::BATTLE){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room type - battle boss") {
    Enemy *enemy0 = new Boss();
	Player *player0 = new Lucky(std::string("Yanzi")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
    bool r = false; 
    if( example.get()->get_type() == Type::BATTLE){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room type - battle gnome") {
    Enemy *enemy0 = new Gnome();
	Player *player0 = new Mage(std::string("Danxin")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
  	bool r = false; 
    if( example.get()->get_type() == Type::BATTLE){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room type - interaction elixir") {
	Player *player0 = new Warrior(std::string("Houze")); 
	Basic_room *healer0 = new Life_elixir(player0);
    std::unique_ptr<Room> example(new Room(healer0));
  	bool r = false; 
    if( example.get()->get_type() == Type::INTERACTION){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room constructor - interaction left right") {
	Player *player0 = new Ranger(std::string("Yinqing")); 
	Basic_room *basic0 = new Left_right(player0);
    std::unique_ptr<Room> example(new Room(basic0));
  	bool r = false; 
    if( example.get()->get_type() == Type::INTERACTION){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room type - interaction tip room") {
	Player *player0 = new Lucky(std::string("Kulhu")); 
	Basic_room *basic0 = new Tip_room(player0, 1);
    std::unique_ptr<Room> example(new Room(basic0));
  	bool r = false; 
    if( example.get()->get_type() == Type::INTERACTION){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room constructor - interaction damage") {
	Player *player0 = new Ranger(std::string("Kekele")); 
	Basic_room *basic0 = new Dmg_npc(player0,1);
    std::unique_ptr<Room> example(new Room(basic0));
  	bool r = false; 
    if( example.get()->get_type() == Type::INTERACTION){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room type - interaction mimic death room") {
	Player *player0 = new Lucky(std::string("xiayao")); 
	Basic_room *basic0 = new Mimic_death_room(player0);
    std::unique_ptr<Room> example(new Room(basic0));
  	bool r = false; 
    if( example.get()->get_type() == Type::INTERACTION){
    	r = true;
    }

 	CHECK(r);
}
TEST_CASE("Test Room return room -  battle slime") {
    Enemy *enemy0 = new Slime(1);
	Player *player0 = new Warrior(std::string("Haizi")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
    boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Battle_room*>(v));
}
TEST_CASE("Test Room type - battle boss") {
    Enemy *enemy0 = new Boss();
	Player *player0 = new Lucky(std::string("Yanzi")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
    boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Battle_room*>(v));
}
TEST_CASE("Test Room type - battle gnome") {
    Enemy *enemy0 = new Gnome();
	Player *player0 = new Mage(std::string("Danxin")); 
    std::unique_ptr<Room> example(new Room(player0, enemy0, 28));
  	boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Battle_room*>(v));
}
TEST_CASE("Test Room type - interaction elixir") {
	Player *player0 = new Warrior(std::string("Houze")); 
	Basic_room *healer0 = new Life_elixir(player0);
    std::unique_ptr<Room> example(new Room(healer0));
  	boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Basic_room*>(v));
}
TEST_CASE("Test Room constructor - interaction left right") {
	Player *player0 = new Ranger(std::string("Yinqing")); 
	Basic_room *basic0 = new Left_right(player0);
    std::unique_ptr<Room> example(new Room(basic0));
  	boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Basic_room*>(v));
}
TEST_CASE("Test Room type - interaction tip room") {
	Player *player0 = new Lucky(std::string("Kulhu")); 
	Basic_room *basic0 = new Tip_room(player0, 1);
    std::unique_ptr<Room> example(new Room(basic0));
  	boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Basic_room*>(v));
}
TEST_CASE("Test Room constructor - interaction damage") {
	Player *player0 = new Ranger(std::string("Kekele")); 
	Basic_room *basic0 = new Dmg_npc(player0,1);
    std::unique_ptr<Room> example(new Room(basic0));
  	boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Basic_room*>(v));
}
TEST_CASE("Test Room type - interaction mimic death room") {
	Player *player0 = new Lucky(std::string("xiayao")); 
	Basic_room *basic0 = new Mimic_death_room(player0);
    std::unique_ptr<Room> example(new Room(basic0));
  	boost::variant<Battle_room*, Basic_room*> v = example->get_room(); 
   
 	CHECK( boost::get<Basic_room*>(v));
}