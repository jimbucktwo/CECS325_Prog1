// CECS 325 9/21/23 Notes
#include <stdlib.h>
#include <iostream>
using namespace std;

char ranks[] = {'A', '2','3'};

int main() {

    for (int i =0; i<5; i++){
        int min = 13;
        int max = 25;
        int x = rand() % (max - min + 1) + min;
        cout << x << endl;
    }
}
/*to shuffle the deck, choose two random numbers in the array and swap
do that a number of times until the deck is adequately shuffled
*/

//the random number generator will select the same number all the time
//if left by itself, use srand to change the seed and time() to always
//the seed