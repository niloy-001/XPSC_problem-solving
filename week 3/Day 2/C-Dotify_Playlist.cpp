#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        vector<pair<int, int>> b;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            b.push_back(make_pair(x, y));
        }

        int cnt = 0;
        int sum = 0;

        
        sort(b.begin(), b.end(), greater<pair<int, int>>());

      
        for (auto p : b)
        {
            if (cnt >= k) 
            {
                break;
            }
            if (p.second == l) 
            {
                cnt++;
                sum += p.first;
            }
        }

        
        if (cnt < k)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }

    return 0;
}