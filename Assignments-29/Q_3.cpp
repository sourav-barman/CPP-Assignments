/*Create a Product class and convert Product type to Item type using constructor.*/

#include <iostream>
using namespace std;

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
    int getProductId(void) {
        return productId;
    }
    float getProductPrice(void) {
        return productPrice;
    }
    void display(void) {
        cout << "Product Id: " << productId << " , Product Price: " << productPrice << endl;
    }
};

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
    Item(Product p) {
        itemId = p.getProductId();
        itemPrice = p.getProductPrice();
    }
    void display(void) {
        cout << "Item Id: " << itemId << " , Item Price: " << itemPrice << endl;
    }
};

int main() {
    Item i1;
    Product p1(12345, 599.0);

    i1 = p1;
    i1.display();

    return 0;
}
