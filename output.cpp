#include <cstdio> // for printf()
#include <iostream>
#include <string>

int main() {
    // Basic Output
    std::cout << "Hello!" << std::endl;

    // Basic Output (/w Variables)
    std::string name = "John";
    std::cout << "My name is " + name + "!" << std::endl;

    // C-style Output - useful for formatting
    std::printf("It's nice to meet you, %s!\n", name);
    return 0;
}