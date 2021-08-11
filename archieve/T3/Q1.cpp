#include <iostream>
#include <iomanip>

class TravelPackage {
private:
public:
    char package;
    int adult_num, child_num;
    float adult_price, child_price, discount, total_price;
};

int main(void) {
    TravelPackage selecting_package;
    char package_input;

    do {
        std::cout << "Select travel package <A,B,C>: ";
        std::cin >> package_input;
        package_input = toupper(package_input);

        if (package_input != 'A' && package_input != 'B' && package_input != 'C') {
            std::cout << "Invalid Selection." << std::endl;
        }

        std::cout << std::endl;
    }
    while (package_input != 'A' && package_input != 'B' && package_input != 'C');

    selecting_package.package = package_input;

    std::cout << "\nEnter no of adult: ";
    std::cin >> selecting_package.adult_num;
    std::cout << "\nEnter no of children: ";
    std::cin >> selecting_package.child_num;

    switch (selecting_package.package) {
        case 'A':
            selecting_package.adult_price = 1000;
            selecting_package.child_price = 500;
            break;

        case 'B':
            selecting_package.adult_price = 800;
            selecting_package.child_price = 600;
            break;

        case 'C':
            selecting_package.adult_price = 500;
            selecting_package.child_price = 300;
            break;
    }

    selecting_package.total_price = selecting_package.child_price * selecting_package.child_num +
                                    selecting_package.adult_price * selecting_package.adult_num;

    selecting_package.discount = 1;
    if (selecting_package.total_price > 3000) {selecting_package.discount = 0.8;}

    selecting_package.total_price *= selecting_package.discount;

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nTotal price: RM" << selecting_package.total_price << std::endl;
}