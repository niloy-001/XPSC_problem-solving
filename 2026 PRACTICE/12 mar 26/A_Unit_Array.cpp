#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,pos=0,neg=0,op=0;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]==1) pos++;
            else neg++;

        }
        
        while(neg>pos || neg%2==1)
        {
            neg--;
            pos++;
            op++;
        }

        cout<<op<<"\n";
    }
    return 0;
}
