#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    a.erase(remove(a.begin(), a.end(), x), a.end());
    

    for(auto val:a)
    {
        cout<<val<<" ";
    }
}