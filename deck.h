// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 1 Solitaire
// 09/26/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "card.h"
#include <vector>
#ifndef deck.h
#define deck.h
#include <iostream>
using namespace std;

// deck header to list attributes and methods
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