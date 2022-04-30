#include <iostream>
#include "Player.hpp"
using namespace std;

namespace coup{
    Player::Player(Game &game, string name){ 
         this->game =&game;
         this->game->add_player(this);
         this->name = name;
         this->coins_count = 0;
         this->is_active=true;
    }
    void Player::income(){
         if(!this->game->turn().compare(this->name)){
            throw runtime_error("not your turn");
        }
        this->coins_count+=1;
        this->game->t+=1;
    }
    void Player::foreign_aid(){
        if(!this->game->turn().compare(this->name)){
            throw runtime_error("not your turn");
        }
        this->coins_count+=2;
        this->game->t+=1;

    }
    int Player::coins(){
        return this->coins_count;
    }
}