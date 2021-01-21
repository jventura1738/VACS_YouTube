// Justin Ventura [01/20/21]
// Ventura Academy YT Computer Science
// -> github.com/jventura1738/VACS_YouTube

#include <iostream>  // for cout/cin
#include <random>    // for random numbers
#include <time.h>    // use for seeding

using namespace std;

int main() {

    bool run = true;
    int numRounds, currRound = 0;
    int myScore = 0, compScore = 0;

    // '\n' is a character for newline (like endl).
    cout << "Welcome to Justin's Rock Paper Scissors!\n";
    cout << "How many rounds to play?\n";
    cout << "--> ";
    cin >> numRounds;
    cout << "----------------------------------------\n";

    srand(time(NULL));  // time(NULL) for extra random.

    // While the user wants to play, simulate the game!
    while (run) {

        // Gather user's input:
        int player, computer;
        cout << "\nRound " << currRound + 1 << "!\n";
        cout << "1. Rock  |  2. Paper  |  3. Scissors  |  Other to quit\n";
        cout << "--> ";
        cin >> player;

        // Random choice for the computers 'hand' so to speak, hehe.
        computer = rand() % 3 + 1;

        // If there is a draw...
        if (player == computer) {

            cout << "You both chose the same... It's a draw!\n";

        }

        // Otherwise...
        else {

            switch(player) {

                // I pick rock...
                case 1:
                    if (computer == 2) {
                        cout << "You chose rock... but computer chose paper!\n";
                        cout << "You lose! :(\n";
                        compScore++;
                    }
                    else {
                        cout << "You chose rock... but computer chose scissors!\n";
                        cout << "You win! :D\n";
                        myScore++;
                    }
                    break;

                // I pick paper...
                case 2:
                    if (computer == 3) {
                        cout << "You chose paper... but computer chose scissors!\n";
                        cout << "You lose! :(\n";
                        compScore++;
                    }
                    else {
                        cout << "You chose paper... but computer chose rock!\n";
                        cout << "You win! :D\n";
                        myScore++;
                    }
                    break;

                // I pick scissors...
                case 3:
                    if (computer == 1) {
                        cout << "You chose scissors... but computer chose rock!\n";
                        cout << "You lose! :(\n";
                        compScore++;
                    }
                    else {
                        cout << "You chose scissors... but computer chose paper!\n";
                        cout << "You win! :D\n";
                        myScore++;
                    }
                    break;

                default:
                    cout << "Game ending!";
                    run = false;
            }

        }

        // Display current score:
        cout << "Current score: " << myScore << " | " << compScore << "\n\n";
        currRound++;

        // When finished, dip out.
        if (currRound >= numRounds)
            run = false;

    }

    // Announce the results if the game finished.
    if (currRound >= numRounds) {

        if (myScore > compScore)
            cout << "You win! :D\n";
        else if (myScore < compScore)
            cout << "You lose :( not your lucky day.\n";
        else
            cout << "It's a draw! :o\n";

    }

    // Game is basically all luck ;)
    cout << "\nThanks for playing!\n";
    cout << "----------------------------------------\n";

    return 0;
}