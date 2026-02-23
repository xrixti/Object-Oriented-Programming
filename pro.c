#include<iostream>
#include "hang.h"
#include "TicTacToe.h"

int main() {
    int choice;

    std::cout << "Please select a game to play:" << std::endl;
    std::cout << "1. Hangman" << std::endl;
    std::cout << "2. Tic Tac Toe" << std::endl;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            Hangman hangman;
            hangman.play();
            break;
        }
        case 2: {
            TicTacToe tictactoe;
            tictactoe.play();
            break;
        }
        default: {
            std::cout << "Invalid choice." << std::endl;
            break;
        }
    }

    return 0;
}
