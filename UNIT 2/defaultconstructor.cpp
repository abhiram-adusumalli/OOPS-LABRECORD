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
        cout << "Default Constructor Called" << endl;
    }

   
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

   
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;             
    s1.display();

   
    return 0;
}

