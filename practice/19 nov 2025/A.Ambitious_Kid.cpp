#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<int>a(n);

    int ans =INT_MAX;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];

        int x=abs(a[i]-0);
        ans=min(ans,x);
    }

    cout<<abs(ans)<<endl;

    return 0;
}
