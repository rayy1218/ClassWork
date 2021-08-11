#include <iostream>
#include <cmath>

class Triangle {
protected:
    int a, b, c;
public:
    Triangle();

    void setData(int a, int b);
};

class PythogorasTriangle : public Triangle {
private:
public:
    PythogorasTriangle();

    void calcHypotenuse();
    void displaySides();
};

Triangle::Triangle() {
    std::cout << "-------- Triangle Class -------" << std::endl;
}

void Triangle::setData(int a, int b) {
    this->a = a;
    this->b = b;
}

PythogorasTriangle::PythogorasTriangle():
        Triangle() {

    std::cout << "-------Pythogoras Triangle -------" << std::endl;
}

void PythogorasTriangle::calcHypotenuse() {
    c = sqrt(pow(a, 2) + pow(b, 2));
}

void PythogorasTriangle::displaySides() {
    std::cout << "\n::The sides of a pythogoras triangle::" << std::endl;
    std::cout << "a :" << a << std::endl;
    std::cout << "b :" << b << std::endl;
    std::cout << "c :" << c << "(also known as the Hypotenuse)" << std::endl;
}

int main(void) {
    PythogorasTriangle *p_tri = new PythogorasTriangle;

    int a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    p_tri->setData(a, b);

    p_tri->calcHypotenuse();
    p_tri->displaySides();

    if (p_tri != nullptr) {delete p_tri;}
}
