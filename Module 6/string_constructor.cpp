#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1
    string s = "Sazid";
    cout << s << endl;

    // 2
    string s("Sazid");
    cout << s << endl;

    // 3
    string s("Sazid", 3);
    cout << s << endl;

    // 4
    string t(s, 2);
    cout << t << endl;
    // 5
    string s(5, 'A');
    cout << s << endl;
    return 0;
}