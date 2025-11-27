#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello Sazid";
    // string s2 = " Sazid!";
    cout << s << endl;

    // s += s2;
    // s.append(s2);
    // s.push_back('A');
    // s += 'a';
    // s.pop_back();

    // s = s2;
    // s.assign(s2);
    // s.erase(3, 5);
    // s.replace(6,5,"Bangladesh");
    // s.replace(6,0,"Bangladesh ");
    s.insert(5," World");

    cout << s << endl;
    return 0;
}