#include <iostream>

int main() {
    std::cout << "Roses are red," << std::endl;
    std::cout << "violets are blue," << '\n';
    std::cout << "sugar is sweet,\nand so are you" << "\n";
    return 0;
}

// 'endl' vs. 'newline(\n)'
// Both: create a new line when printing

// endl
// - add newline & 'flushes' the output stream, forcing content to be written immediately
// - SLOWER if used repeatedly

// newline(\n)
// - add newline, but doesn't 'flush' the output stream
// - FASTER performance-wise