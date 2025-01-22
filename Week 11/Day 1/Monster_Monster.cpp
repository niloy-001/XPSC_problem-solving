#include<bits/stdc++.h>
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
        ll n,x;
        cin>>n>>x;

        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a.rbegin(),a.rend());


        ll A=a[0];

        for(int i=1;i<n;i++)
        {
           
            A=max(A,(a[i]+(i*x)));
        }

        cout<<A<<'\n';
    }
    return 0;
}
