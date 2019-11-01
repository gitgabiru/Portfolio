#include <bits/stdc++.h>

using namespace std;
bool e_par(int n);

int main()
{
    int n, t = 0;
    string ans;

    cin >> n;

    if (e_par(n))
    {
        cout << "Mahmoud" << endl;
    }
    else
    {
        cout << "Ehab" << endl;
    }

    return 0;
}

bool e_par(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}