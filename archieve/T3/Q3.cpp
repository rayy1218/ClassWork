#include <iostream>
#include <string>

class Purchase {
private:
    std::string name, code;
    int qty;
    float price, total;
public:
    void setData(std::string name, std::string code, int qty, float price);
    void calculate();
    void print();
};

void Purchase::setData(const std::string name, const std::string code, const int qty, const float price) {
    this->name = name;
    this->code = code;
    this->qty = qty;
    this->price = price;
}

void Purchase::calculate() {
    total = price * qty;
}

void Purchase::print() {
    std::cout << "========================\n"
              << "        RECEIPT         \n"
              << "========================\n"
              << "Name: " << name << "\n"
              << "Product Code: " << code << "\n"
              << "Quantity: " << qty << "\n"
              << "Product Price: RM" << price << "\n"
              << "Total Payment: RM" << total << "\n" << std::endl;
}

int main(void) {
    Purchase p;

    bool to_continue = true;

    do {

        {
            std::string name, code;
            int qty;
            float price;

            std::cout << "========================\n"
                         "        WELCOME         \n"
                         "========================\n";
            std::cout << "Enter name : ";
            std::cin >> name;
            std::cout << "Product code : ";
            std::cin >> code;
            std::cout << "Enter quantity : ";
            std::cin >> qty;
            std::cout << "Enter price : ";
            std::cin >> price;

            p.setData(name, code, qty, price);
        }

        p.calculate();
        p.print();

        char input;
        std::cout << "You have another customer to purchase item? [Y/N]: ";
        std::cin >> input;
        std::cout << std::endl;

        if (toupper(input) == 'N') {to_continue = false;}
    }
    while(to_continue);
}