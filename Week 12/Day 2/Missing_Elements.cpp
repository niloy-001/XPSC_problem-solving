#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {

    int n;
    cin>>n;

    set<int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        a.insert(x);
    }

    cout<<n-a.size()<<"\n";
    
    }

    return 0;
}