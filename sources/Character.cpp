#include <iostream>
#include "Character.hpp"

using namespace std;
namespace ariel
{
    const double a = 0.00;
    const Point b(1, 2);
    Character::Character(const string &name, const Point &location) : _name(name), _location(location) {}
    Character::~Character(){}
    bool Character::isAlive() { return true; }
    double Character::distance(const Character *character) { return a; }
    void Character::hit(int damage) {}
    string Character::getName() { return ""; }
    Point Character::getLocation() { return b; }
    string Character::print() const { return ""; }

    int Character::getHitPoints() { return 1; }

    Cowboy::Cowboy(const string &name, const Point &location) : Character(name, location) {} // bullets
    Cowboy::~Cowboy(){}
    void Cowboy::shoot(Character *enemy) {}
    bool Cowboy::hasboolets() { return true; }
    void Cowboy::reload() {}

    Ninja::Ninja(const string &name, const Point &location) : Character(name, location) {} // speed
    Ninja::~Ninja(){}
    void Ninja::move(Character *enemy) {}
    void Ninja::slash(Character *enemy) {}

    int Ninja::getSpeed() { return 100; }

    YoungNinja::YoungNinja(const std::string &name, const Point &location) : Ninja(name, location) {} // speed 100
    YoungNinja::~YoungNinja(){}
    TrainedNinja::TrainedNinja(const string &name, const Point &location) : Ninja(name, location) {}  // speed 120
    TrainedNinja::~TrainedNinja(){}
    OldNinja::OldNinja(const string &name, const Point &location) : Ninja(name, location) {}      // speed 150
    OldNinja::~OldNinja(){}
};
