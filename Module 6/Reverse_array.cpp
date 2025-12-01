#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // int i = 0;
    // int j = n-1;

    // while (i < j)
    // {
    //     int tmp = a[i];
    //     a[i] = a[j];
    //     a[j] = tmp;

    //     i++;
    //     j--;
    // }

    reverse(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }


    //  String Reverse

    cout << endl;
    string s = "Sazid";

    reverse(s.begin(),s.end());

    cout<< s <<endl;
    
    return 0;
}