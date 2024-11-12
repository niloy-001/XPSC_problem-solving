#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>u(n);
        vector<pair<int,int>>a(k);

        for(int i=0;i<n;i++)
        {
            cin>>u[i];
        }

        // for(int i=0;i<k;i++)
        // {
        //     int x,y;
        //     cin>>x>>y;
        //     a[i]={x,y};
        // }

        map<int,set<int>>pos;

        for(int i=0;i<n;i++)
        {
            pos[u[i]].insert(i);
        }

        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;

            bool found=false;

            if(pos.find(x)==pos.end() || pos.find(y)==pos.end()) cout<<"NO"<<endl;
            else
            {

                int lm=*pos[x].begin();
                int rm=*pos[y].rbegin();

                if(lm<rm) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
           
    
        }
    }
}    