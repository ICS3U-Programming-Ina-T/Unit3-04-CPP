// Copyright (c) 2021 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Dec. 10, 2021
// This program determines the type of
// number a user has entered.

#include <iostream>


int main() {
  // this function checks if the user has
  // entered the correct number
  float userNumber;

  // input
  std::cout << "Enter a number: ";
  std::cin >> userNumber;
  std::cout << "" << std::endl;

  // process
  if (userNumber > 0) {
      // output
      std::cout << userNumber << " is a positive number.";
  } else if (userNumber < 0) {
      std::cout << userNumber << " is a negative number.";
  } else {
      std::cout << userNumber << " is just zero.";
  }
}
