#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int mid;
    int sem;

    Student(string name, int roll,int mid,int sem)
    {
        this->name = name;
        this->roll = roll;
        this->mid = mid ;
        this->sem = sem;

    }

    void fun()
    {
        cout<< "Student Name : " << name<< endl <<"Roll : "<< roll<<endl << "Total Mark : "<<mid+sem <<"%"<<endl;
    }

};

int main()
{
    Student sazid("AM Sazid",237789,49,47);
    // cout<< sazid.name << " " << sazid.roll<<endl;
    sazid.fun();
    
    return 0;
}