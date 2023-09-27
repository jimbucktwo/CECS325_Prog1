// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 1 Solitaire
// 09/26/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <stdlib.h>
#include <iostream>
using namespace std;

class Card
{
    public:
        char rank;
        char suit;
        Card();
        Card(char r, char s);
        int getValue();
        void show();
};

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

//isFibo function to test the fibo numbers
bool isFibo(int num) {
    if (num == 0 || num == 1 || num == 2 || num == 3 || num == 5 || num == 8 
    || num == 13 || num == 21 || num == 34 || num == 55 || num == 89
    || num == 144 || num == 233) return true;
    return false;
}

// main function
int main() {
    int x;
    Deck playerDeck = Deck();
    while (x != 6) {
    cout << "\nWelcome to Fibonacci Solitaire!\n" <<
    "1) Create New Deck\n" << "2) Display Deck\n" <<
    "3) Shuffle Deck\n" << "4) Play Fibo Solitaire\n"
    << "5) Win Fibo Solitaire\n" << "6) Exit";
    
    cin >> x;
    
    if (x == 1) {
        playerDeck.newDeck();
    }
    else if (x == 2) {
        playerDeck.show();
    }
    else if (x == 3) {
        playerDeck.shuffle();
    }
    else if (x == 4) {
        cout << "\nPlaying Fibonacci Solitaire!\n";
        int cardSum = 0;
        int numPiles = 0;
        while (playerDeck.isEmpty() != true){
            Card dealedCard = playerDeck.deal();
            dealedCard.show();
            cardSum = cardSum + dealedCard.getValue();
            if (isFibo(cardSum)) {
                cout << "Fibo: " << cardSum << endl;
                cardSum = 0;
                numPiles++;
            }

        }
        if (isFibo(cardSum) != true) {
            cout << "Last Pile NOT Fibo: " << cardSum <<"\n\nLoser in " << numPiles << " piles!\n";
        }
        else cout << "\nWinner in " << numPiles << " piles!";
    }
    // tests until a game is won
    else if (x == 5) {
        int gamesPlayed = 0;
        while (true) {
            playerDeck.newDeck();
            playerDeck.shuffle();
            int cardSum = 0;
            int numPiles = 0;

            while (playerDeck.isEmpty() != true){
                Card dealedCard = playerDeck.deal();
                dealedCard.show();
                cardSum = cardSum + dealedCard.getValue();
                if (isFibo(cardSum)) {
                    cout << "Fibo: " << cardSum << endl;
                    cardSum = 0;
                    numPiles++;
                }
            
            }

            gamesPlayed++;
            if (isFibo(cardSum)) {
                cout << "\nWinner in " << numPiles << " piles!" << "\n\nGames played: " << gamesPlayed;
                break;
            } else cout <<"\n Not this time\n";

        }
        }
    
    }

}
