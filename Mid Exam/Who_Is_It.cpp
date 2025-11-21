#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int marks;

   
    Student(int i, string n, char s, int m) {
        id = i;
        name = n;
        section = s;
        marks = m;
    }
};

int main() {
    int T;
    cin >> T;

    while(T--) {
        
        Student s1(0, "", 'A', 0);
        Student s2(0, "", 'A', 0);
        Student s3(0, "", 'A', 0);

        
        cin >> s1.id >> s1.name >> s1.section >> s1.marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.marks;

        
        Student* top = &s1; 

        if(s2.marks > top->marks || (s2.marks == top->marks && s2.id < top->id))
            top = &s2;
        if(s3.marks > top->marks || (s3.marks == top->marks && s3.id < top->id))
            top = &s3;

        cout << top->id << " " << top->name << " " << top->section << " " << top->marks << endl;
    }

    return 0;
}
