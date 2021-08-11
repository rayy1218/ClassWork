#include <iostream>
#include <iomanip>

class Produce {
private:
    float price, total;
    int qty;
public:
    Produce();

    void setInput(float price, int qty);
    friend class Bill;
};

class Bill {
private:
    float grand_total;
public:
    Bill();

    void display();
    void operator +=(const Produce &produce);
};

Produce::Produce():
        price(0), total(0), qty(0) {}

void Produce::setInput(float price, int qty) {
    this->price = price;
    this->qty = qty;

    total = price * qty;
}

Bill::Bill():
        grand_total(0) {}

void Bill::operator+=(const Produce &produce) {
    grand_total += produce.total;
}

void Bill::display() {
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "::The grand total of the bill is: RM" << grand_total << std::endl;
}

int main() {
    Bill bl;
    Produce pd;
    char input;

    do {
        float price;
        int qty;

        std::cout << "Enter price: RM";
        std::cin >> price;

        std::cout << "Enter quantity: ";
        std::cin >> qty;

        std::cout << std::fixed << std::showpoint << std::setprecision(2);
        std::cout << "Subtotal: RM" << price * qty << std::endl;

        pd.setInput(price, qty);

        std::cout << "\nContinue (y/n)? ";
        std::cin >> input;
        std::cout << std::endl;
    }
    while (toupper(input) == 'Y');

    bl.display();
}