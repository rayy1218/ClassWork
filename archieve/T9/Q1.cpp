#include <iostream>

class ArtificialGrass {
private:
    int length, width, depth;
public:
    ArtificialGrass();
    ~ArtificialGrass();

    void grassData(int q, int r, int s);
    int grassGauge();
};

ArtificialGrass::ArtificialGrass():
        length(4), width(6), depth(3) {}

ArtificialGrass::~ArtificialGrass() {
    std::cout << "\nDeleting the artificial grass details." << std::endl;
}

void ArtificialGrass::grassData(int q, int r, int s) {
    length = q;
    width = r;
    depth = s;
}

int ArtificialGrass::grassGauge() {
    return length * width * depth;
}

int main(void) {
    ArtificialGrass *previous_grass = new ArtificialGrass;

    std::cout << "++++++++++++++++++++++++++++++++++++++++\n";
    std::cout << "The Artificial Grass Details\n";
    std::cout << "++++++++++++++++++++++++++++++++++++++++\n";
    std::cout << "The Previous Batch Set left. . . .\n";
    std::cout << "Available Grass Size: " << previous_grass->grassGauge() << "cm [2 pieces in one set]\n";

    if (previous_grass != nullptr) {delete previous_grass;}

    ArtificialGrass *grass_arr = new ArtificialGrass[3];

    std::cout << "\n========================================" << std::endl;
    std::cout << "      The Stocks Available. . ." << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++";

    for (int i = 0; i < 3; i += 1) {
        grass_arr[i].grassData(i + 2, i + 2, i + 2);
        std::cout << "\nThe Grass Size SET#" << i + 1 << std::endl;
        std::cout << "->> " << grass_arr[i].grassGauge() << "cm [2 pieces in one set]" << std::endl;
    }

    delete [] grass_arr;
}