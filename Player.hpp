

#include <iostream>
#include "Game.hpp"
#pragma once
using namespace std;

namespace coup{
    class Player{
        protected:
            Game game; 
            string name;
            int coins_count; //How many coins does he have
            string player_role; 
        public:
            void income(); // Take a coin from the pile
            void foreign_aid(); //Earns the player two coins
            void coup(Player); //Which player he decided to dismiss
            string role(); // What is its role
            int coins(); //How many coins does a player have
    };
}