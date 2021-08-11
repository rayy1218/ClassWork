#include <iostream>
#include <iomanip>

struct Rental {
    char name[20];
    float rent;
    int month;
};

float report(const Rental arr[]) {
    float total = 0;
    std::cout << "---------------------------------\n"
              << "- AMOUNT DUE MORE THAN $1000.00 -\n"
              << "---------------------------------"
              << std::endl;

    for (int i = 0; i < 3; i += 1) {
        float unpaid_rental = arr[i].month * arr[i].rent;

        if (unpaid_rental <= 1000) {continue;}

        total += unpaid_rental;

        std::cout << "Tenant name : " << arr[i].name << std::endl
                  << "Monthly rental : $ " << arr[i].rent << std::endl
                  << "Unpaid months : " << arr[i].month << std::endl
                  << "Unpaid amount : $ " << unpaid_rental << std::endl << std::endl;
    }

    return total;
}

int main(void) {
    struct Rental R[3] = {{"Megan", 300, 4},
                          {"Johnson", 250, 1},
                          {"David", 790, 2}};

    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    float total = report(R);
    std::cout << "Total rental to be collected: $" << total << std::endl;
}