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

        vector<int>a(n);
        int minnum= INT_MAX;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            minnum=min(minnum,a[i]);
        }

        if(a[0]==minnum) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    return 0;
}