#include <iostream>
#include <cstring>

using namespace std;

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
    cout << "Enter name: ";
    cin >> name;

    return name;
}

float Increment::setScPoint() {
    cout << "Score Point: ";
    cin >> sc_point;

    return sc_point;
}

char Increment::setRating() {
    if (sc_point >= 0 && sc_point < 2) {
        rating = 'F';
    }
    else if (sc_point >= 2 && sc_point < 3) {
        rating = 'B';
    }
    else if (sc_point >= 3 && sc_point <= 4) {
        rating = 'A';
    }

    return rating;
}

int main(void) {
    Increment M;

    cout << "===================================\n"
         << "         AGENT INFORMATION\n"
         << "===================================\n";

    char name[20];
    strcpy(name, M.setName());
    float sc_point = M.setScPoint();

    cout << "\n===================================\n"
         << "          INCREMENT SLIP\n"
         << "===================================\n"
         << "Name : " << name << '\n'
         << "Point Awarded : " << sc_point << '\n'
         << "Rating : " << M.setRating() << std::endl;
}