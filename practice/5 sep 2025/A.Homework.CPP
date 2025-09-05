#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int n,m;
    string a,b,c;

    cin>>n>>a;
    cin>>m>>b>>c;

    string left;

    for(int i=0;i<m;i++)
    {
        if(c[i]=='V')
        {
           left+=b[i]; 
        }
        else
        {
           a+=b[i];
        }
    }

   reverse(left.begin(),left.end());

   cout<<left<<a<<"\n";

    }

   return 0;
}