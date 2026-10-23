
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int mark;
    char grade;
};

int main()
{
    vector<Student> students = {
        {"Divya", 88, ' '},
        {"Karthik", 46, ' '},
        {"Meena", 96, ' '},
        {"Surya", 73, ' '},
        {"Nithya", 81, ' '}
    };

    // Assign grades using transform and lambda
    transform(students.begin(), students.end(), students.begin(),
              [](Student s)
              {
                  if (s.mark >= 90)
                      s.grade = 'A';
                  else if (s.mark >= 75)
                      s.grade = 'B';
                  else if (s.mark >= 50)
                      s.grade = 'C';
                  else
                      s.grade = 'F';

                  return s;
              });

    // Remove students who scored below 50
    students.erase(
        remove_if(students.begin(), students.end(),
                  [](const Student& s)
                  {
                      return s.mark < 50;
                  }),
        students.end());

    // Sort students by marks in descending order
    sort(students.begin(), students.end(),
         [](const Student& a, const Student& b)
         {
             return a.mark > b.mark;
         });

    // Calculate total marks
    int total = accumulate(students.begin(), students.end(), 0,
                           [](int sum, const Student& s)
                           {
                               return sum + s.mark;
                           });

    // Count students scoring 75 or above
    int highScorers = count_if(
        students.begin(), students.end(),
        [](const Student& s)
        {
            return s.mark >= 75;
        });

    // Find the highest-scoring student
    auto topper = max_element(
        students.begin(), students.end(),
        [](const Student& a, const Student& b)
        {
            return a.mark < b.mark;
        });

    // Display student details
    cout << "Student Grade Analyzer\n";
    cout << "----------------------\n";
    cout << "Name\tMark\tGrade\n";

    for_each(students.begin(), students.end(),
             [](const Student& s)
             {
                 cout << s.name << "\t"
                      << s.mark << "\t"
                      << s.grade << endl;
             });

    cout << "\nTotal Marks: " << total << endl;
    cout << "Average Mark: "
         << static_cast<double>(total) / students.size() << endl;
    cout << "Students scoring 75 or above: "
         << highScorers << endl;

    if (topper != students.end())
    {
        cout << "Topper: " << topper->name
             << " (" << topper->mark << ")" << endl;
    }

    cout << "Students below 50 have been removed." << endl;

    return 0;
}