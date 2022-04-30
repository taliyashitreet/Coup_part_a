#include <iostream>
#include "Captain.hpp"
using namespace std;

namespace coup{
    Captain::Captain(Game& game, string name): Player(game, name){
         this->player_role = "Captain";
    }
    void Captain::block(Player &player){
            if(!player.player_role.compare("Captain")){
            throw runtime_error("Ambassador can block only Captain");
        }
        if(!player.last_action.compare("steal")){
            throw runtime_error("You missed the block option");
        }
        player.blocked();
    }
    void Captain::steal(Player &player){
        if(!this->game->turn().compare(this->name)){
            throw runtime_error("not your turn");
        }
        if(player.coins()<2){
            throw runtime_error("doesnt have engoth money");
        }
        this->coins_count+=2;
        this->game->t+=1;
    }
    void Captain::blocked(){
        if(!this->last_action.compare("steal") || !this->last_action.compare("foreign_aid") ){
            throw invalid_argument("you cant block this action");
        }
        this->coins_count-=2;
    }
}