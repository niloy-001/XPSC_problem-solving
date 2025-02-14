#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--)
    {
    int n,k;
    cin>>n>>k;
 
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
 
    vector<int>b(n);
    vector<int>ans(n);
 
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
 
    for(int i=0;i<n;i++)
    {
        ans[a[i].second]=b[i];
    }
 
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    }
 
    return 0;
}