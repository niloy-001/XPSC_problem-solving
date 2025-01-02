
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
    
    int ans=n+1;
   
    int l=0;
    int r=n-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]>=key)
        {
           ans=mid+1;
           r=mid-1;
        }
        if(a[mid]<key)
        {
           l=mid+1;
        }

    }

    cout<<ans<<"\n";
    
    }
    return 0;

}