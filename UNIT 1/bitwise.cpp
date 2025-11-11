#include <iostream>
using namespace std;

int main() {
    int x = 14, y = 20;

    cout << "x & y = " << (x & y) << endl;
    cout << "x | y = " << (x | y) << endl;
    cout << "x ^ y = " << (x ^ y) << endl;
    cout << "1's complement of x = " << (~x) << endl;
    cout << "Left shift x by 2 bits = " << (x << 2) << endl;
    cout << "Right shift y by 2 bits = " << (y >> 2) << endl;

    return 0;
}

