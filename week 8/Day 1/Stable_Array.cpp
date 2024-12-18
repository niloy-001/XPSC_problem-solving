#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;

   while(t--)
   {
    int n; cin>>n;

    vector<ll>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll>cnt(n,0);
    int maxt=0;

    for(int i=n-1;i>=0;i--)
    {
      if(a[i]<maxt)
      {
        cnt[i]=cnt[i+1]+1;
      }
      else
      {
        cnt[i]=0;
      }
      
        maxt = max(a[i], maxt);
           max_count = max(max_count, cnt[i]);
    }

   }

   return 0;
}