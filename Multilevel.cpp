#include <iostream>
using namespace std;

// Base class
class School
{
public:
    void schoolInfo()
    {
        cout << "School: ABC Public School" << endl;
    }
};

// Derived class
class Teacher : public School
{
public:
    void teacherInfo()
    {
        cout << "Teacher: Mr. Sharma" << endl;
    }
};

// Further derived class
class Student : public Teacher
{
public:
    void studentInfo()
    {
        cout << "Student: Rahul" << endl;
    }
};

int main()
{
    Student s;

    cout << "----- Student Information -----" << endl;

    s.schoolInfo();
    s.teacherInfo();
    s.studentInfo();

    cout << "--------------------------------" << endl;
    cout << "Student belongs to the school "
         << "and is taught by the teacher." << endl;

    return 0;
}
