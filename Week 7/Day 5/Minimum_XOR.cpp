#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;   cin>>t;

    while(t--)
    {
        int n;   cin>>n;

        vector<int>a(n);
        int XOR=0;

        for(int i=0;i<n;i++)
        {
           cin>>a[i];

           XOR^=a[i];
        }
        
        int ans=XOR;

        for(int i=0;i<n;i++)
        {
            ans=min(ans,(XOR^a[i]));
        }

        cout<<ans<<"\n";
    }    
}