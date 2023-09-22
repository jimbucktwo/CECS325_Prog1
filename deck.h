#include "card.h"

class Deck 
{
    public:
        Deck();
        void newDeck();
        Card deal();
        void shuffle();
        bool isEmpty();
        void show();

};