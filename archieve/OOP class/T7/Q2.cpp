#include <iostream>
#include <string>
#include <iomanip>

class IceCream {
private:
    std::string flavour;
    int number;
    float price;
public:
    IceCream();

    void menu();
    void setFlavour();
    void setHowMany();
    friend void displayReceipt(IceCream ice_cream);
};

IceCream::IceCream() {
    std::cout << "Barney's House of Ice" << std::endl;
}

void IceCream::menu() {
    std::cout << "\n===========================================" << std::endl;
    std::cout << "          === CHOOSE FLAVOUR ===           " << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << "\n[1] === Strawberry Flavour    RM 3.50      " << std::endl;
    std::cout << "[2] === Chocolate Flavour     RM 2.50      " << std::endl;
    std::cout << "[3] === Vanilla Flavour       RM 1.50      " << std::endl;
    std::cout << "[4] === Durian Flavour        RM 0.50      " << std::endl;
}

void IceCream::setFlavour() {
    int selection;
    std::cout << "\nChoice of flavour: ";
    std::cin >> selection;

    switch (selection) {
        case 1: {
            flavour = "Strawberry";
            price = 3.5;
            break;
        }

        case 2: {
            flavour = "Chocolate";
            price = 2.5;
            break;
        }

        case 3: {
            flavour = "Vanilla";
            price = 1.5;
            break;
        }

        case 4: {
            flavour = "Durian";
            price = 0.5;
            break;
        }

        default:
            setFlavour();
            break;
    }
}

void IceCream::setHowMany() {
    std::cout << "How many: ";
    std::cin >> number;
}

void displayReceipt(IceCream ice_cream) {
    std::cout << "\n===========================================\n";
    std::cout << "              === PAYMENT ===\n";
    std::cout <<  "===========================================\n";
    std::cout << "Flavour: " << ice_cream.flavour << "\n";
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total Price: RM" <<  ice_cream.number * ice_cream.price << "\n";
}

int main(void) {
    IceCream ic;

    ic.menu();
    ic.setFlavour();
    ic.setHowMany();

    displayReceipt(ic);
}