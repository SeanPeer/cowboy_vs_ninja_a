#include <iostream>
#include "Point.hpp"
#include "Team.hpp"
#include "Character.hpp"

using namespace std;
namespace ariel
{

    Team::Team(Character* leader) : _leader(leader) {}
    Team::~Team(){}

    void Team::add(Character *character){}
    void Team::attack(Team *enemy_team){}
    int Team::stillAlive(){return 0;}
    void Team::print(){}

}