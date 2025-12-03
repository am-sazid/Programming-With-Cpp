#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {

        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }


    Student mn;
    // mn.mark = INT_MAX;
    mn.mark = INT_MIN;


    for (int i = 0; i < n; i++)
    {
        // mn.mark = min(a[i].mark , mn.mark);
        if (a[i].mark > mn.mark)
        {
            mn = a[i];
        }
        

    }
    
    cout<< mn.name << " " << mn.roll << " " << mn.mark <<endl;
}