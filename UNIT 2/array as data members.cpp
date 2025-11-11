#include <iostream>
using namespace std;

class Grades {
    int marks[5];

public:
    void input() {
        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    double avg() {
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += marks[i];
        return static_cast<double>(sum) / 5;
    }

    void display() {
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << "\nAverage: " << avg() << endl;
    }
};

int main() {
    Grades g;
    g.input();
    g.display();
    return 0;
}

