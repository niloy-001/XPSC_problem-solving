#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;   
    long long int k;   cin>>n>>k;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int r=0;
    int l=0;
    long long int sum=0;
    int ans=0;

    while(r<n)
    {
        sum+=a[r];

        if(sum<=k)
        {
           ans=max(ans,(r-l+1));
        }
        else
        {
            sum-=a[l];
            l++;
        }
        r++;
    }

    cout<<ans<<endl;

}