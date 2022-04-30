#include <iostream>
#include "Contessa.hpp"
#include "Assassin.hpp"
using namespace std;

namespace coup{
    class Assassin;
    Contessa::Contessa(Game& game, string name): Player(game, name){
         this->player_role = "Contessa";
}
void Contessa::block(Player &player){
    if(!player.player_role.compare("Assassin")){
        throw runtime_error("Contessa can block only Assassin");
    }
    if(!player.last_action.compare("coup")){
        throw runtime_error("You missed the block option");
    }
    player.blocked();   
}
}
