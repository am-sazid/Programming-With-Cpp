#include <iostream>
using namespace std;

int main()
{
    char line[100001];
    while (cin.getline(line, 100001))
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            for (int i = 0; line[i] != '\0'; i++)
            {
                if (line[i] == c)
                {
                    cout << c;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
