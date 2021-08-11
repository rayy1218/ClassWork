#include <iostream>
#include <string>

class Strawberry {
private:
    std::string selection;
    double price;
public:
    void dispStrawberrySelection();
    void purchase();
    double getPrice();
    std::string getSelection();
};

class Customer {
private:
    std::string straw_select, name;
    double payment;
    Strawberry st;
public:
    void setData();
    void getOrder();
    void dispDetail();
};

void Strawberry::dispStrawberrySelection() {
    std::cout << "[1] Strawberry & Nutella Crepe Price: RM10.00\n"
              << "[2] Strawberry & Chocolate Crepe Price: RM12.00\n"
              << "[3] Strawberry Waffle with Custard Price: RM13.40\n"
              << "[4] Strawberry Smoothie Price: RM10.00\n"
              << "[5] Strawberry & Country Cream Price: RM13.00\n";
}

void Strawberry::purchase() {
    int selection_int;
    std::cout << "Enter your choice based on the number\n";
    std::cin >> selection_int;

    selection = "Not available";
    price = 0;
    if (selection_int == 1) {
        selection = "Strawberry & Nutella Crepe";
        price = 10;
    }
    else if (selection_int == 2) {
        selection = "Strawberry & Chocolate Crepe";
        price = 12;
    }
    else if (selection_int == 3) {
        selection = "Strawberry Waffle with Custard";
        price = 13.4;
    }
    else if (selection_int == 4) {
        selection = "Strawberry Smoothie";
        price = 10;
    }
    else if (selection_int == 5) {
        selection = "Strawberry & Country Cream";
        price = 13;
    }
}

std::string Strawberry::getSelection() {return selection;}
double Strawberry::getPrice() {return price;}

void Customer::setData() {
    std::cout << "++++++++++++++++++++++++++++++++++\n"
              << "Tutti Frutti: Strawberry\n"
              << "++++++++++++++++++++++++++++++++++\n"
              << "Enter name :";
    std::cin >> name;
    std::cout << std::endl;
    getOrder();
}

void Customer::getOrder() {
    st.dispStrawberrySelection();
    st.purchase();
    straw_select = st.getSelection();
    payment = st.getPrice();
}

void Customer::dispDetail() {
    std::cout << "\n....................................\n"
              << name << ", Your purchase details\n"
              << "....................................\n"
              << "Selection : " << straw_select << "\n"
              << "Payment to be made : RM" << payment;
}

int main(void) {
    Customer c1;
    c1.setData();
    c1.dispDetail();
}