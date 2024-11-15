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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        reverse(a.begin(),a.end());

        set<int>b;
        
        int i=0;
        while(i<n)
        {
            if(b.find(a[i])==b.end())
            {
                b.insert(a[i]);
                i++;
            }
            else
            {
                break;
            }
        }

       int ans= n- b.size();

       cout<<ans<<endl;

    }
}