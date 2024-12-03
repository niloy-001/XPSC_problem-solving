#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;  cin>>x>>y;    // x= 1st_teamscore ; y= 2nd_teamscore

        if(x%3==0) cout<<"0"<<endl;

        else 
        {
            cout<<x%3<<endl;
        }

    }
}