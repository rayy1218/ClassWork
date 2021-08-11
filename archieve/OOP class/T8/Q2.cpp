#include <iostream>
#include <cmath>

class Geometry {
private:
    float PI, height, radius, length;
public:
    friend class Cylinder;
    friend class Cone;
    friend class Cube;

    Geometry(float height, float radius, float length);
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

class Cube {
private:
    float vol;
public:
    void calcVol(Geometry &g);
};

Geometry::Geometry(float height, float radius, float length):
        PI(3.142), height(height), radius(radius), length(length) {}

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

void Cube::calcVol(Geometry &g) {
    vol = powf(g.length, 3);

    std::cout << "\nVolume of cube with length " << g.length
              << " is : " << vol;
}

int main() {
    float hg, rd, lg;
    std::cout << "Enter height: ";
    std::cin >> hg;
    std::cout << "Enter radius: ";
    std::cin >> rd;
    std::cout << "Enter length: ";
    std::cin >> lg;

    Geometry gmt(hg, rd, lg);
    Cylinder cyc;
    cyc.calcVol(&gmt);
    Cone cn;
    cn.calcVol(gmt);
    Cube cb;
    cb.calcVol(gmt);
}