#include <iostream>

class Fraction {
private:
    int denom, nume;
public:
    void setData(int nume, int denom);
    int getDenom();
    int getNume();
};

void Fraction::setData(int nume, int denom) {
    this->denom = denom;
    this->nume = nume;
}

int Fraction::getDenom() {return denom;}

int Fraction::getNume() {return nume;}

int isValid(Fraction ob) {
    int valid = 1;
    if (ob.getDenom() == 0) {
        valid = 0;
        std::cout << "\nAlert:Denominator is having value zero" << std::endl;
    }
    else if (ob.getNume() > ob.getDenom()) {
        valid = 0;
        std::cout << "\nAlert:Numerator greater than denominator" << std::endl;
    }

    return valid;
}

int main(void) {
    Fraction ob1[3];
    for (int i = 0; i < 3; i += 1) {
        ob1[i].setData(i + 1, 2 - i);

        std::cout << "Fraction " << ob1[i].getNume() << '/' << ob1[i].getDenom() << ' ';
        if (!isValid(ob1[i])) {
            std::cout << "is INvalid\n";
        }
        else {
            std::cout << "is valid\n";
        }

        std::cout << std::endl;
    }
}