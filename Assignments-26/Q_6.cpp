/*Define a class student and write a program to enter student details using constructor and define member function to display all the details.*/

#include <iostream>
#include <cstring>
using namespace std;

class Student {
    private:
        char name[30];
        int roll;
        int age;
        char grade[5];
    public:
        Student() {}
        Student(const char *nm, int rno, int ag, const char *grd) {
            strcpy(name, nm);
            roll = rno;
            age = ag;
            strcpy(grade, grd);
        }
        void display() {
            cout << "Name: " << name << " Roll: " << roll << " Age: " << age << " Class: " << grade << endl;
        }       
};

int main() {
    Student s1("Avijit Basak", 11, 21, "viii"), s2("Sourav Barman", 12, 26, "xii");

    cout << "Record of Student1: ";
    s1.display();
    cout << "Record of Student2: ";
    s2.display();

    return 0;
}