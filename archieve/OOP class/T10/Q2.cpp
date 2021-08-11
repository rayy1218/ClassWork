#include <iostream>
#include <string>

const int ITEM = 3;

class BeanBag {
private:
    std::string code_name;
    int stock[ITEM];
public:
    void latestBeanBagStock();
    void beanBagDetail(int *arr);
};

void BeanBag::latestBeanBagStock() {
    std::cout << "\n--------------------------------------" << std::endl;
    std::cout << "#Current# Ready Stocks Checking..." << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "Code Tracing >>" << code_name << "<<" << std::endl;

    for (int i = ITEM - 1; i >= 0; i -= 1) {
        std::cout << "Group " << ITEM - i << " production: " << stock[i] << " item(s) ready" << std::endl;
    }
}

void BeanBag::beanBagDetail(int *arr) {
    std::cout << "#######################################" << std::endl;
    std::cout << "      Stocks Checking" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Enter Bean Bag Chair code: ";
    std::cin >> code_name;

    for (int i = 0; i < ITEM; i += 1) {stock[i] = arr[i];}
}

BeanBag ready;

void StockUpdate() {
    int *stock_arr, group_num;

    std::cout << "Update new stocks from how many group?: ";
    std::cin >> group_num;

    stock_arr = new int[group_num];

    for (int i = 0; i < ITEM ; i += 1) {
        std::cout << "Ready stock from group " << ITEM - i <<  ": ";
        std::cin >> stock_arr[i];
    }

    ready.beanBagDetail(stock_arr);
    ready.latestBeanBagStock();

    delete [] stock_arr;
}

int main() {
    BeanBag bb;
    int arr[3] = {9, 7, 5};

    std::cout << "COSY Bean Bag Chair Sdn. Bhd." << std::endl;

    bb.beanBagDetail(arr);
    bb.latestBeanBagStock();

    std::cout << "\n------------------------------------------" << std::endl;
    std::cout << "  Ready Stocks [BB789] for this Month" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    StockUpdate();
}