#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void input() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;

        cin.ignore(); 
    }

    
    void display() const {
        cout << "\nStudent Details:\n";
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main() {
    Student student;

    student.input();
    student.display();

    return 0;
}
