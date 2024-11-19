#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
    ll n;
    cin >> n;

    // Create a 2D vector to store input values
    vector<vector<ll>> a(n, vector<ll>(n-1));
    set<ll> myset;

    // Input the matrix and store unique values in the set
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            cin >> a[i][j];
            myset.insert(a[i][j]);
        }
    }

    vector<ll>b;
    int l = 0;
    int i = 0;

    //  for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n-1; j++) {
    //         cout<< a[i][j] <<" ";
           
    //     }
    //     cout<<endl;
    // }
     map<ll, set<int>> mymap;

        // Compare rows to find the first differing row
        for (int i = 0; i < n - 1; i++) {
            if (a[i][n-2] == a[i+1][n-2]) {
                mymap[a[i][n-2]].insert(i); 
            }
        }

        // Find the last row marked as visited
        for (int i = 0; i < n; i++) {
            if (mymap.size()==0) {
                l = i;
            }
        }


    for (int j = 0; j < n-1; j++) {
        b.push_back(a[l][j]);
    }

    // for(auto val: b)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;



    for(auto val: myset)
    {
        if(find(b.begin(),b.end(),val)==b.end())
        {
            b.push_back(val);
        }
    }


    for(auto val: b)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    }
    return 0;
}
