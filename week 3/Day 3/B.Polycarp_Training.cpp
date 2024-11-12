#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    multiset<int>mset;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mset.insert(x);
    }

    // for(auto m: mset)
    // {
    //     cout<<m<<endl;
    // }
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        auto it= mset.lower_bound(i+1);

        if(it!=mset.end())
        {
            cnt++;
            mset.erase(it);
        }    
    }

    cout<<cnt<<endl;
}