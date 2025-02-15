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
        int n; cin>>n;
        
        string s; cin>>s;

        for(char &a:s)
        {
            if(a=='0') a='1';
            else a='0'; 
        }

        cout<<s<<"\n";
    }

    return 0;
}
