// Justin Ventura [01/20/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>  // for cin/cout
#include <string>    // for string library

using namespace std;

int main () {

    /**
     * PROBLEM: User enters a string, write code to
     * print the number of vowels in said string.
    */

    string s;
    int count = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
            count++;

    }
    cout << "Number of vowels: " << count << endl;


    /**
     * PROBLEM: User enters a string, write code to
     * print the string in reverse.
    */

    string s;
    getline(cin, s);

    for (int i = s.size() - 1; i >= 0; i--) {

        cout << s[i];

    }
    cout << endl;


    /**
     * BONUSPROBLEM: user enters a character followed
     * by a string, print number of occureneces the
     * said character makes in the string.
    */

    // Posting solution soon...

    return 0;
}