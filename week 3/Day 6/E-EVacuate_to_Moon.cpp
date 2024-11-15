#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        
    int n,m,h;
    cin>>n>>m>>h;
    priority_queue<long long int>a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }

    priority_queue<long long int>b;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }

    int l=0;
    long long int ans=0;

    while(!a.empty() && !b.empty())
    {
        
        if((b.top()*h) < a.top() )
        {
            ans+=1LL*b.top()*h;
        }

        else
        {
            ans+=1LL*a.top();
        }
        a.pop();
        b.pop();
    }
    cout<<ans<<endl;

    }
}