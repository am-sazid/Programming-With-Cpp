// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int A,B;
//     cin>>A>>B;

//     cout<<A+B<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string S;
//     cin>>S;
//     reverse(S.begin(),S.end());
//     transform(S.begin(), S.end(), S.begin(), ::tolower);
//     cout<<S;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int Chocolate(int wrappers) {
//     if (wrappers < 3) return 0; 
//     int newChoco = wrappers / 3;
//     return newChoco + Chocolate(newChoco + wrappers % 3);
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         int bought = N / 5;
//         int extra = Chocolate(bought);

//         cout << bought + extra << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int A;
    int B;

    cin>>A;
    cin>>B;

    cout<<A*B;
    return 0;
}
