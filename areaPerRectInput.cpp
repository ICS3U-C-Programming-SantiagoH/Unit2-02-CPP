// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Created on: Sep. 28, 2023
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.
#include <iostream>
// Include this for std::setprecision
#include <iomanip>

// declare variables
float length;
float width;
float area;
float perimeter;

int main() {
    // get the user input
    std::cout << "This program will calculate the area and\n";
    std::cout << "perimeter of a rectangle with your numbers.\n";
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // calculate area and perimeter of the user
    area = length * width;
    perimeter = 2 * (length + width);

    // display the results to the user
    std::cout << std::endl;
    std::cout << "The area is: " << std::fixed << std::setprecision(2)
    << area << " cm^2" << std::endl;
    std::cout << "The perimeter is: " << std::fixed
    << std::setprecision(2) << perimeter << " cm" << std::endl;

    return 0;
}
