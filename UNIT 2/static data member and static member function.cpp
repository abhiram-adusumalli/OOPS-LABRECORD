#include <iostream>
using namespace std;

class Counter {
private:
    static int count; 

public:
    
    Counter() {
        count++;
    }

   
    ~Counter() {
        count--;
    }

    
    static int getCount() {
        return count;
    }
};


int Counter::count = 0;

int main() {
    Counter c1, c2;
    cout << "Objects created: " << Counter::getCount() << endl;

    Counter c3; 
    cout << "Objects created: " << Counter::getCount() << endl;

    {
        Counter c4; 
        cout << "Objects created: " << Counter::getCount() << endl;
    } 
    cout << "Objects after inner scope: " << Counter::getCount() << endl;

    return 0;
}

