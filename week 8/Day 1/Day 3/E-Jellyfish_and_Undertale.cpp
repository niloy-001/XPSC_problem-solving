#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;

        vector<int>tools(n);

        for(int i=0;i<n;i++)
        {
            cin>>tools[i];
        }

        int max_time=0;

        if(b>=a)
        {
           max_time=a;
           b=a;
        }
        else
        {
           max_time=b;
        }


        for(int i=0;i<n;i++)
        {
            if(tools[i]<=a)
            {
                max_time+=tools[i];
            }

            else
            {
                max_time+=(a-1);
            }
        }

        cout<<max_time<<endl;
    }
}