#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin>>n;

    set<int>k;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            k.insert(i);
        }
    }

    cout<<k.size()<<"\n";

    return 0;
}