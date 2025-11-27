#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};


Student* fun()
{
    Student* Sazid = new Student(23,5,4.83);
    // Student* p = &Sazid;
    return  Sazid;
}

int main()
{
    Student* p = fun();
    cout << p->roll << " " << p->cls<< " " << p->gpa << endl;
    return 0;
}