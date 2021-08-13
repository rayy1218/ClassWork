#include <iostream>
#include <iomanip>

void sort(double *arr, int arr_size);
double avg(double *arr, int arr_size);

int main(void) {
    int test_num;

    std::cout << "How many test score will you enter ? ";
    std::cin >> test_num;

    double *score = new double[test_num];

    for (int i = 0; i < test_num; i += 1) {
        std::cout << "Enter test score " << i + 1 << ": ";
        std::cin >> *(score + i);
    }

    sort(score, test_num);

    std::cout << "\nThe test scores in ascending order, and their average, are:\n\n"
              << " Score\n"
              << " -----\n\n";

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < test_num; i += 1) {
        std::cout << " " << *(score + i) << std::endl;
    }

    std::cout << "\nAverage score: " << avg(score, test_num) << std::endl;
}

void sort(double *arr, int arr_size) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < arr_size - 1; i += 1) {
            if (arr[i] > arr[i + 1]) {
                double temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
    }
    while (swapped);
}

double avg(double* arr, int arr_size) {
    double total = 0;
    for (int i = 0; i < arr_size; i += 1) {
        total += arr[i];
    }

    return total / arr_size;
}