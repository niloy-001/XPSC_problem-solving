#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;

        vector<int>a(n);
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
            ans+=a[i];
        }
        ans=ans*-1;

        cout<<ans<<endl;
    }
    return 0;
}
