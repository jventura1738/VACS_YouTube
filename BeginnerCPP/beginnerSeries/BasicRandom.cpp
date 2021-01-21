// Justin Ventura [01/20/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>  // for cout/cin
#include <random>    // for random numbers
#include <time.h>    // use for seeding

using namespace std;

int main() {

    /**
     * Giving a seed to the random number generator.
     * If the seed is constant with respect to each
     * run of the program, then the random numbers
     * will appear in the same order.  This is good
     * for testing.
    */
    srand(0);  // Seed of 0 is given.

    /**
     * Let's simulate rolling two die!
     *
     * rand() gives a number between 0 and RAND_MAX (for now just know that
     * RAND_MAX is a big number.), so if we mod 6, we get a new range 0-5.
     * Just add 1 to the result to get a new range 1-6, like a die!
    */

    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;

    cout << "Rolling die..." << endl;
    cout << "Rolled: " << die1 << ", " << die2 << endl;
    cout << "---------------------------" << endl << endl;

    /**
     * Now we can generate a list of random numbers!
     *
     * This may seem useless right now, but in the future doing something
     * like this will become very helpful.
    */
    int sampleSize, low, high;
    cout << "How many random numbers to be generated? ";
    cin >> sampleSize;
    cout << "Enter 2 numbers for range (sep by space; 2 4) ";
    cin >> low >> high;  // note that the high is non-inclusive.

    cout << "Sequence of random numbers: ";
    for (int i = 0; i < sampleSize; i++) {

        int diff = high - low;  // check the range of numbers.
        int num = rand() % diff + low;  // use range, starting from low.
        cout << num << " ";

    }
    cout << endl;

    return 0;
}