#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    int e_c = 0, g_c = 0, y_c = 0, p_c = 0, t_c = 0;

    for (int i = 0; i < s.size(); i++)
    {
        // char ch = s[i]
        if (s[i] == 'e' || s[i] == 'E')
        {
            e_c++;
        }
        else if (s[i] == 'g' || s[i] == 'G' )
        {
            g_c++;
        }
        else if (s[i] == 'y' || s[i] == 'Y' )
        {
            y_c++;
        }
        else if (s[i] == 'p' || s[i] == 'P' )
        {
            p_c++;
        }
        else if (s[i] == 't' || s[i] == 'T' )
        {
            t_c++;
        }

        
    }
    
    int mn_value = min({e_c,g_c,y_c,p_c,t_c});

    cout<< mn_value;
    
    return 0;
}