#include <iostream>

class Product {
private:
    int prod_ID;
protected:
    float total_price;
public:
    Product();

    void inputProdID();

    int getProdID();
};

class CanFood : public Product {
private:
    float unit_price;
    int order_unit;
public:
    void getProduct();
    void calculateTotal();
    void displayProduct();
};

Product::Product():
        total_price(0) {}

void Product::inputProdID() {
    std::cout << "\nEnter product ID\t: ";
    std::cin >> prod_ID;
}

int Product::getProdID() {
    return prod_ID;
}

void CanFood::getProduct() {
    inputProdID();

    std::cout << "Enter price\t\t\t: RM";
    std::cin >> unit_price;
    std::cout << "Enter order unit\t: ";
    std::cin >> order_unit;
}

void CanFood::calculateTotal() {
    total_price = unit_price * order_unit;
}

void CanFood::displayProduct() {
    std::cout << "\nProduct ID\t: " << getProdID() << std::endl;
    std::cout << "Total price\t: " << total_price << std::endl;
}

int main(void) {
    int canned_food_num;

    std::cout << "How many types of canned food? ";
    std::cin >> canned_food_num;

    CanFood *tp = new CanFood[canned_food_num];

    for (int i = 0; i < canned_food_num; i += 1) {
        tp[i].getProduct();
        tp[i].calculateTotal();
    }

    for (int i = 0; i < canned_food_num; i += 1) {
        tp[i].displayProduct();
    }

    delete [] tp;
}
