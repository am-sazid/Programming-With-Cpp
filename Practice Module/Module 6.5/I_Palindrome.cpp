#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin>> s;

    string word = s;

    reverse(s.begin(),s.end());

    if (word == s)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    


    return 0;
}