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
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b;
        vector<int>c;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int amax=*max_element(a.begin(),a.end());

        for(int i=0;i<n;i++)
        {
            if(a[i]==amax)
            {
                c.push_back(a[i]);
            }
            else
            {
                b.push_back(a[i]);
            }
        }

        if(b.size()==0)
        {
            cout<<"-1"<<"\n";
        }
        else 
        {
            cout<<b.size()<<" "<<c.size()<<"\n";
            for(int x:b)
            {
                cout<<x<<" ";
            }
            cout<<'\n';
            for(int x: c)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
