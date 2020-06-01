#include "doctest.h"

#include "event_battle.hpp"

#include <iostream> 
#include <sstream>
#include <string>
#include <memory>

TEST_CASE("Test Event_battle constructor - Slime") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(0));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_battle constructor - Pumpkin") { 
    
  std::unique_ptr<Event_battle> example(new Event_battle(1));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle constructor - Skeleton") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(2));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_battle constructor - Gnome") { 
    
  std::unique_ptr<Event_battle> example(new Event_battle(3));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle constructor - Wolf") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(4));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_battle constructor - Slime updgrated") { 
    
  std::unique_ptr<Event_battle> example(new Event_battle(5));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle constructor - Pumpkin updgrated") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(6));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_battle constructor - Boss 1") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(7));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle constructor - Boss 2") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(8));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle constructor - Boss 3 v1") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(9));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle constructor - Boss 3 v2") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(10));
 	
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test Event_battle id - Slime") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(0));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 28);  
}
TEST_CASE("Test Event_battle id - Pumpkin") { 
    
  std::unique_ptr<Event_battle> example(new Event_battle(1));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 29);
}
TEST_CASE("Test Event_battle id - Skeleton") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(2));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 30); 
}
TEST_CASE("Test Event_battle id - Gnome") { 
    
  std::unique_ptr<Event_battle> example(new Event_battle(3));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 31);
}
TEST_CASE("Test Event_battle id - Wolf") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(4));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 32);  
}
TEST_CASE("Test Event_battle id - Slime updgrated") { 
    
  std::unique_ptr<Event_battle> example(new Event_battle(5));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 33);
}
TEST_CASE("Test Event_battle id - Pumpkin updgrated") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(6));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 34);
}
TEST_CASE("Test Event_battle id - Boss 1") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(7));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 35);
}
TEST_CASE("Test Event_battle id - Boss 2") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(8));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 36);
}
TEST_CASE("Test Event_battle id - Boss 3 v1") { 
   
  std::unique_ptr<Event_battle> example(new Event_battle(9));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 37);
}
TEST_CASE("Test Event_battle id - Boss 3  v2") {
   
  std::unique_ptr<Event_battle> example(new Event_battle(10));
  
  boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
  int id = boost::get<Battle_room*>(v)->get_id();
  CHECK( id == 38); 
}
TEST_CASE("Test Event_battle set_player") { 
   	Player *player0 = new Warrior(std::string("Haizi")); 

   	Event_battle*example =(new Event_battle(10));
  	example->set_player(player0);
	CHECK(example->get_player() != nullptr);
	delete example;
}
TEST_CASE("Test Event_battle set_player using pick_player") { 
   	Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
 	e->pick_player(); 	
    std::cin.rdbuf(orig);

   	Event_battle*example =(new Event_battle(10));
  	example->set_player(e->get_player());
	CHECK(example->get_player() != nullptr);
}

TEST_CASE("Test Event_battle incialize room") { 
   	Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
 	e->pick_player(); 	
    std::cin.rdbuf(orig);

   	Event_battle*example =(new Event_battle(10));
  	example->set_player(e->get_player());
  	Room *a = example->return_room();
	CHECK(a != nullptr);
}