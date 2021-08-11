#include <iostream>

class Cuboid {
private:
    int width, height, length, volume;
public:
    void setData();
    void findVolume();
    void display();

    int getWidth();
    int getHeight();
    int getLength();
    int getVolume();
};

void Cuboid::setData() {
    std::cout << "Enter the width, length, height of a Cuboid object: ";
    std::cin >> width >> length >> height;
}

void Cuboid::findVolume() {
    volume = width * length * height;
}

void Cuboid::display() {
    std::cout << "\n------Display Cuboid Data-----\n"
              << "Width: " << getWidth() << " cm\n"
              << "Length :" << getLength() << " cm\n"
              << "Height :" << getHeight() << " cm\n"
              << "Volume :" << getVolume() << " cm^3"
              << std::endl;
}

int Cuboid::getWidth() {return width;}

int Cuboid::getHeight() {return height;}

int Cuboid::getLength() {return length;}

int Cuboid::getVolume() {
    findVolume();
    return volume;
}

int main(void) {
    Cuboid q;
    q.setData();
    q.findVolume();
    std::cout << "\n------Display Cuboid Data-----\n"
              << "Width: " << q.getWidth() << " cm\n"
              << "Length :" << q.getLength() << " cm\n"
              << "Height :" << q.getHeight() << " cm\n"
              << "Volume :" << q.getVolume() << " cm^3"
              << std::endl;
}