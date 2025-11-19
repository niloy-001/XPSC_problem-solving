#include <bits/stdc++.h>
using namespace std;

bool check(const string &s, const string &x)
{
    if (x.size() < s.size())
        return false;

    for (int i = 0; i <= (int)x.size() - (int)s.size(); i++)
    {
        if (x.substr(i, s.size()) == s)
            return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        long long ans = -1;

        for (int i = 0; i <= 5; i++)
        {
            if (check(s, x))
            {
                ans = i;
                break;
            }
            x += x;
        }

        cout << ans << "\n";
    }

    return 0;
}
