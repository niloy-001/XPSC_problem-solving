#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t; cin>>n>>t;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=0;
    int r=0;
    int ans=0;
    int sum=0;

    while(r<n)
    {
        sum+=a[r];

        if(sum<=t)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(sum>t && l<=r )
            {
                sum-=a[l];
                l++;
            }

            if(sum<=t)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }

    cout<<ans<<endl;
}