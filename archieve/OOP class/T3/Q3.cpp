#include <iostream>
#include <cstring>

class Purchase {
private:
    char name[20], code[30];
    int qty;
    float price, total;
public:
    void setData(const char name[], const char code[], int qty, float price);
    void calculate();
    void print();
};

void Purchase::setData(const char name[], const char code[], const int qty, const float price) {
    strcpy(this->name, name);
    strcpy(this->code, code);
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
    {
        char name[20], code[20];
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
        std::cout << "Enter price : RM ";
        std::cin >> price;

        p.setData(name, code, qty, price);
    }

    p.calculate();
    p.print();
}
