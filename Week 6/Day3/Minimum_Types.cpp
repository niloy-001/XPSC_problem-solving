#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<pair<int,int>>a(n);

        for(int i=0;i<n;i++)
        {
           cin>>a[i].first;
        }

        for(int i=0;i<n;i++)
        {
            cin>>a[i].second;
        }

        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            b[i]=a[i].first*a[i].second;;
        }

        sort(b.begin(),b.end(),greater<int>());

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(m > 0)
            {
            m-=b[i];
            cnt++;
            }

            else
            {
                break;
            }
        }

        if(m>0) cout<<"-1"<<endl;
        else cout<<cnt<<endl;
    }
}