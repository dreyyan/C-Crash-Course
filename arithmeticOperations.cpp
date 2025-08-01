#include <iostream>
using namespace std;

int main() {
    // declare & initialize variables
    int x = 10, y = 2;

    // perform arithmetic operations
    std::cout << x << " + " << y << " = " << (x + y) << '\n'; // addition
    std::cout << x << " - " << y << " = " << (x - y) << '\n'; // subtraction
    std::cout << x << " * " << y << " = " << (x * y) << '\n'; // multiplication
    std::cout << x << " / " << y << " = " << (x / y) << '\n'; // division
    std::cout << x << " % " << y << " = " << (x % y) << '\n'; // modulus
    return 0;
}