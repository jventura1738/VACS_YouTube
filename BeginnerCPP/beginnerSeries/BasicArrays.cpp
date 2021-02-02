// Justin Ventura [02/01/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

int main() {

    /**
     * Let's make three arrays:
     * 1) an array of numbers from 0 - 9,
     * 2) an array of 3 names,
     * 3) an array of characters to spell 'Justin'
    */

    int numArray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string names[3] = {"Justin", "Michael", "Ventura"};
    char myName[6] = {'J', 'u', 's', 't', 'i', 'n'};

    // Now we can use the same technique we used on strings to print.
    // Strings are just arrays of characters underneath their
    // string 'interface.'
    for (int i = 0; i < 10; i++) {

        cout << numArray[i] << " ";

    }
    cout << "\n";

    for (int i = 0; i < 3; i++) {

        cout << names[i] << " ";

    }
    cout << "\n";

    for (int i = 0; i < 6; i++) {

        cout << myName[i];

    }
    cout << "\n";

    // Here we can create an array of odd numbers from 1 - 9.
    int numArray2[5];  // 1 3 5 7 9

    int j = 0;  // use j to keep track of array index.
    for (int i = 0; i < 10; i++) {

        if (i % 2 == 1) {

            numArray2[j] = i;
            j++;

        }
            
    }

    // Now we print out the array to make sure it works!
    for (int i = 0; i < 5; i++) {

        cout << numArray2[i] << " ";

    }
    cout << "\n";

    /**
     * Next challenge: write code that will print out index which
     * corresponds to the largest value in the array.  Assume 
     * there will be no duplicates nor negative numbers.
     *
     * Ex. a = [5 2 9 12 6 11 4 1]
     * output: 3
    */

    int a[8] = {5, 2, 9, 12, 6, 11, 4, 1};

    int max = 0;
    for (int i = 1; i < 8; i++) {

        if (a[i] > a[max]) {

            max = i;

        }

    }

    cout << max << endl;


    return 0;
}