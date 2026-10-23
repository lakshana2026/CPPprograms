#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created!" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Student object copied!" << endl;
    }

    // Member Function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Student object destroyed!" << endl;
    }
};

int main()
{
    Student s1(205, "Priya");

    cout << "\nOriginal Student Details:" << endl;
    s1.display();

    Student s2 = s1;  // Invokes Copy Constructor

    cout << "\nCopied Student Details:" << endl;
    s2.display();

    return 0;
}
