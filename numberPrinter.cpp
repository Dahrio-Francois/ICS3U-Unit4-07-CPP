// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Dahrio Francois
// Created on: May 2022
// This program uses a loop statement to print numbers from
//  1000 to 2000

#include <iostream>

int main() {
    // this function is the the famous Fizz-Buzz problem

    int i = 999;

    // while loop from 1 to 5
    while (i < 1999) {
        std::cout << ++i << " " << ++i << " " << ++i << " "
        << ++i << " " << ++i << std::endl;
    } std::cout << "2000";
}
