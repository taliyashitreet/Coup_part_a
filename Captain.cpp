#include <iostream>
#include "Captain.hpp"
using namespace std;

namespace coup{
    Captain::Captain(Game& game, string name){
         this->game =game;
         this->name = name;
         this->coins_count = 0;
         this->player_role = "Captain";
         this->game._players.push_back(name);
    }
    void Captain::block(Player player){
    }
    void Captain::steal(Player player){
        
    }
}