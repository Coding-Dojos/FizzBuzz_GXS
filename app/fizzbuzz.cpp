#include "fizzbuzz.h"
#include <sstream>

std::string codingdojo::FizzBuzz::compute(int value)
{
    std::ostringstream numberAsString;

    if (value % 15 == 0) {
        return FIZZ + BUZZ;
    }

    if (value % 3 == 0) {
        return FIZZ;
    }

    if (value % 5 == 0) {
        return BUZZ;
    }

    numberAsString << value;
    return numberAsString.str();
}
