#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string word;
    stringstream ss(s);

    bool found = false;

    while (ss >> word) {
        if (word == "Jessica") {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES";
    } 

    else {
        cout << "NO";
    }

    return 0;
}
