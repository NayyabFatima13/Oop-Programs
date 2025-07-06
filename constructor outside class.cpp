#include <iostream>
using namespace std;
class student 
{
private:
    int rno;
    char name[50];
    double fee;
public:
    // constructor declaration only
    student();
    void display();
};
// outside definition of constructor
student::student()
{
    cout << "Enter the RollNo:";
    cin >> rno;
    cout << "Enter the Name:";
    cin >> name;
    cout << "Enter the Fee:";
    cin >> fee;
}
void student::display()
{
	cout << endl << "rollnumber" << "\t" << "name" << "\t" << "fee";
    cout << endl << rno          << "\t" << name   << "\t" << fee;
}
int main()
{
    student s;
    s.display();
    return 0;
}
// defining the constructor outside the class
