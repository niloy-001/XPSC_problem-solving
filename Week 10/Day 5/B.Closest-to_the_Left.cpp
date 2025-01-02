#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<k;i++)
    {
        int key;
        cin>>key;

    int ans = -1;
    if(a[0]>key) 
    {
        ans= -1;
    }    
    else
    {
        int l=0;
        int r=n-1;

        while(l<=r)
        {
          int mid=(l+r)/2;

          if(a[mid]<=key)
          {
            ans=mid;
            l=mid+1;
          }
          if(a[mid]>key)
          {
            r=mid-1;
          }
        }

    }

    cout<<ans+1<<'\n';

    }

}