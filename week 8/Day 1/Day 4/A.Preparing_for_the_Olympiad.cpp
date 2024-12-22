#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<long long>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        vector<long long>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        long long sum=a[n-1];

        for(int i=0;i<n-1;i++)
        {
            if(a[i]>b[i+1])
            {
               int x=(a[i]-b[i+1]);
               sum+=x;
            }
        }

        cout<<sum<<endl;

    }
}