#include <iostream>
#include <vector>
#include <algorithm> // For __gcd
#define ll long long
using namespace std;

int main()
{
    // Speed up I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll g1 = 0, g2 = 0;

    
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                g1 = __gcd(g1, a[i]);
            else
                g2 = __gcd(g2, a[i]);
        }

        bool ok = true;

      
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                ok = false;
                break;
            }
        }

        ll ans = 0;

        if (ok)
        {
            ans = g1; 
        }
        else
        {
            ok = true;
           
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g2 == 0)
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                ans = g2; 
            }
        }

        cout << ans << endl; 
    }
    return 0;
}
