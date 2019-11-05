#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans;
    string t{"that "};

    vector<string> h;
    h.push_back("I hate ");
    h.push_back("I love ");
    int i = 0;

    while (n--)
    {
        if (n > 0)
        {
            if (i == 0)
            {
                ans += h[i];
                ans += t;
                i++;
            }
            else
            {
                ans += h[i];
                ans += t;
                i--;
            }
        }
        else
        {
            if (i == 0)
            {
                ans += h[i];
                i++;
            }
            else
            {
                ans += h[i];
                i--;
            }
        }
    }

    ans += "it";

    cout << ans << endl;

    return 0;
}