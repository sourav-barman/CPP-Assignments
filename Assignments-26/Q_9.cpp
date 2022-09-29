/*Define a class Bill and define its member function get() to take detail of customer, calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/

#include <iostream>
#include <cstring>
using namespace std;

class Bill {
    private:
        char customerName[30];
        int customerId;
        int unit;
    public:
        Bill() {}
        Bill(const char * name, int id, int unt) {
            strcpy(customerName, name);
            customerId = id;
            unit = unt;
        }
        float calculateBill() {
            float bill;    

            if (unit < 100) 
                bill = unit * 1.20;
            else if (unit <= 200)
                bill = (99 * 1.20) + (unit-99) * 2.0;
            else    
                bill = (99 * 1.20) + (101 * 2.0) + (unit - 200) * 3.0;

            return bill;
        }
        void display() {
            cout << "\nCustomer Name: " << customerName << " Id: " << customerId << " Unit: " << unit;
        }
};

int main() {
    Bill b1("Sourav Barman", 12354, 84);
    Bill b2("Avijit Basak", 14565, 152);
    Bill b3("Preeti Sinha", 16584, 314);

    b1.display();
    cout << "\nElectricity Bill: " << b1.calculateBill();
    b2.display();
    cout << "\nElectricity Bill: " << b2.calculateBill();
    b3.display();
    cout << "\nElectricity Bill: " << b3.calculateBill();

    return 0;
}