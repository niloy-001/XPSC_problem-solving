#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    long long int ans=0;
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

    int l=0,r=0 ; 

    while(l<n && r<m)
    {
       int curnt = a[l];
       int cnt1=0,cnt2=0;
        while(l<n && a[l]==curnt)
        {
            cnt1++;
            l++;
        }
        while(r<m && curnt>b[r])
        {
            r++;
        }
        while(r<m && b[r]==curnt)
        {
            cnt2++;r++;
        }

        ans+=(1LL*cnt1*cnt2);
    }

    cout<<ans<<endl;
   
}