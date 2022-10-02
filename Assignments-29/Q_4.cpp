/*Create Product class and convert Product type to Item type using casting operator.*/

#include <iostream>
using namespace std;

class Item {
private:
    int itemId;
    float itemPrice;
public:
    Item() {}
    Item(int id, float price) {
        itemId = id;
        itemPrice = price;
    }
    void display(void) {
        cout << "Item Id: " << itemId << " , Item Price: " << itemPrice << endl;
    }
};

class Product {
private:
    int productId;
    float productPrice;
public:
    Product() {}
    Product(int id, float price) {
        productId = id;
        productPrice = price;
    }
    operator Item() {
        Item tmp(productId, productPrice);
        return tmp;
    }
    void display(void) {
        cout << "Product Id: " << productId << " , Product Price: " << productPrice << endl;
    }
};



int main() {
    Item i1;
    Product p1(12345, 599.0);

    i1 = p1;
    i1.display();

    return 0;
}
