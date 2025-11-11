#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int r = 0) : value(r) {
        cout << "constructor called with value " << value << endl;
    }

    // copy constructor
    Number(const Number &n) : value(n.value) {
        cout << "copy constructor called with value " << value << endl;
    }
    int getValue() const {
        return value;
    }
};
Number createNumber() {
    Number n(10);
    return n;
}

int main() {
    Number n1;
    Number n2(5);
    Number n3 = n2;

    cout << "n1 value = " << n1.getValue() << endl;
    cout << "n2 value = " << n2.getValue() << endl;
    cout << "n3 value = " << n3.getValue() << endl;

    Number n4 = createNumber();
    cout << "n4 value = " << n4.getValue() << endl;

    return 0;
}

