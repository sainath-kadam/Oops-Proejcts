#include <bits/stdc++.h>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    string department;
public:
    void setName(string Name) {
        name = Name;
    }
    void setRollNO(int Roll) {
        rollNo = Roll;
    }
    void setDepart(string Depart) {
        department = Depart;
    }
    string getName() {
        return name;
    }
    int getRollNo() {
        return rollNo;
    }
    string getDepratement() {
        return department;
    }
};

class University {
    vector<Student> ve;

public:
    void addStudent(Student student) {
        system("cls");
        ve.push_back(student);
    }

    void displayStudent() {
        if (ve.empty()) {
            cout << "No students added" << endl;
        } else {
            for (int i = 0; i < ve.size(); i++) {
                cout << "Student Name: " << ve[i].getName() << endl;
                cout << "Student Roll No: " << ve[i].getRollNo() << endl;
                cout << "Department: " << ve[i].getDepratement() << endl;
            }
        }
    }

    void search(int rollN) {
        system("cls");
        bool found = false;
        for (int i = 0; i < ve.size(); i++) {
            if (rollN == ve[i].getRollNo()) {
                cout << "Student Name: " << ve[i].getName() << endl;
                cout << "Student Roll No: " << ve[i].getRollNo() << endl;
                cout << "Department: " << ve[i].getDepratement() << endl;
                found = true;
                break; // No need to continue searching
            }
        }
        if (!found) {
            cout << "No record found" << endl;
        }
    }
};
int main() {
    University university;
    Student student;
    cout << "Enter Student Info" << endl;
    int exist = 1;
    while (exist != 0 && exist == 1) {
        string name, department;
        cout << "Name: ";
        cin >> name;
        student.setName(name);
        cout << "Roll No: ";
        int rollNo;
        cin >> rollNo;
        student.setRollNO(rollNo);
        cout << "Department: ";
        cin >> department;
        student.setDepart(department);

        university.addStudent(student);
        cout << "Student added" << endl;
        cout << "Enter 0 to exit or 1 to add more: ";
        cin >> exist;
    }
    university.displayStudent();
    int rollN;
    cout << "Enter rollNo for the Search: ";
    cin >> rollN;
    university.search(rollN);

    return 0;
}
