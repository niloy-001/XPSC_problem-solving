#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<long long, long long> freq;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            freq[x]++;
        }

        if (freq.size() > 2)
            cout << "NO\n";
        else
        {
            
            vector<long long> counts;
            for (auto &p : freq) counts.push_back(p.second);

            if (counts.size() == 1) cout << "YES\n";
            else if (counts[0] == counts[1] || abs(counts[0] - counts[1]) == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

  

    return 0;
}
