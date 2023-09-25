#include "card.h"
#include <vector>
#ifndef deck.h
#define deck.h
#include <iostream>
using namespace std;


class Deck 
{
    public:
        vector<Card> maindeck;
        Deck();
        void newDeck();
        Card deal();
        void shuffle();
        bool isEmpty();
        void show();

};

#endif