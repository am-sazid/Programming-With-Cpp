#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int total_amount = n * 2000;
    
    int needed_note = total_amount / 500;
    
    cout<<needed_note;
    return 0;
}

