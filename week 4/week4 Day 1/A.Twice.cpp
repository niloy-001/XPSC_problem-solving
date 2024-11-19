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

        map<int,int>frequency;

        for(auto num:a)
        {
            frequency[num]++;
        }

        int cnt=0;
        int i=0;

        for (auto [key, freq] : frequency)
        {
           
            cnt += freq / 2;
            
        }

        cout<<cnt<<endl;
    }
}
