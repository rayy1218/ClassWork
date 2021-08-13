#include <iostream>

int main(void) {
    const int INPUT_LOOP_NUM = 10;
    int total_num = 0, even_num = 0, odd_num = 0;

    do {
        int input_num;

        std::cout << "Enter a number: ";
        std::cin >> input_num;

        total_num += input_num;

        if (input_num % 2 == 0) {
            even_num += 1;
            continue;
        }

        odd_num += 1;
    }
    while (even_num + odd_num < INPUT_LOOP_NUM);

    std::cout << "There are " << even_num << " even numbers and " << odd_num << " odd numbers." << std::endl;
    std::cout << "The total of all the " << INPUT_LOOP_NUM << " numbers are " << total_num << std::endl;
}