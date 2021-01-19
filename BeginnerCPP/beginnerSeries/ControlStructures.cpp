// Justin Ventura [01/18/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

int main () {

    // Even-Odd test:
    int x;
    cout << "Enter a number! ";
    cin >> x;
    if (x % 2 == 0) {

        cout << x << " is even." << endl;

    }
    else {

        cout << x << " is odd." << endl;

    }

    // Printing even numbers from 0-9.
    cout << "Even numbers between 0-9." << endl;

    // For loop way:
    for (int i = 0; i < 10; i++) {

        if (i % 2 == 0) {

            cout << i << " ";

        }

    }
    cout << endl;

    // While loop way:
    int i = 0;  // notice that the i from the for
                // loop is in its own scope, thus
                // we redeclare int i.
    while (i < 10) {

        if (i % 2 == 0) {

            cout << i << " ";

        }
        i++;

    }
    cout << endl;

    // Do...while way:
    i = 0;  // reset i back to 0.
    do {

        if (i % 2 == 0) {

            cout << i << " ";

        }
        i++;

    } while (i < 10);
    cout << endl;

    return 0;
}