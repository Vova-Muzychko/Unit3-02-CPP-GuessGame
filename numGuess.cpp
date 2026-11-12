// Copyright (c) 2026 Your Name All rights reserved.
//
// Created by: Vova
// Created on: November 12, 2026
// This program asks the user to guess a number between 0 and 9
// and checks if it matches the correct constant number.

#include <iostream>

int main() {
    // Constant for the correct number
    const int CORRECT_NUMBER = 5;
    int guessedNumber;

    // Ask the user to guess a number
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> guessedNumber;

    // Check if the guess is correct
    if (guessedNumber == CORRECT_NUMBER) {
        std::cout << "You guessed correctly!" << std::endl;
    }

    // Check if the guess is incorrect
    if (guessedNumber != CORRECT_NUMBER) {
        std::cout << "You guessed wrong. The correct number is "
                  << CORRECT_NUMBER << "." << std::endl;
    }

    return 0;
}
