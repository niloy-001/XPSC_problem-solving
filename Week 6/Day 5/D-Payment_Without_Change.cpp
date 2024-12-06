#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;  cin>>q;

    while(q--)
    {
        int a,b,n,s;    cin>>a>>b>>n>>s;   // a= the number of coins of value n
                                           // s=need coin;
        int y=(min(a,(s/n)));              // b= the number of coins of value 1

        if((y*n)+b>=s) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
        
    }
}