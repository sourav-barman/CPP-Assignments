/*Create two classes Invent1 and Invent2 and also add necessary constructors in it. 
Now add functions to support Invent1 to float and Invent1 to Invent2 type.*/

#include <iostream>
using namespace std;

class Invent1 {
private:
    int id;
    int items;
    float price;
public: 
    Invent1() {
        id = items = price = 0;
    }
    Invent1(int x, int y, float z) {
        id = x;
        items = y;
        price = z;
    }
    int getId() { return id; }
    int getItems() { return items; }
    float getPrice() { return price; }
    operator float() { return price; }
    void display() {
        cout << "Id: " << id << " Price: " << price << " Items: " << items << endl;
    }
};

class Invent2 {
private:
    int id;
    float value;
public:
    Invent2() { 
        id = value = 0;
    }
    Invent2(int x, float y) {
        id = x;
        value = y;
    }
    Invent2(Invent1 v) {
        id = v.getId();
        value = v.getItems() * v.getPrice();
    }
    void display() {
        cout << "Id: " << id << " Value: " << value << endl;
    }  
};

int main() {
    Invent1 v(123, 5, 399.25);
    Invent2 w;

    float itemPrice;
    itemPrice = v;
    w = v;

    v.display();
    cout << "Item Price: " << itemPrice << endl;
    w.display();

    return 0;
}