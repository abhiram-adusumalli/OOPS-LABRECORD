#include <iostream>
using namespace std;

int main() {
    int x = 3, y = 6;
    bool result;

    result = (x >= 4) && (y >= 6);
    cout << "(x >= 4) && (y >= 6) is " << result << endl;

    result = (x < 4) || (y > 6);
    cout << "(x < 4) || (y > 6) is " << result << endl;

    result = !(x < 4);
    cout << "!(x < 4) is " << result << endl;

    return 0;
}

