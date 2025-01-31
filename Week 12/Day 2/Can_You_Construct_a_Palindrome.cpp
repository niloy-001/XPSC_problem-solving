#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    map<char,int>mymap;

    for(int i=0;i<s.size();i++)
    {
        mymap[s[i]]++;
    }
    int oddcnt=0;
    int evencnt=0;
    
    for(auto v:mymap)
    {
        if(v.second%2==0)
        {
            evencnt++;
        }
        else
        {
            oddcnt++;
        }
    }

    if(oddcnt-1<=k) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";

    return 0;
}