#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        bool yes=false;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]==k) yes=true;
        }

        if(yes)cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    return 0;
}
