#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
    int n,x;
    cin>>n>>x;

    vector<ll>a(n);
    ll t_water=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        t_water+=a[i];
    }

    ll t_bottle=(t_water+x-1)/x;

    cout<<t_bottle<<"\n";

    }
    return 0;
}
