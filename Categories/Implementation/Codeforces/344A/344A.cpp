#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 1;

    cin >> n;
    string pr;
    char p;
    cin >> pr;
    p = pr[1];
    n--;

    while (n--)
    {
        string s;
        char a;
        cin >> s;
        a = s[1];
        if (p != a)
        {
            ans++;
            p = a;
        }
    }

    cout << ans << endl;

    return 0;
}