#include <iostream>

class Number {
private:
    int no, index, sample, numbers;
public:
    Number();
    int smallestNumb(int numb[], int element, int size);
    void selectNumber(int numb[], int size);
};

Number::Number() {
    std::cout << "NUMBERS :: Let’s PLAY" << std::endl;
    std::cout << "===========================================" << std::endl;
}

int Number::smallestNumb(int numb[], int element, int size) {
    index = element;
    sample = size;
    no = numb[element];

    for (int i = element + 1; i < size; i += 1) {
        if (numb[i] < no) {
            no = numb[i];
            index = i;
        }
    }

    return index;
}

void Number::selectNumber(int numb[], int size) {
    int digit, sort;

    for (int i = 0; i < size - 1; i += 1) {
        digit = smallestNumb(numb, i, size);

        //swap number at current index with smallest num index
        sort = numb[i];
        numb[i] = numb[digit];
        numb[digit] = sort;

        std::cout << "The Cycle-" << i + 1 << " sorting: ";
        for (int i = 0; i < size; i += 1) {
            std::cout << numb[i] << ' ';
        }
        std::cout << std::endl;
    }
}

int main(void) {
    Number nb;
    int arr_size;

    std::cout << "How many numbers would you like to be sorted: ";
    std::cin  >> arr_size;


    int *numbers = new int[arr_size];
    std::cout << "The " << arr_size << " numbers are: " << std::endl;
    for (int i = 0; i < arr_size; i += 1) {
        std::cin >> numbers[i];
    }
    std::cout << std::endl;

    nb.selectNumber(numbers, arr_size);

    std::cout << "\nThe final list of sorted numbers is:" << std::endl;
    for (int i = 0; i < arr_size; i += 1) {
        std::cout << numbers[i] << ' ';
    }

    delete [] numbers;
}

