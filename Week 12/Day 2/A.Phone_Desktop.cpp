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

    int x,y;
    cin >> x>>y;

    int ans=ceil((double)y/2);
    int b=((ans*15)-y*4);
    x-=min(b,x);
    int c=0;
    c=ceil((double)x/15);

    cout<<ans+c<<"\n";

    }
    return 0;  
}