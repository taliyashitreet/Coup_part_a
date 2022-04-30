#include <iostream>
#include "Duke.hpp"
using namespace std;

namespace coup{
     Duke::Duke(Game& game, string name): Player(game, name){
         this->player_role = "Duke";
     }
            void Duke::tax(){
                if (!this->game->turn().compare(this->name)){
                        throw runtime_error("not your turn!");
                }
                this->coins_count+=3;
                this->game->t+=1;
            } 
            void Duke::block(Player &player){
                if(!player.last_action.compare("foreign_aid")){
                    throw runtime_error("you can't block this action");
                }
                player.coins_count-=2;

            } 
}