#include "card.h"
#include <iostream>
using namespace std;


Card::Card() {
    rank = 'X';
    suit = 'X';
}

Card::Card(char r, char s) {
    rank = r;
    suit = s;
}

int Card::getValue() {
    if (rank == 'J' || rank == 'Q' || rank == 'K' || rank == 'T') 
        return 10;
    else if (rank == 'A')
        return 1;
    else
        return int(rank);
}

void Card::show() {
    if (rank == 'T')
        cout << "10" << suit << endl;
    else    
        cout << rank << suit << endl;
}

