#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux = 0;
    int ans = 0;

    cin >> n;
    if (n % 5 == 0)
    {
        ans = n / 5;
    }
    else
    {
        ans = (n / 5) + 1;
    }

    cout << ans << endl;

    return 0;
}