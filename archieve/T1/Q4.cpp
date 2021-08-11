#include <iostream>
#include <iomanip>
#include <algorithm>

int main(void) {
    int test_num;

    std::cout << "How many test score will you enter ? ";
    std::cin >> test_num;

    double *score = new double[test_num];
    double total_score = 0;

    for (int i = 0; i < test_num; i += 1) {
        std::cout << "Enter test score " << i + 1 << ": ";
        std::cin >> *(score + i);
        total_score += *(score + i);
    }

    std::sort(score, (score + test_num));

    std::cout << "\nThe test scores in ascending order, and their average, are:\n\n"
              << " Score\n"
              << " -----\n\n";

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    for (int i = 0; i < test_num; i += 1) {
        std::cout << " " << *(score + i) << std::endl;
    }

    std::cout << "\nAverage score: " << (total_score / test_num) << std::endl;
}
