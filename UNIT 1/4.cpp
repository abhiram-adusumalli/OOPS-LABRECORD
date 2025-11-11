#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    string company;

public:
   
    Car(string m, string c) {
        model = m;
        company = c;
    }

    void display() const {
        cout << "Model   : " << model << endl;
        cout << "Company : " << company << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
  
    Car car1("Model S", "Tesla");
    Car car2("Civic", "Honda");
    Car car3("Mustang", "Ford");

  
    cout << "Car 1 Details:\n";
    car1.display();

    cout << "Car 2 Details:\n";
    car2.display();

    cout << "Car 3 Details:\n";
    car3.display();

    return 0;
}
