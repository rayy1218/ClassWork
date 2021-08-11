#include <iostream>
#include <iomanip>
#include <string>

class Books {
private:
    std::string isbn_no, title, author;
    float price, discounted_price, discount_perc;
public:
    Books();
    Books(std::string isbn_no, std::string title, std::string author, float price , float discount_perc);
    ~Books();

    void setData();
    void calcDiscountedPrice();
    void print();

    float getDiscountedPrice();
};

Books::Books() {}

Books::Books(std::string isbn_no, std::string title, std::string author, float price, float discount_perc):
        isbn_no(isbn_no), title(title), author(author), price(price), discount_perc(discount_perc) {}

Books::~Books() {
    std::cout << "\nEnjoy reading " << title << std::endl;
}

void Books::setData() {
    std::cout << "\nEnter ISBN: ";
    getline(std::cin, isbn_no);
    std::cout << "Enter Title: ";
    getline(std::cin, title);
    std::cout << "Enter Author's name: ";
    getline(std::cin, author);
    std::cin.ignore();
    std::cout << "Enter price: RM";
    std::cin >> price;
    std::cout << "Enter discount (%):";
    std::cin >> discount_perc;
    std::cin.ignore();
    std::cout << std::endl;
}

void Books::calcDiscountedPrice() {
    discounted_price = price - price * (discount_perc / 100);
}

void Books::print() {
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "\n--------------------------------------------------------\n"
              << "                      Book Details\n"
              << "--------------------------------------------------------\n"
              << "ISBN: " << isbn_no << "\n"
              << "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Original Price: RM " << price << "\n"
              << "Discounted Price: RM " << discounted_price << std::endl;
}

float Books::getDiscountedPrice() {
    return discounted_price;
}

int main(void) {
    Books b1("102009912", "7 Habits of Highly Effective People", "Stephen Covey",
             400, 30);

    std::cout << ".........Book of the Month......" << std::endl;

    b1.calcDiscountedPrice();
    b1.print();

    Books b2[3];

    std::cout << "Now we shall enter and display data for 3 special books...." << std::endl;

    int price_b30_book_num = 0;
    Books *most_expensive_book = b2;
    for (Books &book : b2) {
        book.setData();
        book.calcDiscountedPrice();
        if (book.getDiscountedPrice() < 30) {price_b30_book_num += 1;}
        if (book.getDiscountedPrice() > most_expensive_book->getDiscountedPrice()) {
            most_expensive_book = &book;
        }
        book.print();
    }

    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "The most expensive book is RM " << most_expensive_book->getDiscountedPrice() << std::endl;
    std::cout << "The number of book that are below RM 30 are: " << price_b30_book_num << std::endl;
}