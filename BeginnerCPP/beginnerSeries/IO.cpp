// Justin Ventura [12/24/20]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YoutTube

#include <iostream>

using namespace std;

int main() {

    string myName;
    cout << "Hey, what is your name?\n";
    cout << "--> ";
    cin >> myName;
    cout << "Hello " << myName << ", nice to meet you!\n\n";

    string month, day, year;
    cout << "Enter your birthday as so: Month Day Year...\n";
    cout << "--> ";
    cin >> month >> day >> year;
    cout << "Entered Birthday: " << month << " " << day << " " << year << ".\n\n";

    return 0;
}

/**
 * ! Don't forget, you can compile this program like so:
 * ! g++ -c IO.cpp
 * ! g++ -o IO IO.o
 * ! ./IO
*/