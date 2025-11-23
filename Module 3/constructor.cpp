#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int cls;
    int roll;
    double gpa;
    
    Student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }
};

int main()
{

    Student Sazid(2,89,3.50);

    cout << Sazid.cls << "--" << Sazid.roll << "--" << Sazid.gpa <<endl;
    
    return 0;
}