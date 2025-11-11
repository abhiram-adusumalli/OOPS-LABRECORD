#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    int age;

public:
    
    Student(string n, int r, int a) {
        name = n;
        rollno = r;
        age = a;
    }

  
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("John", 101, 20);
    cout << "Student Details:" << endl;
    s1.display();
    return 0;
}

