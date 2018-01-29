#include <iostream>
#include "fizzbuzz.h"

int main()
{
    std::cout << "Hello FizzBuzz!" << std::endl;

    codingdojo::FizzBuzz fizzBuzz;
    for(int i = 1; i < 100; ++i) {
        std::cout << fizzBuzz.compute(i) << std::endl;
    }
    return 0;
}
