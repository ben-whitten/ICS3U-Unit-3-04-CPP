// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which tells you if you number is - or +.

#include <iostream>

int main() {
    // This is what runs the game.
    int number;

    // input
        std::cout << "Input a number: ";
        std::cin >> number;
        std::cout << "" << std::endl;

        // Process
        if (number == 0) {
            // Output
            std::cout << "It is neither + or - (0)" << std::endl;
        // Process
        } else if (number < 0) {
            // Output
            std::cout << "It is -" << std::endl;
        // Process
        } else if (number > 0) {
            // Output
            std::cout << "It is +" << std::endl;
        // Process
        } else {
            // Output
            std::cout << "Error, check you number and try again.";
            std::cout << "" << std::endl;
        }
    }
