#include <iostream>
#include <iomanip>

class Rice {
private:
    float price_per_kg, total_weight;
public:
    Rice(float w);
    void display_rice();
};

class Product {
private:
    float kg;
public:
    Rice operator+(const Product &product);
    void setData();
};

Rice::Rice(float w):
        price_per_kg(10), total_weight(w) {}

void Rice::display_rice() {
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "          Rice Details" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total weight: " << total_weight << std::endl;
    std::cout << "Price per kg (RM): " << price_per_kg <<std::endl;
    std::cout << "Total (RM): " << total_weight * price_per_kg << std::endl;
}

Rice Product::operator+(const Product &product) {
    Rice rtn(this->kg + product.kg );
    return rtn;
}

void Product::setData() {
    std::cout << "Enter product's weight (kg): ";
    std::cin >> kg;
}

int main(void) {
    Product a, b;

    a.setData();
    b.setData();

    Rice h = a + b;

    h.display_rice();
}