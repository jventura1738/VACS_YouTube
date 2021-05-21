// Justin Ventura [05/21/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>

using namespace std;

int main() {

    int num_students;
    float avg_score = 0;
    cout << "How many students? ";
    cin >> num_students;

    float *scores = new float[num_students];

    for (int i = 0; i < num_students; i++) {
        cout << "Enter score for student " << i+1 << ": ";
        cin >> scores[i];
        avg_score += scores[i];
    }

    avg_score = avg_score / num_students;
    cout << "The average scores from all " << num_students << " students is: ";
    cout << avg_score << ".\n";

    delete []scores;

    return 0;
}