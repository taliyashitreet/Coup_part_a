#include <iostream>
#include "Player.hpp"
using namespace std;

namespace coup{
    class Captain: public Player{
        public:
            Captain(Game& game, string name);
            void block(Player &player); // block another Captain steal
            void steal(Player &player); // steal 2 coins from other player
            void blocked();
            ~Captain(){}
    };
}