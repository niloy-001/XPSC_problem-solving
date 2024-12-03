#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;       cin>>n;  //string size=n
        string s;    cin>>s;
        int cnt=0;

        if(all_of(s.begin(),s.end(),[&](char c){return c==s[0];}))  
        {
            cout<<"0"<<endl;       // if string all element same cout 0;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[i+1])  cnt++;
        }
              cout<<cnt/2<<endl;
        }     
        
    }
}