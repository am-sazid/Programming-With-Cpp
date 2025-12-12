#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int count = 0;
        int gun = 'c';

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > d && gun == 'c')
            {
                gun = 'l';
                count++;
            }

            else if (a <= d && gun == 'l')
            {
                gun = 'c';
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}