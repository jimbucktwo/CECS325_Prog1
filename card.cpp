#include "card.h"
using namespace std;

class Card {
    public:
        char rank;
        char suit;
        Card() {
            rank = 'O';
            suit = ' ';
        }

        Card(char r, char s) {
            char rank = r;
            char suit = s;
        }

        int getValue() {
            if (Card().rank == 'J' || Card().rank == 'Q' || Card().rank == 'K' || Card().rank == 'T') 
                return 10;
            else if (Card().rank == 'A')
                return 1;
            else
                return int(Card().rank);

        }
};

int main() {
    Card firstCard();
    return 0;
}