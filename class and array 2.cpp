#include <iostream>
using namespace std;

const int NUM_STUDENTS = 5;

class STUDENT INFO {
private:
    int rollNumbers[NUM_STUDENTS];
    int marks[NUM_STUDENTS];

public:
    void inputStudentData() {
        cout << "Enter roll numbers and marks of " << NUM_STUDENTS << " students:" << endl;
        for (int i = 0; i < NUM_STUDENTS; ++i) {
            cout << "Student " << (i + 1) << " roll number: ";
            cin >> rollNumbers[i];
            cout << "Student " << (i + 1) << " marks: ";
            cin >> marks[i];
        }
    }

    void displayStudentWithHighestMarks() {
        int highestMarks = marks[0];
        int highestMarksIndex = 0;

        // Find student with highest marks
        for (int i = 1; i < NUM_STUDENTS; ++i) {
            if (marks[i] > highestMarks) {
                highestMarks = marks[i];
                highestMarksIndex = i;
            }
        }

        // Display student with highest marks
        cout << "Student with the highest marks:" << endl;
        cout << "Roll Number: " << rollNumbers[highestMarksIndex] << endl;
        cout << "Marks: " << marks[highestMarksIndex] << endl;
    }
};

int main() {
    StudentInfo students;
    students.inputStudentData();
    students.displayStudentWithHighestMarks();

    return 0;
}

