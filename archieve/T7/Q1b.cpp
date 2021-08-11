#include <iostream>
#include <string>

class Bags {
private:
    std::string brand;
    float height, length, width;
public:
    Bags();
    Bags(const Bags &Bi);
    void setData();
    void display();

    friend void check(Bags &a, Bags &b, Bags &c);
};

Bags::Bags():
        brand("Adidas"), length(35), width(20), height(45) {}

Bags::Bags(const Bags &Bi):
        brand(Bi.brand), length(Bi.length), width(Bi.width), height(Bi.height) {

    std::cout << "\nDo you have the same bag??" << std::endl;
}

void Bags::setData() {
    std::cout << "Enter your bag's brand name: ";
    getline(std::cin, brand);
    std::cin.clear();
    std::cout << "Enter value length, width and height of your bag L, W, H: ";
    std::cin >> length >> width >> height;
    std::cin.ignore();
}

void Bags::display() {
    std::cout << "\n Your brand bag name is " << brand
              << " and the dimensions are: " << length << "L " << width << "W " << height << "H " << std::endl;
}

void check(Bags &a, Bags &b, Bags &c) {
    bool same = true;
    if (a.height != b.height || b.height != c.height) {
        std::cout << "not all bags have the same heights" << std::endl;
        return;
    }
    std::cout << "Common height for all 3 bags" << std::endl;
}

int main(void) {
    Bags bags_arr[3];

    for (Bags &bag : bags_arr) {
        bag.setData();
    }

    check(bags_arr[0], bags_arr[1], bags_arr[2]);
}
