// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 1 Solitaire
// 09/26/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include "card.h"
#include <iostream>
using namespace std;

// constructor
Card::Card() {
    rank = 'X';
    suit = 'X';
}

//overloaded constructor
Card::Card(char r, char s) {
    rank = r;
    suit = s;
}

//gets the numeric value of the card
int Card::getValue() {
    if (rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T') 
        return 10;
    else if (rank == 'A')
        return 1;
    else
        return int(rank) - int('0');
}

//shows the card
void Card::show() {
    if (rank == 'T')
        cout << "10" << suit << " ";
    else    
        cout << rank << suit << " ";
}

