#include <iostream>
#include "Contessa.hpp"
using namespace std;

namespace coup{
    Contessa::Contessa(Game game, string name){
         this->game =game;
         this->name = name;
         this->coins_count = 0;
         this->player_role = "Contessa";
         this->game._players.push_back(name);
}
void Contessa::block(Player player){
}
}
