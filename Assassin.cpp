#include <iostream>
#include "Assassin.hpp"
using namespace std;

namespace coup{
    Assassin::Assassin(Game& game, string name){
         this->game =game;
         this->name = name;
         this->coins_count = 0;
         this->player_role = "Assassin";
         this->game._players.push_back(name);
    }
    void Assassin::coup(Player player){
    }
    
    }