#include <bits/stdc++.h>
using namespace std;
int main() 
{
	 ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;   cin>>t;

     while(t--)
     {
        int n;   cin>>n;
        string s,t; cin>>s>>t;
       
        int cnt=0;
        // vector<int>s(n);
        // for(int i=0;i<n;i++)
        // {
        //     cin>>s[i];
        // }

        // vector<int>t(n);
        // for(int i=0;i<n;i++)
        // {
        //     cin>>t[i];
        // }

        for(int i=0;i<n;i++)
        {

            if(s[i]!=t[i])
	        {
	            cnt++;
	        }

        }

        if(cnt%2==0) cout<<"YES\n";
        else cout<<"NO\n";

     }

}