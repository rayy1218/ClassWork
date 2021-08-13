#include <iostream>
#include <iomanip>
#include <string>

int main(void) {
    std::string name;
    double total_price;

    std::cout << "Welcome to Yummy Ice-Cream\n\n"
              << "******Ice-Cream Flavor******\n"
              << "[C] Chocolate\n"
              << "[V] Vanilla\n"
              << "[S] Strawberry\n" << std::endl;

    std::cout << "Enter name\t: ";
    std::cin >> name;

    char to_continue;
    do {
        char input_char = '0';
        int quantity;
        std::cout << "Enter Flavour\t: ";
        std::cin >> input_char;
        input_char = toupper(input_char);

        while (input_char != 'C' && input_char != 'V' && input_char != 'S') {
            std::cout << "Incorrect flavor. Re-enter Flavor: ";
            std::cin >> input_char;
            input_char = toupper(input_char);
        }

        std::cout << "Enter quantity\t: ";
        std::cin >> quantity;

        switch (input_char) {
            case 'C': {
                total_price += 2 * quantity;
                break;
            }

            case 'V': {
                total_price += 3 * quantity;
                break;
            }

            case 'S': {
                total_price += 3.5 * quantity;
                break;
            }
        }

        std::cout << "\nDo you want to buy more ? <Y-Yes N-No>: ";
        std::cin >> to_continue;
        std::cout << std::endl;
    }
    while (toupper(to_continue) != 'N');

    std::cout << "******RECEIPT******\n"
              << "Name\t\t: " << name << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total price\t: RM" << total_price << std::endl;
}