#include<bits/stdc++.h>

using namespace std;

int* sort_it(int n) {
    int* arr = new int[n];

    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    sort(arr, arr + n); 
    reverse(arr, arr + n);

    return arr;
}

int main() {
    int n;
    cin >> n;

    int* sortedArray = sort_it(n);

    for (int i = 0; i < n; i++) {
        cout << sortedArray[i] << " ";
    }

    delete[] sortedArray;
    return 0;
}
