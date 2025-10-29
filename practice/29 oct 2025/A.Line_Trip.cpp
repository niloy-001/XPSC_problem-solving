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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);

      

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }

        int g=a[0],l=a[0];
         for(int i=1;i<n;i++)
        {
           
            g=max(g,a[i]-a[i-1]);
          
           
        }

        int k=2*(x-a.back());

        cout<<max(k,g)<<"\n";

    }
}