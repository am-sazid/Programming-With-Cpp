#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            if (a >= k)
                mn = min(a%k,mn);
        }
        if(mn == INT_MAX)
            cout<<-1<<endl;
        else
            cout<<mn<<endl;
        
    }
    
    return 0;
}