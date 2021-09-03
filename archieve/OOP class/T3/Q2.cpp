#include <iostream>

class Cuboid {
private:
    int width, height, length, volume;
public:
    void setData();
    void findVolume();
    void display();
};

void Cuboid::setData() {
    std::cout << "Enter the width, length, height of a Cuboid object: ";
    std::cin >> width >> length >> height;
}

void Cuboid::display() {
    std::cout << "\n------Display Cuboid Data-----\n"
              << "Width: " << width << " cm\n"
              << "Length :" << length << " cm\n"
              << "Height :" << height << " cm\n"
              << "Volume :" << volumer << " cm^3"
              << std::endl;
}

int main(void) {
    Cuboid q;
    q.setData();
    q.findVolume();
    q.display();
}