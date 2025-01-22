#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; 
    vector<ll>a(n);
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i]; 
    }

    ll ans=INT_MAX;
    for (int mask = 0; mask < (1 << n); mask++)
    {   
        ll c=0;
        for (int j = 0; j < n; j++)
        {
            if (1 & (mask >> j))
            {
              c+=a[j];
            }
        }

        ans=min(ans,abs((sum-c)-c));
    }

    cout<<ans<<"\n";
    return 0;
}
