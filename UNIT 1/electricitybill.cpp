#include <iostream>
#include <string>
using namespace std;


class ElectricityBill {
private:
    int consumerNumber;
    int units;
    string consumerName;
    double billAmount;

public:
  
    ElectricityBill(int cno, string cname, int u) {
        consumerNumber = cno;
        consumerName = cname;
        units = u;
        billAmount = 0;
    }

   
    void calculateBill() {
        if (units < 100) {
            billAmount = units * 1.50;
        } else {
            billAmount = units * 3;
        }
    }

 
    void display() {
        cout << "--- Electricity Bill ---" << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: " << billAmount << endl;
    }
};

int main() {

    ElectricityBill e1(123, "Abhiram", 200);

    e1.calculateBill();
    e1.display();

    return 0;
}

