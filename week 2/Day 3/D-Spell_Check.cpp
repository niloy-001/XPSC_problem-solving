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

        sort(s.begin(),s.end());

        string target = "Timur";
        sort(target.begin(),target.end());

        // cout<<s<<endl<<target;

        if(s==target) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
} 