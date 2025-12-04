#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S, X;
        cin >> S >> X;

        string result = "";
        int idx = 0;

        while (true) {
            int found = S.find(X, idx);

            if (found == -1) {
                result += S.substr(idx);
                break;
            }

            result += S.substr(idx, found - idx);
            result += "#";

            idx = found + X.length();
        }

        cout << result << endl;
    }

    return 0;
}
