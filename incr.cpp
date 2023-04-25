/*
    incr.cpp

    Increments the value of the input
*/

#include <iostream>
#include "increment.hpp"

int main(int argc, char* argv[]) {

    // no options allowed
    if (argc != 1) {
        std::cerr << "usage: incr" << '\n';
        return 1;
    }

    // read the number from input
    int n;
    std::cin >> n;

    // increment the value
    auto result = increment(n);

    // output the incremented value
    std::cout << result << '\n';

    return 0;
}
