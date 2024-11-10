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

        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(int i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1]) 
            {
                if(v[i]>v[i+1])
                {
                    v[i+1]+=v[i];
                }
                else
                {
                    v[i]+=v[i+1];
                }
            }
        }

        if (all_of(v.begin(), v.end(), [&v](int elem) { return elem == v[0]; })) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}