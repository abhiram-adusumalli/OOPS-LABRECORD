#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    
    Student() {
        roll = 0;
        name = "unknown";
        cout << "Default Constructor called" << endl;
    }

    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;                
    s1.display();

    Student s2(101, "John");    
    s2.display();

    return 0;
}

