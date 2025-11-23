#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{

    Student sazid,hasib;
    cin.getline(sazid.name,100);
    cin>> sazid.roll >> sazid.cgpa ;
    cin.ignore();
    cin.getline(hasib.name,100);
    cin>> hasib.roll >> hasib.cgpa ;


    cout <<sazid.name << " " << sazid.roll << " " << sazid.cgpa <<endl;
    cout <<hasib.name << " " << hasib.roll << " " << hasib.cgpa <<endl;

    return 0;
}