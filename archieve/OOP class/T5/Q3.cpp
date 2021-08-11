#include <iostream>
#include <iomanip>

class PreOrder {
private:
    std::string title;
    double price;
public:
    void bookSelection();
    void bookPreOrder();
    double getPrice();
    std::string getTitle();
};

class Buyer {
private:
    std::string book_title, name;
    double payment;
    PreOrder pre_order;
public:
    void setData();
    void getBook();
    void showDetail();
};

void PreOrder::bookSelection() {
    std::cout << "\n[1] Mum's Favourite Recipes Book                          Price: RM14.00\n"
              << "[2] Weight Watchers Everyday Favourite Recipes Book       Price: RM12.00\n"
              << "[3] The Skinny 5:2 Diet Family Recipes Book               Price: RM10.90\n"
              << "[4] Favourite Teatime Recipes Book                        Price: RM10.00\n"
              << "[5] Favourite Traditional and Retro Recipes               Price: RM13.00\n";
}

void PreOrder::bookPreOrder() {
    int selection;
    std::cout << "\nEnter your choice, put your selection number:\n";
    std::cin >> selection;

    switch (selection) {
        case 1: {
            title = "Mum's Favourite Recipes Book";
            price = 14;
            break;
        }

        case 2: {
            title = "Weight Watchers Everyday Favourite Recipes Book";
            price = 12;
            break;
        }

        case 3: {
            title = "The Skinny 5:2 Diet Family Recipes Book";
            price = 10.9;
            break;
        }

        case 4: {
            title = "Favourite Teatime Recipes Book";
            price = 10;
            break;
        }

        case 5: {
            title = "Favourite Traditional and Retro Recipes";
            price = 13;
            break;
        }

        default:
            title = "No title";
            price = 0;
    }
}

double PreOrder::getPrice() {return price;}
std::string PreOrder::getTitle() {return title;}

void Buyer::setData() {
    std::cout << "====================================\n"
                 " FAVOURITE RECIPE BOOK OF THE MONTH\n"
                 "====================================\n";
    std::cout << "Type your name: ";
    std::cin >> name;

    getBook();
}

void Buyer::getBook() {
    pre_order.bookSelection();
    pre_order.bookPreOrder();

    book_title = pre_order.getTitle();
    payment = pre_order.getPrice();
}

void Buyer::showDetail() {
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "....................................\n"
              << name << ", Your order details\n"
              << "....................................\n"
              << "Book title: " << book_title << '\n'
              << "Price: RM" << payment << std::endl;
}

int main(void) {
    Buyer buyer1;

    buyer1.setData();
    buyer1.showDetail();
}