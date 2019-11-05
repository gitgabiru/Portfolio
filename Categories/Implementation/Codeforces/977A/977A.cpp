#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, ans = 0;
    string n;
    cin >> n >> k;
    while (k--)
    {
        if (n[n.size() - 1] == '0')
        {
            ans = stoi(n);
            ans /= 10;
            n = to_string(ans);
        }
        else
        {
            ans = stoi(n);
            ans -= 1;
            n = to_string(ans);
        }
    }

    cout << ans << endl;

    return 0;
}