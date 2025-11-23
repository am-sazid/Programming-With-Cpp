#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int cls;
    int roll;
    double gpa;
    
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll  = roll;
        this->gpa = gpa;
    }
};

int main()
{

    Student Sazid(2,89,3.60);

    cout << Sazid.cls << "--" << Sazid.roll << "--" << Sazid.gpa <<endl;
    
    return 0;
}