#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<char>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        } 

        map<char,int>mp;

        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int cnt=0;

        for(auto it:mp)
        {
            if(it.second%2 !=0) cnt++;
        }

        if(cnt-1<0) cnt=0;
        else cnt=cnt-1;

        if(k>=cnt && k<n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 

    }
}