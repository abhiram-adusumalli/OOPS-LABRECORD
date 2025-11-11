#include <iostream>
using namespace std;

class Student {
    int roll;
public:

    Student(int r) {
        roll = r;
    }
    Student(const Student &s) {
        roll = s.roll;
        cout << "copy constructor called" << endl;
    }
    void display() const {
        cout << "Roll: " << roll << endl;
    }
};

int main(){
    Student s1(007);
    Student s2(s1);
    s1.display();
    s2.display();
    return 0;
}
