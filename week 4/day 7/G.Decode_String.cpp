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

      string s;
      cin>>s;

      string ans;

      for(int i=s.size()-1;i>=0;)
      {
        if(s[i]=='0')
        {
            int num=stoi(s.substr(i-2,2));
            char a=num+'a'-1;
            ans+=a;
            i-=3;
        }
        else
        {
            int num=s[i]-'0';
            char a=num+'a'-1;
            ans+=a;
            i--;
        }
      }

      reverse(ans.begin(),ans.end());
      cout<<ans<<"\n";

    }
}