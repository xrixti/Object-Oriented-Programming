#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Hangman game functions
void playHangman();
void hangman();
int checkGuess(char guess, string secretWord, string &guessWord);
void printMessage(string message);

// Tic Tac Toe game functions
//void playTicTacToe();
//void drawBoard(vector<char> &board);
//bool isBoardFull(vector<char> board);
//char checkWinner(vector<char> board, char currentPlayer);
//bool isValidMove(vector<char> board, int move);

// Main menu function
int main()
{
    int choice;
    srand(time(NULL));

    do {
        cout << "=====================" << endl;
        cout << "      GAME HUB" << endl;
        cout << "=====================" << endl;
        cout << "1. Hangman" << endl;
        cout << "2. Tic Tac Toe" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                playHangman();
                break;

            case 2:
                cout << "Thanks for playing!" << endl;
                break;
            default:
                cout << "Invalid choice, please try again" << endl;
                break;
        }

    } while (choice != 3);

    return 0;
}

// Hangman game functions
void playHangman() {
    char playAgain = 'n';

    do {
        hangman();
        cout << "Would you like to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
}

void hangman()
{
    vector<string> words = {"apple", "banana", "orange", "pear", "peach", "watermelon", "strawberry"};
    int randomIndex = rand() % words.size();
    string secretWord = words[randomIndex];
    string guessWord(secretWord.length(), '-');
    int guesses = 7;
    char guess;

    while (guesses > 0 && guessWord != secretWord) {
        cout << "You have " << guesses << " guesses left" << endl;
        cout << "Secret word: " << guessWord << endl;
        cout << "Guess a letter: ";
        cin >> guess;

        if (checkGuess(guess, secretWord, guessWord) == 0) {
            cout << "Incorrect guess" << endl;
            guesses--;
        }
        else {
            cout << "Correct guess!" << endl;
        }
    }

    if (guessWord == secretWord) {
        printMessage("Congratulations! You guessed the secret word");
    }
    else {
        printMessage("You ran out of guesses. Better luck next time!");
        cout << "The secret word was " << secretWord << endl;
    }
}

int checkGuess(char guess, string secretWord, string &guessWord) {
    int matches = 0;
    for (int i = 0; i < secretWord.length(); i++) {
        if (guess == secretWord[i] && guess != guessWord[i]) {
            guessWord[i] = guess;
            matches++;
        }
    }
    return matches;
}

void printMessage(string message) {
    cout << "=====================" << endl;
    cout << message << endl;
    cout << "=====================" << endl;
}

// Tic Tac Toe g
