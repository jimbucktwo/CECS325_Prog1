// Jimmy Tran 028343131
// Class (CECS 325-02)
// Prog 1 Solitaire
// 09/26/23
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.
#ifndef card.h 
#define card.h

// card header to specify attributes
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

#endif