#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;

    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll cnt=0,prefix_sum=0;
    map<ll,ll>prefix_cnt;

    prefix_cnt[0]=1;

    for(int i=0;i<n;i++)
    {
        prefix_sum+=a[i];

        if(prefix_cnt.find(prefix_sum-x)!=prefix_cnt.end())
        {
             cnt++;
        }

        prefix_cnt[prefix_sum]++;
    }

    cout<<cnt<<"\n";

    return 0;
}
