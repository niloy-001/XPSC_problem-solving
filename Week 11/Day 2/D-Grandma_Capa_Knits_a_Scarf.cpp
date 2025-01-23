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
    string s;
    cin>>s;

    int ans=INT_MAX;

    for(int i='a';i<='z';i++)
    {
        int l=0,r=n-1;
        int dlt=0;
        bool found=true;

       while(l<r)
       {
        if(s[l]!=s[r])
        {
            if(s[l]==i)
            {
                l++;
                dlt++;
            }
            else if(s[r]==i)
            {
                r--;
                dlt++;
            }
            else
            {
                found =false;
                break;
            }
        }
        else
        {
            l++;
            r--;
        }
       }

      if(found)ans=min(ans,dlt);
    }

    if(ans!=INT_MAX) cout<<ans<<"\n";
    else cout<<"-1"<<"\n";
   
    }
    return 0;
}  