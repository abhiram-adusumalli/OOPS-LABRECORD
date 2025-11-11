#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;

public:
  
    void getData() {
        cout << "Enter Roll Number and Name: ";
        cin >> roll >> name;
    }

    
    void showData() const {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student student1;
    Student* ptr = &student1; 

   =    mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm                           
    ptr->getData();
    ptr->showData();

    return 0;
}

