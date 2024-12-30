#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;


    bool makezero=false;

   while(n>=0)
    {

        if(n%3==0)
        {
            makezero=true;
            break;
        }
        n-=4;
        // cout<<n<<endl;
    }

    if(makezero) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}