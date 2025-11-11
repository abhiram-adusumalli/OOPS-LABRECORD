
#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {
        cout << "Constructor called: length = " << length << endl;
    }

    void setLength(int l) {
        length = l;
    }

    int getLength() const {
        return length;
    }
};
void passingValue(Box b) {
    b.setLength(50);
    cout << "inside pass by value: " << b.getLength() << endl;
}
void passingPointer(Box *b) {
    if (b) {
        b->setLength(100);
        cout << "inside pass by pointer: " << b->getLength() << endl;
    }
}
void passingReference(Box &b) {
    b.setLength(150);
    cout << "inside pass by reference: " << b.getLength() << endl;
}

int main() {
    Box b(10);
    cout << "original: " << b.getLength() << endl;

    passingValue(b);
    cout << "after pass by value: " << b.getLength() << endl;

    passingPointer(&b);
    cout << "after pass by pointer: " << b.getLength() << endl;

    passingReference(b);
    cout << "after pass by reference: " << b.getLength() << endl;

    return 0;
}

