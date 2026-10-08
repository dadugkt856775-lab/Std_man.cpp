#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;

    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }
};

bool compareMarks(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    vector<Student> students;

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int roll;
        string name;
        float marks;

        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Roll Number: ";
        cin >> roll;

        cout << "Name: ";
        cin >> name;

        cout << "Marks: ";
        cin >> marks;

        students.push_back(Student(roll, name, marks));
    }

    sort(students.begin(), students.end(), compareMarks);

    cout << "\n===== STUDENT DETAILS =====\n";

    for (auto s : students) {
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;

        if (s.marks >= 90)
            cout << "Grade: A+\n";
        else if (s.marks >= 80)
            cout << "Grade: A\n";
        else if (s.marks >= 70)
            cout << "Grade: B\n";
        else if (s.marks >= 60)
            cout << "Grade: C\n";
        else
            cout << "Grade: Fail\n";

        cout << "----------------------\n";
    }

    return 0;
}
