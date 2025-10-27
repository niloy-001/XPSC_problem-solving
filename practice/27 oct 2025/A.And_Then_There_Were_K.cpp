#include<bits/stdc++.h>
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

        int l=0;

        for(int i=0;i<30;i++)
        {
            if(((n>>i)&1)==1) 
            {
                l=i;
            }
        }

        cout<<((1<<l)-1)<<"\n";
    }
    return 0;
}