#ifndef card.h 
#define card.h 

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