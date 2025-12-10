#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int t_room = 0;
        for (int i = 0; i < n; i++)
        {
            int total = ceil((double)a[i] / 2);
            t_room += total;
        }

        cout << t_room << endl;
    }

    return 0;
}