#include "doctest.h"
#include "sources/Point.hpp"
#include "sources/Character.hpp"


using namespace std;
namespace ariel
{

  TEST_CASE("Test character creation and getters")
  {
    Point location(1.0, 2.0);
    Cowboy cowboy("Lucky", location);
    CHECK_EQ(cowboy.getName(), "Lucky");

    CHECK_EQ(cowboy.getLocation(), Point(1, 2));
    CHECK_EQ(cowboy.isAlive(), true);
    CHECK_EQ(cowboy.hasboolets(), true);
    CHECK_EQ(cowboy.getHitPoints(), 11);

    location = Point(3, 4);
    YoungNinja ninja("Naruto", location);
    CHECK_EQ(ninja.getName(), "Naruto");
    CHECK_EQ(ninja.getLocation(), Point(3, 4));
    CHECK_EQ(ninja.isAlive(), true);
    CHECK_EQ(ninja.getHitPoints(), 100);
    CHECK_EQ(ninja.getSpeed(), 14);

    // Invalid location (negative coordinates)
    CHECK_THROWS(Point(-1.0, -2.0));
  }

  TEST_CASE("Test character hit points and isAlive")
  {
    Point location(1, 2);
    Cowboy cowboy("Lucky", location);
    CHECK_EQ(cowboy.isAlive(), true);
    cowboy.hit(10);
    CHECK_EQ(cowboy.isAlive(), true);
    cowboy.hit(2);
    CHECK_EQ(cowboy.isAlive(), false);

    location = Point(3, 4);
    YoungNinja ninja("Naruto", location);
    CHECK_EQ(ninja.isAlive(), true);
    ninja.hit(80);
    CHECK_EQ(ninja.isAlive(), true);
    ninja.hit(40);
    CHECK_EQ(ninja.isAlive(), false);
  }

  TEST_CASE("Test cowboy shooting")
  {
    Point loc1(0, 0), loc2(3, 4);
    Cowboy cowboy("Lucky", loc1), cowboy2("Luk", loc2);
    cowboy.shoot(&cowboy2);
    CHECK_EQ(cowboy2.getHitPoints(), 11);
    CHECK_EQ(cowboy.hasboolets(), false);
    cowboy.reload();
    CHECK_EQ(cowboy.hasboolets(), true);
  }

  TEST_CASE("Test ninja moving and slashing")
  {
    Point loc1(0, 0), loc2(1, 0);
    YoungNinja ninja("Naruto", loc1);
    TrainedNinja ninja2("Sasuke", loc2);
    ninja.move(&ninja2);
    CHECK_EQ(ninja.getLocation(), loc2);
    ninja2.move(&ninja);
    CHECK_EQ(ninja2.getLocation(), loc1);
    ninja2.slash(&ninja);
    CHECK_EQ(ninja.getHitPoints(), 70);
    ninja2.slash(&ninja);
    CHECK_EQ(ninja.getHitPoints(), 70);
  }


}