#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    
    {
        int n;
        cin>> n;

        string s,r;
        cin>> s;

        r=s;
        reverse(r.begin(),r.end());
        
        if(s<r) cout<<s<<endl;
        else cout<<r+s<<endl;

    }

    return 0;
}