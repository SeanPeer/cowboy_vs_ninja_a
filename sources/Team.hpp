#ifndef TEAM_HPP
#define TEAM_HPP

#include "Point.hpp"
#include "Character.hpp"
#include <vector>

using namespace std;
namespace ariel{
    class Team 
    {
    private:
        vector<Character> crew;
        Character* _leader;

    public:
        Team(Character* leader);
        ~Team();

        void add(Character *character);
        void attack(Team *enemy_team);
        int stillAlive();
        void print();
        

    };
    

    
}

#endif