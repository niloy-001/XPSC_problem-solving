#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k,s;
    cin>>n>>k>>s;

    int ans=(n-k)*s;

    cout<<ans<<endl;
    return 0;
}
