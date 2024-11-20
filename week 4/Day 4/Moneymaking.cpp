#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;    cin>>x>>y;

    int a=5000;
    int b=9800;
    int m=0;

    for(int i=0;i<x+y;i++)
    {
       if(i<x) m+=a;
       else m+=b;
    }

    cout<<m<<endl;

}