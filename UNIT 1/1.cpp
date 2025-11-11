#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brandName;
    string processorType;
    int ramSize;  

public:
    
    Laptop(string brand, string processor, int ram) {
        brandName = brand;
        processorType = processor;
        ramSize = ram;
    }

    
    void display() const {
        cout << "Brand Name     : " << brandName << endl;
        cout << "Processor Type : " << processorType << endl;
        cout << "RAM Size       : " << ramSize << " GB" << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Laptop laptop1("Dell", "Intel  i5", 8);
    

    cout << "Laptop 1 Details:\n";
    laptop1.display();

    

    return 0;
}
