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
