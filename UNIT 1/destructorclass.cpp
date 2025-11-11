#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
  
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Constructor called for " << name << endl;
    }

   
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

   
    void display() {
        cout << "Student ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Creating S1..." << endl;
    Student s1(1, "Alice");  
    cout << "Creating S2..." << endl;
    Student s2(2, "Bob");    

    cout << "Displaying objects..." << endl;
    s1.display();
    s2.display();

    cout << "Exiting main..." << endl;
 
    return 0;
}

