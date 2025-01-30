// (https://codeforces.com/problemset/problem/1975/A)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(is_sorted(a.begin(),a.end())) 
    {

    cout<<"YES"<<"\n";

    }
    else 
    {

    vector<int>y;
    int k;
    y.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<=a[i])
        {
            y.push_back(a[i]);
        }
        else
        {
           k=i;
           break;
        }
    }

    vector<int>A;
    for(int i=k;i<n;i++)
    {
      A.push_back(a[i]);
    }

    for(int i=0;i<y.size();i++)
    {
      A.push_back(y[i]);
    }

    if(is_sorted(A.begin(),A.end())) cout<<"YES"<<"\n";

    else cout<<"NO"<<"\n";
    }

    }
    return 0;
}