#include "deck.h"
#include "card.h"
#include <iostream>
using namespace std;

Deck::Deck() {
    Card tempCard = Card();
    for (int i = 1; i <= 13; i++) {
        if (i == 10) {
            tempCard = Card('T','S');
        }

        else if (i == 11) {
            tempCard = Card('J', 'S');
        }

        else if (i == 12) {
            tempCard = Card('Q', 'S');
        }

        else if (i == 13) {
            tempCard = Card('K', 'S');
        }

        else if (i == 1) {
            tempCard = Card('A', 'S');
        }
        else {
            string iString = to_string(i);
            tempCard = Card(char(i), 'S');  
        }
        maindeck.push_back(tempCard);
    }
}

void Deck::newDeck() {
    
}

Card Deck::deal() {

}

void Deck::shuffle() {

}

bool Deck::isEmpty() {

}

void Deck::show() {
   /* for (int i = 0; i < maindeck.size(); i++) {
        cout << maindeck.at(i) << ' ';
    }*/
}

int main() {
    /*Deck testDeck;
    cout << testDeck<0> << endl; */
}