#include "doctest.h"

#include "inicializer.hpp"
#include <memory>
#include <sstream>

TEST_CASE("Test Inicializer constructor") {

	Event *e = new Event();
    std::unique_ptr<Inicializer>example(new Inicializer(e));
 
 	CHECK(static_cast<bool>(example));
}
TEST_CASE("Test inicialize Event_battle as Event object"){
	Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
 	e->pick_player(); 	
    std::cin.rdbuf(orig);

   	Event *example =(new Event_battle(10));
  	example->set_player(e->get_player());

 	CHECK(example != nullptr);
 	delete example;
}
TEST_CASE("Test vector Events"){
	
  Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
 	e->pick_player(); 	
    std::cin.rdbuf(orig);

   	Event *example =(new Event_battle(10));
  	example->set_player(e->get_player());

	std::vector<Event*> c;
    c.push_back(example);
 	bool r=c[0]->get_game_on();
 	CHECK(r == false);
 	delete example;
}
TEST_CASE("Test get_room using boost"){
	
  Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
 	e->pick_player(); 	
    std::cin.rdbuf(orig);

   	Event *example =(new Event_battle(0));
  	example->set_player(e->get_player());

	std::vector<Event*> c;

 	boost::variant<Battle_room*, Basic_room*> a = example->return_room()->get_room();
 	short r = boost::get<Battle_room*>(a)->get_id();

 	CHECK(r == 28 );
}

TEST_CASE("Test get_room using vector"){
	
  Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
    std::istringstream input("lisi\n1");
    std::cin.rdbuf(input.rdbuf());
    // test
 	e->pick_player(); 	
    std::cin.rdbuf(orig);

   	Event *example =(new Event_battle(0));
  	example->set_player(e->get_player());

	std::vector<Event*> c;
    //std::unique_ptr<Inicializer> ini(new Inicializer(c,e));
    c.push_back(example);
 	boost::variant<Battle_room*, Basic_room*> a = c[0]->return_room()->get_room();
 	short r = boost::get<Battle_room*>(a)->get_id();
    	
 	CHECK(r == 28 );
}
TEST_CASE("Test inicialize_objects - event pointer") {
  
  Event *e = new Event();

  std::streambuf* orig = std::cin.rdbuf();
  std::istringstream input("lisi\n1");
  std::cin.rdbuf(input.rdbuf());  
  // test
  e->pick_player();   
  std::cin.rdbuf(orig);

  std::vector<Event*> *choices;
  std::unique_ptr<Inicializer>example(new Inicializer(e));
  example.get()->inicialize_objects();

  choices = example->get_choices();
  std::vector<Event*> &v = *choices;
  bool r = false;
  if(v[0] != nullptr){
    r = true;
  }
  
  CHECK(r);
}
TEST_CASE("Test inicialize_objects - room pointer") {
	
  Event *e = new Event();

	std::streambuf* orig = std::cin.rdbuf();
  std::istringstream input("lisi\n1");
  std::cin.rdbuf(input.rdbuf());  
  // test
 	e->pick_player(); 	
  std::cin.rdbuf(orig);

	std::vector<Event*> *choices;
  std::unique_ptr<Inicializer>example(new Inicializer(e));
 	example.get()->inicialize_objects();

  choices = example->get_choices();
  std::vector<Event*> &v = *choices;
  bool r = false;
 	if(v[0]->return_room() != nullptr){
    r = true;
 	}
 	CHECK(r);
}
TEST_CASE("Test inicialize_next_turn left") {
  
  Event *e = new Event();

  std::streambuf* orig = std::cin.rdbuf();
  std::istringstream input("lisi\n1");
  std::cin.rdbuf(input.rdbuf());  
  // test
  e->pick_player();   
  std::cin.rdbuf(orig);

  std::vector<Event*> *choices;
  std::unique_ptr<Inicializer>example(new Inicializer(e));
  example.get()->inicialize_objects();
  example.get()->inicialize_next_turn();

  choices = example->get_choices();
  std::vector<Event*> &v = *choices;
  bool r = false;
  if(v[0]->get_next_class().first != nullptr){
    r = true;
  }
  CHECK(r);
}
TEST_CASE("Test inicialize_next_turn right") {
  
  Event *e = new Event();

  std::streambuf* orig = std::cin.rdbuf();
  std::istringstream input("lisi\n1");
  std::cin.rdbuf(input.rdbuf());  
  // test
  e->pick_player();   
  std::cin.rdbuf(orig);

  std::vector<Event*> *choices;
  std::unique_ptr<Inicializer>example(new Inicializer(e));
  example.get()->inicialize_objects();
  example.get()->inicialize_next_turn();

  choices = example->get_choices();
  std::vector<Event*> &v = *choices;
  bool r = false;
  if(v[0]->get_next_class().second != nullptr){
    r = true;
  }
  CHECK(r);
}
TEST_CASE("Test configure id room in vector choices") {
  
  Event *e = new Event();

  std::streambuf* orig = std::cin.rdbuf();
  std::istringstream input("lisi\n1");
  std::cin.rdbuf(input.rdbuf());  
  // test
  e->pick_player();   
  std::cin.rdbuf(orig);

  std::vector<Event*> *choices;
  std::unique_ptr<Inicializer>example(new Inicializer(e));
  example.get()->inicialize_objects();
  example.get()->inicialize_next_turn();

  choices = example->get_choices();
  std::vector<Event*> &v = *choices;
  int id;
  boost::variant<Battle_room*, Basic_room*> k = v[0]->return_room()->get_room(); 
  id = boost::get<Basic_room*>(k)->get_id();
  CHECK( id == 0);
}
TEST_CASE("Test configure id NEXT room in vector choices") {
  
  Event *e = new Event();

  std::streambuf* orig = std::cin.rdbuf();
  std::istringstream input("lisi\n1");
  std::cin.rdbuf(input.rdbuf());  
  // test
  e->pick_player();   
  std::cin.rdbuf(orig);

  std::vector<Event*> *choices;
  std::unique_ptr<Inicializer>example(new Inicializer(e));
  example.get()->inicialize_objects();
  example.get()->inicialize_next_turn();

  choices = example->get_choices();
  std::vector<Event*> &v = *choices;
  int id;
  boost::variant<Battle_room*, Basic_room*> k = v[8]->return_room()->get_room(); 
  id = boost::get<Basic_room*>(k)->get_next_turn().first;
  CHECK( id == 29);
}