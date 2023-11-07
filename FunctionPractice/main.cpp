//
//  main.cpp
//  FunctionPractice
//
//  Created by Emanuel Alfaro on 11/7/23.
//

#include <iostream>

void outA()
{
    std::cout << "I'm in outA!" << '\n';
}

void outB()
{
    std::cout << "I'm in outB!" << '\n';
    outA();
}

int main()
{
    outA();
    outB();
}
