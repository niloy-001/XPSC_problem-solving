#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    vector<int>ans;
    int r=0;
    int l=0,cnt=0;

    while(r<m)
    {
    if(l<n && a[l]<b[r])
        
    {
        cnt++;
        l++;
    }

    else
    {
     cout<<cnt<<" ";
     r++;
    } 

    // ans.push_back(cnt);
    }

    // for(auto val:ans)
    // {
    //    cout<<val<<" ";
    // }
    // cout<<endl;

}