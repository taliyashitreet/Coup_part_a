#include <iostream>
#include "Duke.hpp"
using namespace std;

namespace coup{
     Duke::Duke(Game game, string name){
         this->game =game;
         this->name = name;
         this->coins_count = 0;
         this->player_role = "Duke";
         this->game._players.push_back(name);
     }
            void Duke::tax(){

            } 
            void Duke::block(Player player){

            } 
}