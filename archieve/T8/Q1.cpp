#include <iostream>
#include <cmath>

class Geometry {
private:
    float PI, height, radius;
public:
    friend class Cylinder;
    friend class Cone;

    Geometry(float height, float radius);
    ~Geometry();
};

class Cylinder {
private:
    float vol;
public:
    void calcVol(Geometry *g);
};

class Cone {
private:
    float vol;
public:
    void calcVol(Geometry &g);
};

Geometry::Geometry(float height, float radius):
        PI(3.142), height(height), radius(radius) {}

Geometry::~Geometry() {
    std::cout << "\n\n= END OF PROGRAM =" << std::endl;
}

void Cylinder::calcVol(Geometry *g) {
    vol = g->PI * powf(g->radius, 2) * g->height;

    std::cout << "\nVolume of cylinder with radius " << g->radius
              << " and height " << g->height
              << " is : " << vol;
}

void Cone::calcVol(Geometry &g) {
    vol = (g.PI * powf(g.radius, 2) * g.height) / 3;

    std::cout << "\nVolume of cone with radius " << g.radius
              << " and height " << g.height
              << " is : " << vol;
}

int main() {
    float hg, rd;
    std::cout << "Enter height: ";
    std::cin >> hg;
    std::cout << "Enter radius: ";
    std::cin >> rd;

    Geometry gmt(hg, rd);
    Cylinder cyc;
    cyc.calcVol(&gmt);
    Cone cn;
    cn.calcVol(gmt);
}