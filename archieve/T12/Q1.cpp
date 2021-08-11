#include <iostream>
#include <iomanip>
#include <string>

class Staff {
protected:
    std::string name, id;
    int age;
    float salary, nett_salary;
public:
    void setData();
};

class Executive : public Staff {
private:
    int ot_hrs;
    float rate;
public:
    void setExecutive();
    void calSalaryExec();
    void display();
};

class Salesperson : public Staff {
private:
    int units;
    float bonus;
public:
    void setSalesperson();
    void calSalarySales();
    void display();
};

void Staff::setData() {
    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, name, '\n');
    std::cin.clear();

    std::cout << "Enter ID: ";
    std::cin >> id;

    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cout << "Enter salary: RM";
    std::cin >> salary;
}

void Executive::setExecutive() {
    std::cout << "Enter OT_hrs: ";
    std::cin >> ot_hrs;

    std::cout << "Enter Rate: RM";
    std::cin >> rate;
}

void Executive::calSalaryExec() {
    nett_salary = salary + (ot_hrs * rate);
}

void Executive::display() {
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nName: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: RM" << salary << std::endl;
    std::cout << "OT Hours: " << ot_hrs << std::endl;
    std::cout << "OT Rate: RM" << rate << std::endl;
    std::cout << "Nett Salary: RM" << nett_salary << std::endl;
}

void Salesperson::setSalesperson() {
    std::cout << "Units: ";
    std::cin >> units;
}

void Salesperson::calSalarySales() {
    bonus = 250;
    if (units > 500) {
        bonus = 500;
    }

    nett_salary = salary + bonus;
}

void Salesperson::display() {
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\nName: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Salary: RM" << salary << std::endl;
    std::cout << "Units: " << units << std::endl;
    std::cout << "Bonus: RM" << bonus << std::endl;
    std::cout << "Nett Salary: RM" << nett_salary << std::endl;
}

int main(void) {
    char input;

    std::cout << "Enter [1] for Executive OR [2] for Salesperson: ";
    std::cin >> input;

    switch (input) {
        case '1': {
            Executive executive;
            executive.setData();
            executive.setExecutive();
            executive.calSalaryExec();
            executive.display();
            break;
        }

        case '2': {
            Salesperson salesperson;
            salesperson.setData();
            salesperson.setSalesperson();
            salesperson.calSalarySales();
            salesperson.display();
            break;
        }

        default: exit(0);
    }
}
