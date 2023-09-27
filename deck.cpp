// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 1 Solitaire
// 09/26/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
#include "deck.h"
#include "card.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;


// deck constructor
Deck::Deck() {
    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'S';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'S';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'S';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'S';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'S';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'S'; 
        }
        maindeck.push_back(tempCard);
    }

    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'H';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'H';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'H';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'H';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'H';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'H'; 
        }
        maindeck.push_back(tempCard);
    }

    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'D';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'D';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'D';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'D';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'D';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'D'; 
        }
        maindeck.push_back(tempCard);
    }

    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'C';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'C';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'C';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'C';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'C';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'C'; 
        }
        maindeck.push_back(tempCard);
    }
}

// new deck method that creates a newly made ordered deck
void Deck::newDeck() {
    maindeck.clear();
    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'S';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'S';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'S';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'S';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'S';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'S'; 
        }
        maindeck.push_back(tempCard);
    }

    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'H';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'H';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'H';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'H';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'H';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'H'; 
        }
        maindeck.push_back(tempCard);
    }

    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'D';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'D';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'D';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'D';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'D';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'D'; 
        }
        maindeck.push_back(tempCard);
    }

    for (int i = 1; i <= 13; i++) {
        Card tempCard = Card();
        if (i == 10) {
            tempCard.rank = 'T';
            tempCard.suit = 'C';
        }

        else if (i == 11) {
            tempCard.rank = 'J';
            tempCard.suit = 'C';
        }

        else if (i == 12) {
            tempCard.rank = 'Q';
            tempCard.suit = 'C';
        }

        else if (i == 13) {
            tempCard.rank = 'K';
            tempCard.suit = 'C';
        }

        else if (i == 1) {
            tempCard.rank = 'A';
            tempCard.suit = 'C';
        }
        else {;
            tempCard.rank = '0' + i;
            tempCard.suit = 'C'; 
        }
        maindeck.push_back(tempCard);
    }
}

// deals one card and removes it from the deck
Card Deck::deal() {
    Card cardDealt;
    if (maindeck.size() > 0) {
        cardDealt = maindeck.back();
        maindeck.pop_back();
    }
    return cardDealt;
}

//shuffles the deck
void Deck::shuffle() {
    srand (time(0));
    for (int i = 0; i < 52; i ++){

        int randNum = rand() % 52;
        int randNum2 = rand() % 52;
        swap(maindeck[randNum], maindeck[randNum2]);
    }
}

// returns whether the deck is empty or not
bool Deck::isEmpty() {
    if (maindeck.size() == 0) return true;
    return false;
}

// displays the deck
void Deck::show() {
   for (int i = 0; i < maindeck.size(); i++) {
        if (i%13 == 0) {
            cout << endl;
        }
        maindeck[i].show();
    }
}
