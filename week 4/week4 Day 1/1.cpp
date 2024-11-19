#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        map<int,int>mymap;

        for(auto n:a)
        {
            mymap[n]++;
        }

        int s=0;

        for (auto& pair : mymap)
        {
           
            s += pair.second / 2;
            
        }

        cout<<s<<endl;
    }
}
