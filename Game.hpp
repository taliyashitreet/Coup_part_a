#include <iostream>
#include <vector>
#pragma once
using namespace std;

namespace coup{
    class Game{
        public:
            vector<string> _players;
           // int player_turn; 
            vector<string> active_players; //The names of the players currently active in the game
        

            string turn(); // the player whose turn it is
            vector<string> players(){
                return this->_players;
            }
            string winner();
    };
}