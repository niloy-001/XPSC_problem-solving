#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;

    while(t--)
    {
        int n;  cin>>n;
        string a,b,c;   cin>>a>>b>>c;

        bool metch =false;

        for(int i=0;i<n;i++)
        {
            if(a[i]!=c[i] && b[i]!=c[i])
            {
                metch=true;
                
            }
            // else
            // {
            //     cout<< a[i] <<" "<< b[i]<<" "<<c[i]<<endl;
            // }
        } 

        if(!metch) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}