#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin>>t;

   while(t--)
   {
    int n;  cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    sort(a.begin(),a.end());
    int sum=0;

    for(int i=0;i<n;i++)
    {
        a[i]=a[i]-i;

        if(a[i]<0)
        {
            a[i]=0;
        }
        sum+=a[i];
    }

    cout<<sum<<endl;
   }

   return 0;
}