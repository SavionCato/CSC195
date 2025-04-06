#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
    
int main() {
    srand(time(0));
    int randomNumber = rand() % 10 + 1;
    int userNum = 0;
    int numOfGuesses = 3;

    cout << "Welcome to the number guessing game." << endl;
    cout << "Guess a number between 1-10";
    
    while (numOfGuesses != 0 && userNum != randomNumber) {
        std::cout << "\nYou have " << numOfGuesses << " guesses left.";
        std::cout << "\nWhat is your geuss: ";
        cin >> userNum;

        if(userNum == randomNumber){
            cout << "You win.";
        }

        if(userNum != randomNumber) {
            cout << "You guessed wrong.";
        }

        numOfGuesses--;
    }

    if(numOfGuesses == 0 && userNum != randomNumber){
        cout << "\nYou lose.";
        cout << "\nThe correct number was: " << randomNumber;
    }
   
    return 0;
}