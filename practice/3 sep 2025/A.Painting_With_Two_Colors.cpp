#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;


    while(t--)
    {

    long long int n,a,b;
    cin >>n>>a>>b;

    if ((n-b+2)%2 != 0){
    
        cout<<"NO"<<endl;
    }

    else 

    {
        if(b>=a)
        {
           cout<<"YES"<<endl;
        }

        else
        {
            if((n-a+2)%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    }
}