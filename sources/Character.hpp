#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>

#include "Point.hpp"

using namespace std;
namespace ariel
{
    class Character 
    {
    private:
        string _name;
        int _hitPoints;
        Point _location;

    public:
        Character(const string &name, const Point &location);
        virtual ~Character();
        bool isAlive();
        double distance(const Character *character);
        void hit(int damage);
        string getName();
        Point getLocation();
        virtual string print()const;

        int getHitPoints();

        friend std::ostream& operator<<(std::ostream &output, const Character &character)
        {
            output << character.print();
            return output;
        }
    };

    class Cowboy : public Character
    {
    public:
        const int numOfBullets = 6;
        Cowboy(const string &name, const Point &location);
        virtual ~Cowboy();

        void shoot(Character *enemy);
        bool hasboolets();
        void reload();
    };

    class Ninja : public Character
    {
    protected:
    public:
        int _speed;
        Ninja(const string &name, const Point &location);
        virtual ~Ninja(); 
        void move(Character *enemy);
        void slash(Character *enemy);

        int getSpeed();
    };

    class YoungNinja : public Ninja
    {
    public:
        YoungNinja(const string &name, const Point &location); // speed 100
        virtual ~YoungNinja();
    };

    class TrainedNinja : public Ninja
    {
    public:
        TrainedNinja(const string &name, const Point &location); // speed 120
        virtual ~TrainedNinja();
    };

    class OldNinja : public Ninja
    {
    public:
        OldNinja(const string &name, const Point &location); // speed 150
        virtual ~OldNinja();
    };

}
#endif