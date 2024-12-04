#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;  cin>>n>>k;

        int a,b;

        a=(n/2)*1;
        b=n-a;

        if(k==a || k==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}