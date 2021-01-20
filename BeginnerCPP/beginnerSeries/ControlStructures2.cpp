// Justin Ventura [01/19/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

int main() {

    // This controls the programs 'status'
    bool run = true;

    do {

        int choice;
        cout << "---------------------------" << endl;
        cout << "1. Absolute value" << endl;
        cout << "2. Summation" << endl;
        cout << "3. Exponentiation" << endl;
        cout << "4. Quit" << endl;
        cout << "--> ";
        cin >> choice;

        switch (choice) {

            // Example 1: absolute value!
            case 1:

            float number;
            cout << "Enter a number to find absolute value: " << endl;
            cin >> number;

            if (number < 0.0)
                number *= -1;
            
            cout << "Result: " << number << "." << endl;
            break;


            // Example 2: summation!
            case 2:

            int integer, sum;
            cout << "Enter an integer to sum to from 0 inclusively: " << endl;
            cin >> integer;

            sum = 0;
            for (int i = 0; i <= integer; i++)
                sum += i;

            cout << "Result: " << sum << "." << endl;
            break;

            // Example 3: exponentiation!
            case 3:

            int base, power, result;
            cout << "Enter a base followed by its exponent (ex 2 4): " << endl;
            cin >> base >> power;

            result = base;
            for (int i = 1; i < power; i++)
                result *= base;

            cout << "Result: " << result << "." << endl;
            break;

            // Default option:
            default:

            run = false;

        }

    } while (run == true);
    // could say: 'while(run);'

    cout << "See ya!" << endl;

    return 0;

}