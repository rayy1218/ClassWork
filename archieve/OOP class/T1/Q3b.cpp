#include <iostream>

int main(void) {
    int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};

    for (int i = 0; i < 2; i += 1) {
        std::cout << "Row " << i + 1 << " :";
        for (int j = 0; j < 3; j += 1) {
            std::cout << "  " << arr[i][j];
        }
        std::cout << std::endl;
    }
}