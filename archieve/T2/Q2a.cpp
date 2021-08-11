#include <iostream>
#include <cmath>

double get_a_b_c(double &a, double &b, double &c) {
    std::cout << "Enter a, b and c: ";
    std::cin >> a >> b >> c;
}

double bb_4ac() {
    double a, b, c;
    get_a_b_c(a, b, c);
    return pow(b, 2) - (4 * a * c);
}

int main(void) {
    double discriminant = bb_4ac();
    std::cout << "The discriminant is " << discriminant << std::endl;
}
