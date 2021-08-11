#include <iostream>

class NumberGame {
private:
    int array[5];
public:
    NumberGame();

    friend void search(NumberGame number_game, int *num);
};

NumberGame::NumberGame():
        array{15, 20, 33, 38, 100} {}

void search(NumberGame number_game, int *num) {
    int index = 0;
    do {
        if (number_game.array[index] == *num) {break;}
        index += 1;
    }
    while (index < 5);

    if (index == 5) {
        std::cout << *num << " is NOT found !" << std::endl;
    }
    else {
        std::cout << *num << " is found !" << std::endl;
    }
}

int main(void) {
    NumberGame G;
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    search(G, &num);
}