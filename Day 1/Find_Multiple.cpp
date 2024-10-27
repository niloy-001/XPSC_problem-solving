#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    
    bool flag= false;

    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
        d=i;    
        flag =true;
        }
    }

    if(flag) cout<<d<<endl;
    else cout<<"-1"<<endl;
