#include "doctest.h"

#include "event_interaction.hpp"

#include <iostream> 
#include <sstream>
#include <string>
#include <memory>

TEST_CASE("Test Event_interaction constructor - Life elixir") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(0));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Xp room") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(1));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Life potion 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(2));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Life fairy 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(3));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Life fairy 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(4));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Life fairy 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(5));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Life fairy 7") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(6));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Life elixir 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(7));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Left or right 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(8));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Left or right 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(9));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Left or right 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(10));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Left or right 4") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(11));
 	
 	CHECK(static_cast<bool>(example));	
}

TEST_CASE("Test Event_interaction constructor - Tip room true ") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(12));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Tip room pitfall") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(13));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Tip room lie") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(14));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Tip room help") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(15));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - NPC damage 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(16));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - NPC damage 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(17));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Mimic death") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(18));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Pitfall") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(19));
 	
 	CHECK(static_cast<bool>(example));	
}

TEST_CASE("Test Event_interaction constructor - Abism death") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(20));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - History 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(21));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - History 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(22));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - History 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(23));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - History 4") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(24));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Quiz 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(25));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Quiz 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(26));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction constructor - Quiz 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(27));
 	
 	CHECK(static_cast<bool>(example));	
}
TEST_CASE("Test Event_interaction id - Life elixir") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(0));
    
    boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 0);	
}
TEST_CASE("Test Event_interaction id - Xp room") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(1));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 1);		
}
TEST_CASE("Test Event_interaction id - Life potion 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(2));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 2);		
}
TEST_CASE("Test Event_interaction id - Life fairy 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(3));
 	
 	 boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 3);	
}
TEST_CASE("Test Event_interaction id - Life fairy 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(4));
 	
 	 boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 4);	
}
TEST_CASE("Test Event_interaction id - Life fairy 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(5));
 	
 	 boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 5);		
}
TEST_CASE("Test Event_interaction id - Life fairy 7") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(6));
 	
 	 boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 6);	
}
TEST_CASE("Test Event_interaction id- Life elixir 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(7));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 7);	
}
TEST_CASE("Test Event_interaction id - Left or right 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(8));
 	
 	 boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 8);	
}
TEST_CASE("Test Event_interaction id- Left or right 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(9));
 	
 	 boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 9);	
}
TEST_CASE("Test Event_interaction id- Left or right 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(10));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 10);	
}
TEST_CASE("Test Event_interaction id- Left or right 4") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(11));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 11);	
}
TEST_CASE("Test Event_interaction id - Tip room true ") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(12));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 12);	
}
TEST_CASE("Test Event_interaction id - Tip room pitfall") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(13));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 13);	
}
TEST_CASE("Test Event_interaction id - Tip room lie") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(14));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 14);	
}
TEST_CASE("Test Event_interaction id- Tip room help") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(15));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 15);		
}
TEST_CASE("Test Event_interaction id - NPC damage 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(16));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 16);	
}
TEST_CASE("Test Event_interaction id - NPC damage 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(17));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 17);	
}
TEST_CASE("Test Event_interaction id- Mimic death") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(18));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 18);	
}
TEST_CASE("Test Event_interaction id - Pitfall") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(19));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 19);	
}

TEST_CASE("Test Event_interaction id - Abism death") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(20));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 20);	
}
TEST_CASE("Test Event_interaction id - History 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(21));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 21);
}
TEST_CASE("Test Event_interaction id - History 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(22));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 22);	
}
TEST_CASE("Test Event_interaction id - History 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(23));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 23);
}
TEST_CASE("Test Event_interaction id - History 4") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(24));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 24);	
}
TEST_CASE("Test Event_interaction id - Quiz 1") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(25));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 25);
}
TEST_CASE("Test Event_interaction id - Quiz 2") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(26));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 26);
}
TEST_CASE("Test Event_interaction id - Quiz 3") {
   
    std::unique_ptr<Event_interaction> example(new Event_interaction(27));
 	
 	boost::variant<Battle_room*, Basic_room*> v = example.get()->return_room()->get_room(); 
	int id = boost::get<Basic_room*>(v)->get_id();
 	CHECK( id == 27);
}
