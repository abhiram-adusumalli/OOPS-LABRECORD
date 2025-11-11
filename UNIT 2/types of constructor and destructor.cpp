#include <iostream>
#include <string>
using namespace std;

class person {
    string name;
public:
    person() {
        name = "unknown";
        cout << "default constructor called: " << name << endl;
    }
    person(const string &n) {
        name = n;
        cout << "parameterized constructor called: " << name << endl;
    }
    person(const person &p) {
        name = p.name;
        cout << "copy constructor called: " << name << endl;
    }

    void display() const {
        cout << "Name: " << name << endl;
    }
};

int main() {
    person p1;         
    person p2("alice");
    person p3 = p2;    

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
