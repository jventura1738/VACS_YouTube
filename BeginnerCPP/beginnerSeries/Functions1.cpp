// Justin Ventura [06/06/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

/**
 * FUNCTION FORMAT
 * 
 * <datatype> <name> ( <list of params> ) {
 * 
 *  statements;
 *  return some_value;  (if <datatype> is not void)
 * 
 * }
 * 
 * EXAMPLE:
 * double getAvg(double []scores, int numScores){
 * 
 *  double result = 0;
 *  for (int i = 0; i < numScores; i++) {
 *      result += scores[i];
 *  }
 * 
 *  return result/numScores;
 * }
 * 
 */

// Prints the string "Hello World!";
void HelloWorld();

// This function takes 3 numbers, and returns their sum.
double add(double a, double b, double c);

// Swaps the two variables:
void swap(int &a, int &b);

int main () {

    // HelloWorld();
    // int z = add(1, 2, 3);
    // cout << z << endl;
    // cout << add(1, 2, 3) << endl;

    int x = 5;
    int y = 6;
    cout << "x: " << x << " y: " << y << endl;
    swap(x, y);
    cout << "x: " << x << " y: " << y << endl;

    return 0;
}

void HelloWorld() {
    cout << "Hello World!" << endl;
}

double add(double a, double b, double c) {
    return a + b + c;
}


/**
 * Notice that we 'pass by reference' in order to
 * actually swap the variables instead of copies
 * of the variables.
 */
void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;

}