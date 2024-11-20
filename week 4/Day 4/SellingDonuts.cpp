#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;

    while(t--)
    {
    int n,m;
    cin>>n>>m;

    vector<int>a(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    vector<int>b(m+1,0);

    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
    }

    int cnt=0;

    for(int i=1;i<=m;i++)
    {
        
       if(b[i]>0 && b[i]<=n)
       {
        if(a[b[i]]==0) 
        {
            cnt++;
        }    
        else 
        {
            a[b[i]]--;
        }
       }
       else
       {
        cnt++;
       }
        
    }


    cout<<cnt<<endl;
    }

}