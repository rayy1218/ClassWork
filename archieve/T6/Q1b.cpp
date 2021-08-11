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
    MasterStudent ms_arr[4] = {MasterStudent("Philip Morales", "Working with Generation X employees: food industry", 1),
                               MasterStudent("Cameron Connor", "Collective Co-Creation within the Open Source Software Community", 1),
                               MasterStudent("Meriam Miles", "What Makes Online Video Advertisements Go Viral?", 0),
                               MasterStudent("Dory Dean", "Social media use for corporate communications", 0)};

    for (MasterStudent &ms : ms_arr) {
        std::cout << "\n=================================" << std::endl;
        std::cout << " Masters Student Details "<< std::endl;
        std::cout << "================================="<< std::endl;
        std::cout << "Name \t: " << ms.getName() << std::endl;
        std::cout << "Title \t: " << ms.getTitle() << std::endl;
        std::cout << "Status \t: ";

        if (ms.getStatus() == 1) {std::cout << "Approved" << std::endl;}
        else {std::cout << "Pending" << std::endl;}
    }
}