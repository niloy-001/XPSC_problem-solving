#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int m=0;
        
        if(x%2==0)
        {
            m=max(m,x*y);
            m=max(m,(x/2)*z);
        }
        
        
        if(x%2!=0)
        {
            int d=x/2;
            int r=x%2;

            m=max(m,(d*z)+(r*y));
            m=max(m,x*y);
        }
        cout<<m<<endl;
    }
}