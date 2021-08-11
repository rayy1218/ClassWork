#include <iostream>
#include <string>

const int SIZE = 8;

class StationeryInventory {
private:
    std::string code_name;
    int warehouses[SIZE];
public:
    void setData(const int *arr);
    void displayReverse();
};

void process();

StationeryInventory hold;

void StationeryInventory::setData(const int *arr) {
    std::cout << "######################################\n"
                 "              Item Entry\n"
                 "--------------------------------------\n";
    std::cout << "Enter Stationery code: ";
    std::cin >> code_name;

    for (int i = 0; i < SIZE; i += 1) {
        *(warehouses + i) = *(arr + i);
    }
}

void StationeryInventory::displayReverse() {
    std::cout << "-------------------------------\n"
              << "      The Inventory Info\n"
              << "-------------------------------\n"
              << "Stationery code :" << code_name << std::endl;

    for (int i = SIZE - 1; i >= 0; i -= 1) {
        std::cout << "Warehouse " << SIZE - i << ": " << warehouses[i] << std::endl;
    }
}

void process() {
    int arr[SIZE];

    std::cout << "--------------------------------------\n"
              << "Colourful Book Holder Stock\n"
              << "--------------------------------------\n"
              << "Enter the stocks for " << SIZE << " warehouses:\n";

    for (int i = 0; i < SIZE; i += 1) {
        std::cin >> arr[i];
    }
    std::cout << std::endl;

    hold.setData(arr);
    hold.displayReverse();
}

int main(void) {
    StationeryInventory inv;

    int arr[SIZE] = {5, 10, 15, 22, 20, 25, 30, 35};
    inv.setData(arr);
    inv.displayReverse();
    process();
}