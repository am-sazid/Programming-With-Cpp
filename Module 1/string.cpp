#include <iostream>
using namespace std;

int main() {

    int x;
    cin>> x;
    cin.ignore();
    char n[100];
    cin.getline(n,100);

    cout << x << endl << n<<endl; 
    return 0;
}