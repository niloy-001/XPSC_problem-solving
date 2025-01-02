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
    
    sort(a.begin(),a.end());

    for(int i=0;i<k;i++)
    {
        int key;
        cin>>key;

    bool found = false;
 
        int l=0;
        int r=n-1;

    while(l<=r)
    {
          int mid=(l+r)/2;

          if(a[mid]==key)
          {
            found=true;
            break;
          }
          else if(a[mid]<key)
          {
            l=mid+1;
          }
          else
          {
            r=mid-1;
          }
    }

    if(found) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

    }

    return 0;

}