#include <iostream>
#include "Assassin.hpp"
using namespace std;

namespace coup{
     

    Assassin::Assassin(Game& game, string name): Player(game, name){
         this->player_role = "Assassin";
    }
    void Assassin::coup(Player &player){
         if(!this->game->turn().compare(this->name)){
            throw runtime_error("not your turn");
        }
        if(this->coins()<3){
             throw runtime_error("havan't enough money");
        }
        this->last_couped = &player; //save this player name, if Assassin will be block
        player.is_active=false;
        this->last_action = "coup";
        
    }
     void Assassin::blocked(){
     this->game->add_player(this->last_couped);
    }
    
    }