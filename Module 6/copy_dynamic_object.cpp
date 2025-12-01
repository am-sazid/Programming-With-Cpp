#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{

    Cricketer *sakib = new Cricketer("Bangladesh", 95);
    Cricketer *tamim = new Cricketer("Bangladesh", 50);

    // tamim->country = sakib->country;
    // tamim->jersey = sakib->jersey;

    *tamim = *sakib;

    // delete sakib;

    cout << tamim->jersey << tamim->country << endl;
    cout << sakib->jersey << sakib->country << endl;

    return 0;
}