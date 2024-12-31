#include<bits/stdc++.h>
using namespace std;
const int MOD =1e9+7;
int exponential(int x,int n)
{
    int ans=1;

    while(n)
    {
        if(n&1)
        {
            ans=(1LL*ans*x)%MOD;
        }
        x=(1LL*x*x)%MOD;

        n>>=1;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,n;
        cin>>x>>n;
        cout<<exponential(x,n)<<"\n";
    }
    return 0;
}
