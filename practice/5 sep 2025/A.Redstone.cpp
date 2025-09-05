//problem link: https://codeforces.com/problemset/problem/2133/A

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

        set<long long>a;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }

        if(a.size()==n) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }

 return 0;

}