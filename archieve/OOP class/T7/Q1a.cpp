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
    std::cin.clear();
}

void Bags::display() {
    std::cout << "\n Your brand bag name is " << brand
              << " and the dimensions are: " << length << "L " << width << "W " << height << "H " << std::endl;
}

int main(void) {
    Bags K;
    K.setData();
    K.display();

    Bags L;
    L.display();

    Bags M(L);
    M.display();
}
