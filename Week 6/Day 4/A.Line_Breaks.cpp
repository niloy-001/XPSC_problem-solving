#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;   cin>>n>>m;
        
        int length=0;
        int x=0;
        vector<string>word(n);
        for(int i=0;i<n;i++)
        {
            cin>>word[i];
        }

        vector<int>a(n);

        for(int i=0;i<n;i++)
        {
            int y=word[i].size();
            a[i]=y;
        }

        for(auto val:a)
        {
            if(length+val <= m)
            {
                length+=val;
                x++;
            }
            else
            {
                break;
            }
        }

        cout<<x<<endl;

    }
}