#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    int n;
    cin>>n;

    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }

    ll minDiff = LLONG_MAX;

    sort(v.rbegin(),v.rend());
   
    // for(auto val:v)
    // {
    //     cout<<val<<" ";
    // }

    ll a=v[0];
    ll b=0;

    for(int i=1;i<n;i++)
    {
        if(b<a)
        {
            b=(b+v[i])%(MOD*1LL);
        }
        else
        {
            a=(a+v[i])%(MOD*1LL);
        }
    }

    // cout<<a<<" "<<b<<"\n";
    cout<<(abs(a-b)%MOD*1LL)<<"\n";

    return 0;
}
