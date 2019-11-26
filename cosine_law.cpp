// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program is a cosine law calculator

#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>


float CosineLaw(float a, float b, float angleC) {
    // This function calculates the side of a triangle
    float cSquared;
    // convert degrees to radians
    angleC = (angleC * 3.14159) / 180;
    // Finds the third side of a triangle
    cSquared = sqrt(pow(a, 2) + pow(b, 2) - (2 * a * b * cos(angleC)));

    return cSquared;
}


main() {
    // This function asks for side a, b and angle c
    std::string aString;
    std::string bString;
    std::string angleCString;
    float aFromUser;
    float bFromUser;
    float angleCFromUser;
    float c;

    // output
    std::cout << "Welcome to the Cosine Law calculator." << std::endl;
    std::cout << std::endl;
    // input
    std::cout << "Enter value of side a: ";
    std::cin >> aString;
    try {
        aFromUser = std::stof(aString);
        std::cout << "Enter value of side b: ";
        std::cin >> bString;
        try {
            bFromUser = std::stof(bString);
            std::cout << "Enter value of angle C (degrees): ";
            std::cin >> angleCString;
            try {
                angleCFromUser = std::stof(angleCString);
                std::cout << std::endl;
                // call functions
                c = CosineLaw(aFromUser, bFromUser, angleCFromUser);
                // output
                std::cout << "The value of side c is " << c << "." << std::endl;
            } catch (std::invalid_argument) {
                std::cout << "Wrong input. Please try again." << std::endl; }
        } catch (std::invalid_argument) {
            std::cout << "Wrong input. Please try again." << std::endl; }
    } catch (std::invalid_argument) {
            std::cout << "Wrong input. Please try again." << std::endl; }
}
