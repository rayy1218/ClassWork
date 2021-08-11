#include <iostream>
#include <string>

class CarProduction {
private:
    int quantity;
    std::string plant_no;
public:
    void setData(std::string no, int qty);
    void display_graph();
};

void CarProduction::setData(std::string no, int qty) {
    plant_no = no;
    quantity = qty;
}

void CarProduction::display_graph() {
    const int ASTERISK_PER_CAR = 2;
    std::string bar;

    int asterisk_num = (quantity / ASTERISK_PER_CAR);
    for (int i = 1; i <= asterisk_num; i += 1) {bar += '*';}
    int hash_num = quantity - (asterisk_num * 2);
    for (int i = 1; i <= hash_num; i += 2) {bar += '#';}

    std::cout << "\n====================================\n"
              << plant_no << '\n'
              << bar;
}

int main(void) {
    CarProduction C[4];

    std::string no;
    int qty;
    for (int i = 0; i < 4; i += 1) {
        std::cout << "Enter the plant no#\t\t\t: ";
        std::cin >> no;
        std::cout << "Enter the amount of car produced today\t: ";
        std::cin >> qty;

        C[i].setData(no, qty);
    }

    std::cout << "\n Daily Productivity Report " << std::endl;
    for (CarProduction c : C) {
        c.display_graph();
    }
}