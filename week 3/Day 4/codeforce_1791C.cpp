#include<bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;


        int l=0,r=s.length()-1,ans=s.length();
 
        while(l<=r)
        {
        if(s[l]==s[r]) 
        {
            break;
        }

        else
        {
            ans-=2;
             l++,r--;
        }
        }
        cout<<ans<<endl;
    }
}