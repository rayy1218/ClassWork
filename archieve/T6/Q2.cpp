#include <iostream>
#include <string>

class Employee {
private:
    std::string name, department, position;
    int id_number;
public:
    Employee(std::string name, int id_number, std::string department, std::string position);
    Employee(std::string name, int id_number);
    Employee();

    void setName(const std::string set_to) {name = set_to;}
    std::string getName() {return name;}
    std::string getDepartment() {return department;}
    std::string getPosition() {return position;}
    int getIdNumber() {return id_number;}
};

Employee::Employee(std::string name, int id_number, std::string department, std::string position):
        name(name), id_number(id_number), department(department), position(position) {}

Employee::Employee(std::string name, int id_number):
        name(name), id_number(id_number), department(""), position("") {}

Employee::Employee():
        name(""), id_number(0), department(""), position("") {}

int main(void) {
    Employee all_employee[3] = {Employee("Susan Meyers", 47899, "Accounting", "Vice President"),
                                Employee("Mark Jones IT", 39119, "IT", "Programmer"),
                                Employee("Joy Rogers", 81774, "Manufacturing", "Engineer")};

    all_employee[1].setName("Mark Jones");

    for (Employee &employee : all_employee) {
        std::cout << "Name: " << employee.getName() << "\n"
                  << "ID Number: " << employee.getIdNumber() << "\n"
                  << "Department: " << employee.getDepartment() << "\n"
                  << "Position: " << employee.getPosition() << std::endl;
        std::cout << std::endl;
    }
}