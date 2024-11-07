#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int>s;
    set<int>ms;
    // map<set<int>,int>s;

    for(int i=a.size()-1;i>=0;i--)
    {
       ms.insert(a[i]);
       s.push_back(ms.size());   
    }
    reverse(s.begin(),s.end());

    for(int i=1;i<=m;i++)
    {
        int pos;
        cin>>pos;
        cout<<s[pos-1]<<endl;
    }
}