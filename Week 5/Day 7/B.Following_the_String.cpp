#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    string s="abcdefghijklmnopqrstuvwxyz";

    while(t--)
    {
        map<char,int>mymap;
        for(int i=0;i<s.size();i++) mymap[s[i]]=0;
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;

            for(auto val:mymap)
            {
                if(val.second==x)
                {
                    cout<<val.first;
                    mymap[val.first]++;
                    break;
                }
            }
        }
        cout<<"\n";

   
    }
    return 0;
}