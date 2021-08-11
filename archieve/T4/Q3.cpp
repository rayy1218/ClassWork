#include <iostream>
#include <cstring>

class Increment {
private:
    float sc_point;
    char rating, name[20];
public:
    const char* setName();
    float setScPoint();
    char setRating();
};

const char* Increment::setName() {
    std::cout << "Enter name: ";
    std::cin >> name;
    return name;
}

float Increment::setScPoint() {
    std::cout << "Score Point: ";
    std::cin >> sc_point;
    return sc_point;
}

char Increment::setRating() {
    rating = 'A';
    if (sc_point < 2) {
        rating = 'F';
    }
    if (sc_point < 3) {
        rating = 'B';
    }
    return rating;

}

int main(void) {
    Increment M;

    std::cout << "===================================\n"
              << "         AGENT INFORMATION\n"
              << "===================================\n";


    char name[20];
    strcpy(name, M.setName());
    float sc_point = M.setScPoint();

    std::cout << "\n===================================\n"
              << "          INCREMENT SLIP\n"
              << "===================================\n"
              << "Name : " << name << '\n'
              << "Point Awarded : " << sc_point << '\n'
              << "Rating : " << M.setRating() << std::endl;
}