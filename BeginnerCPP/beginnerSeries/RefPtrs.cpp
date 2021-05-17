// Justin Ventura [02/09/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

int main() {

    /**
     * Reference Variables.  These are used for essentially
     * becoming a new alias for the an exising variables.
     * This is because, when declared and initialized, it
     * will hold the same address of the variable it is
     * assigned to.
     */

    int prime = 5;
    int &pref = prime;  // Reference variable

    cout << &prime << endl;  // address of prime
    cout << prime << endl;   // value of prime
    cout << &pref << endl;   // address of prime
    cout << pref << endl;    // value of prime

    cout << "-------------------\n";

    /**
     * Pointer Variables.  These are used to store the memory
     * address to an existing variable.  Unlike references,
     * pointers can be NULL, have void typing, and can be
     * reassigned at any time.
     */

    int prime = 5;
    int *pptr = nullptr;  // can use NULL as well
    pptr = &prime;        // assign address of prime
    
    cout << prime << endl;  // value of prime
    cout << &prime << endl; // address of prime
    cout << pptr << endl;   // address of prime
    cout << &pptr << endl;  // address of pointer
    cout << *pptr << endl;  // value of prime

    return 0;
}