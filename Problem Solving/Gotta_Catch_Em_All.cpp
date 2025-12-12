#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn_price = 0;
        for (int i = 0; i < n; i++)
        {
            int nb = a[i] * x;
            int mb =  y;
            mn_price += min(nb,mb);
        }
        cout << mn_price << endl;
    }

    return 0;
}