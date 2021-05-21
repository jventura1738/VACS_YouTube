// Justin Ventura [05/18/21]
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

    int *pptr = nullptr;  // can use NULL as well
    pptr = &prime;        // assign address of prime
    
    cout << prime << endl;  // value of prime
    cout << &prime << endl; // address of prime
    cout << pptr << endl;   // address of prime
    cout << &pptr << endl;  // address of pointer
    cout << *pptr << endl;  // value of prime

    cout << "-------------------\n";

    /**
     * Arrays are just pointers to 'contiguous' blocks
     * in memory.  These pointers are slightly different
     * in that you cannot reassign them.  Demonstrated
     * at the bottom...
     */
    
    int nums[5] = {1, 2, 3, 4, 5};
    int *ptr = nullptr;  // or NULL
    ptr = nums;          // ptr points to first elem in nums now
    cout << "Address of start of the array: " << nums << endl;

    // Demonstration that arrays are "contiguous."
    cout << "Traversing array with array and pointer." << endl;
    for (int i = 0; i < 5; i++) {
        cout << "nums: " << nums[i] << " ";
        cout << "ptr: " << *ptr << endl;
        ptr++;  // Move down one spot in memory (the array)
    }

    // Note that ptr now points to one spot after the array, so
    // it is best to point it back to nullptr now.
    cout << "Random address: " << ptr << endl;
    ptr = nullptr;

    // Here we show that arrays and pointers are slightly different:
    int nums2[5] = {1, 2, 3, 4, 5};
    // nums = nums2;  // THIS IS ILLEGAL
    ptr = nums2;      // THIS IS LEGAL

    return 0;
}