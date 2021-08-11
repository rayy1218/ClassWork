#include <iostream>

class Manisan {
private:
    float kacang_hijau, jagung_durian, pulut_hitam, santan_mango, pudding, fruit, price;
public:
    void buburManisan(float kacang_hijau, float jagung_durian, float pulut_hitam,
                      float santan_mango, float pudding, float fruit);
    void manisanOrder();
    void calcPrice();
};

void Manisan::buburManisan(float kacang_hijau, float jagung_durian, float pulut_hitam, float santan_mango,
                           float pudding, float fruit) {

    this->kacang_hijau = kacang_hijau;
    this->jagung_durian = jagung_durian;
    this->pulut_hitam = pulut_hitam;
    this->santan_mango = santan_mango;
    this->pudding = pudding;
    this->fruit = fruit;

    manisanOrder();
}

void Manisan::manisanOrder() {
    int total = kacang_hijau + jagung_durian + pulut_hitam + santan_mango + pudding + fruit;
    std::cout << "\nHere Your Bubur/Manisan Order List\n"
              << "-------------------------------------\n"
              << "Bubur Kacang Hijau :" << kacang_hijau << " bowl(s)\n"
              << "Bubur Jagung + Durian :" << jagung_durian << " bowl(s)\n"
              << "Bubur Pulut Hitam :" << pulut_hitam << " bowl(s)\n"
              << "Pulut, Santan & Mango :" << santan_mango << " bowl(s)\n"
              << "Creamy Marble Pudding :" << pudding << " bowl(s)\n"
              << "Fresh Mix Local Fruits :" << fruit << " bowl(s)\n\n"
              << ">> Total bowls :" << total << "\n";
}

void Manisan::calcPrice() {
    price = kacang_hijau * 2.5 + jagung_durian * 4.5 + pulut_hitam * 2.5 +
            santan_mango * 4.5 + pudding * 2 + fruit * 2;
    std::cout << ">> Thank you. Your order price is RM " << price << std::endl;
}

int main(void) {
    Manisan BM;
    char input;

    std::cout << "---------------------------------------\n"
                 "      ++ Bubur & Manisan Stall ++\n"
                 "---------------------------------------" << std::endl;
    std::cout << "Looking for a yummy Bubur/Manisan? [Y/N]" << std::endl;
    {
        char input;
        std::cin >> input;
        if (toupper(input) == 'N') {exit(0);}
    }

    do {
        float kacang_hijau, jagung_durian, pulut_hitam, santan_mango, pudding, fruit;

        std::cout << "\n........Yummy Bubur & Manisan Selection........." << std::endl;
        std::cout << "[1] Bubur Kacang Hijau (bowl) :";
        std::cin >> kacang_hijau;
        std::cout << "[2] Bubur Jagung + Durian (bowl) :";
        std::cin >> jagung_durian;
        std::cout << "[3] Bubur Pulut Hitam (bowl) :";
        std::cin >> pulut_hitam;
        std::cout << "[4] Pulut, Santan & Mango (bowl) :";
        std::cin >> santan_mango;
        std::cout << "[5] Creamy Marble Pudding (bowl) :";
        std::cin >> pudding;
        std::cout << "[6] Fresh Mix Local Fruits (bowl) :";
        std::cin >> fruit;
        std::cout << "\nPlease be seated. Your order will be served shortly...\n";

        BM.buburManisan(kacang_hijau, jagung_durian, pulut_hitam, santan_mango, pudding, fruit);
        BM.calcPrice();

        std::cout << "\nWould you like to make another order? [Y/N]" << std::endl;
        std::cin >> input;
    }
    while (toupper(input) != 'N');
}