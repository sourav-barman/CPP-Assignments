/*Create a student class and overload new and delete operators as a member function of the class.*/

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Student {
private:
    char *name;
    int age;
public:
    Student() {
        cout << "Default constructor called." << endl;
        name = NULL;
        age = 0;
    }
    Student(const char *s, int ag) {
        cout << "Parameterized constructor called." << endl;
        name = new char[strlen(s) + 1];
        strcpy(name, s);
        age = ag;
    }    
    ~Student() {
        cout << "Destructor called." << endl;
        delete []name;
    }
    void display(void) {
        cout << "Name: " << name << " , Age: " << age << endl;
    }
    void * operator new(size_t size) {
        cout << "Overloaded new operator called." << endl;
        void *p = malloc(size);
        return p;
    }
    void operator delete(void *p) {
        cout << "Overloaded delete operator called." << endl;
        free(p);
    }
};

int main() {
    Student *p = new Student("Sourav", 26);
    p->display();
    delete(p);

    int *q = new int(123);
    cout << *q;
    delete(q);

    return 0;
}
