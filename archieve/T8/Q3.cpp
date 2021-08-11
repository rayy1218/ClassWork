#include <iostream>
#include <cmath>

class Ticket {
private:
    int no;
    float price;
public:
    friend class Student;

    Ticket();

    void setTickets();
};

class Student {
private:
    std::string id, name, purchase;
    Ticket p;
public:
    void setStudent();
    void ticketEntry();
    void display();
};

Ticket::Ticket():
        price(10) {}

void Ticket::setTickets() {
    std::cout << "Please enter number of tickets to purchase: ";
    std::cin >> no;
}

void Student::setStudent() {
    std::cout << "Enter ID: ";
    std::cin >> id;
    std::cout << "Enter Name: ";
    std::cin >> name;
}

void Student::ticketEntry() {
    char input;
    std::cout << "Do you want to purchase charity tickets? [Enter Y or N]: ";
    std::cin >> input;

    if (toupper(input) == 'Y') {
        purchase = "Yes";
        p.setTickets();
    }
    else {
        purchase = "";
        std::cout << "--------No tickets purchase--------" << std::endl;
    }
}

void Student::display() {
    std::cout << "--------------------------------" << std::endl;
    std::cout << "        STUDENT DETAILS" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "ID\t: " << id << std::endl;
    std::cout << "Name\t: " << name << "\n" << std::endl;

    std::cout << "--------------------------------" << std::endl;
    std::cout << "      ADDITIONAL DETAILS" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    if (purchase == "Yes") {
        std::cout << "You've purchase " << p.no << " Tickets" << std::endl;
        std::cout << "Total amount: RM" << p.no * p.price  << "\n" << std::endl;
    }
    else {
        std::cout << "You've not purchased any tickets\n" << std::endl;
    }
}

int main(void) {
    Student student_arr[3];

    for (Student &student : student_arr) {
        student_arr->setStudent();
        student_arr->ticketEntry();
        student_arr->display();
    }
}