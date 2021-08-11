#include <iostream>

int main(void) {
    int input = 0, total = 0;

    while (input != 99) {
        std::cout << "Enter a number: ";
        std::cin >> input;

        if (input != 99) {total += input;}
    }

    std::cout << "The total is " << total;
}