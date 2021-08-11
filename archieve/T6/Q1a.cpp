#include <iostream>
#include <string>

class MasterStudent {
private:
    std::string name, title;
    int status;
public:
    MasterStudent(std::string n, std::string t, int x);
    MasterStudent();
    ~MasterStudent();

    int getStatus();
    std::string getName();
    std::string getTitle();
};

MasterStudent::MasterStudent(std::string n, std::string t, int x):
        name(n), title(t), status(x) {}

MasterStudent::MasterStudent():
        name("Peter"), title("A Study on the Usability Factors of Mobile Apps."), status(1) {}

MasterStudent::~MasterStudent() {
    std::cout << "\n\n~End of Details~Student~" << name << std::endl;
}

int MasterStudent::getStatus() {return status;}
std::string MasterStudent::getName() {return name;}
std::string MasterStudent::getTitle() {return title;}

int main() {
    MasterStudent ms1;

    std::cout << "\n=================================" << std::endl;
    std::cout << " Masters Student Details "<< std::endl;
    std::cout << "================================="<< std::endl;
    std::cout << "Name \t: " << ms1.getName() << std::endl;
    std::cout << "Title \t: " << ms1.getTitle() << std::endl;
    std::cout << "Status \t: ";

    if (ms1.getStatus() == 1) {std::cout << "Approved" << std::endl;}
    else {std::cout << "Pending" << std::endl;}

    MasterStudent ms2("Aliana Mahmud", "Customer Satisfaction towards Green Products", 0);

    std::cout << "\n=================================" << std::endl;
    std::cout << " Masters Student Details "<< std::endl;
    std::cout << "================================="<< std::endl;
    std::cout << "Name \t: " << ms2.getName() << std::endl;
    std::cout << "Title \t: " << ms2.getTitle() << std::endl;
    std::cout << "Status \t: ";

    if (ms2.getStatus() == 1) {std::cout << "Approved" << std::endl;}
    else {std::cout << "Pending" << std::endl;}
}