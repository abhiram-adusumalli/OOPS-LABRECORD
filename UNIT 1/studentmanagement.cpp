#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int marks[5];
    int total;
    float average;
    string grade;

public:
  
    Student(int rno, string n) {
        rollNumber = rno;
        name = n;
        total = 0;
    }

    void enterMarks() {
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        average = total / 5.0;
        setGrade();
    }

  
    void setGrade() {
        if (average >= 60)
            grade = "First class";
        else if (average >= 50)
            grade = "Second class";
        else if (average >= 35)
            grade = "Pass";
        else
            grade = "Fail";
    }


    void displayResult() {
        cout << "--- Student Result ---" << endl;
        cout << "Roll No: " << rollNumber << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total = " << total << endl;
        cout << "Average = " << average << endl;
        cout << grade << endl;
    }
};

int main() {
    int rollNo;
    string name;

    cout << "Enter student roll number: ";
    cin >> rollNo;
    cout << "Enter student name: ";
    cin >> name;

    Student s1(rollNo, name);
    s1.enterMarks();
    s1.displayResult();

    return 0;
}

