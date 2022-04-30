#include <iostream>
#include "Ambassador.hpp"
#include "Player.hpp"
using namespace std;

namespace coup{
    Ambassador::Ambassador(Game& game, string name): Player(game, name){
        this->player_role = "Ambassador";
    }
    void Ambassador::transfer(Player &from_player, Player &to_player){
        if(!this->game->turn().compare(this->name)){
            throw runtime_error("not your turn");
        }
        if(from_player.coins()<=0){
             throw runtime_error("doesnt have engoth money");
        }else{
            from_player.coins_count-=1;
            this->last_action = "transfer";
            to_player.coins_count+=1;
            this->game->t+=1; //Next turn
        }
    }
    void Ambassador::block(Player &player){
        if(!player.player_role.compare("Captain")){
            throw runtime_error("Ambassador can block only Captain");
        }
        if(!player.last_action.compare("steal")){
            throw runtime_error("You missed the block option");
        }
        player.blocked();
    }
}