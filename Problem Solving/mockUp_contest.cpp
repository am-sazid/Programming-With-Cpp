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

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int A;
//     int B;

//     cin>>A;
//     cin>>B;

//     cout<<A*B;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         int mx =0;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//             mx = max(a[i],mx);
//         }
//         cout<<mx<<endl;

//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         string s;
//         cin >> s;

//         int freq[26] = {0};
//         for (char c : s)
//             freq[c - 'a']++;

//         int odd = 0;
//         for (int i = 0; i < 26; i++)
//             if (freq[i] % 2 == 1)
//                 odd++;

//         int result = max(0, odd - 1);

//         cout << result << "\n";
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     int T;
//     scanf("%d", &T);

//     while (T--) {
//         char s[1005];
//         scanf("%s", s);

//         int freq[26] = {0};

//         for (int i = 0; s[i] != '\0'; i++) {
//             freq[s[i] - 'a']++;
//         }

//         int odd = 0;
//         for (int i = 0; i < 26; i++) {
//             if (freq[i] % 2 == 1)
//                 odd++;
//         }

//         int result = (odd > 1) ? (odd - 1) : 0;

//         printf("%d\n", result);
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int bestNum = arr[0];
//     int bestFreq = 1;

//     int currFreq = 1;

//     for (int i = 1; i < n; i++) {
        
//         if (arr[i] == arr[i - 1]) {
//             currFreq++;
//         } 
        
//         else {
            
//             if (currFreq > bestFreq) {
//                 bestFreq = currFreq;
//                 bestNum = arr[i - 1];
//             }
//             currFreq = 1; // reset
//         }
//     }

   
//     if (currFreq > bestFreq) {
//         bestFreq = currFreq;
//         bestNum = arr[n - 1];
//     }

//     cout << bestNum << " " << bestFreq;

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int oddSum = 0, evenSum = 0;
    int pos = 1; 

   
    for (int i = s.size() - 1; i >= 0; i--) {
        int digit = s[i] - '0';

        if (pos % 2 == 1) {
            oddSum += digit;
        } else {
            evenSum += digit;
        }

        pos++;
    }

    int diff = abs(oddSum - evenSum);

    if (diff % 11 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}
