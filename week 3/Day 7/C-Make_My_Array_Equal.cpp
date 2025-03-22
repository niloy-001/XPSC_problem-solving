#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int>a(n);
        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        int it=mp.begin()->first;


        if(mp.size()==1) cout<<"YES"<<"\n";
        else if (mp.size()==2 && it==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}

// problem Link: https://www.codechef.com/problems/MEBA
