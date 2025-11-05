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
        string s;
        cin>>s;
        int cntd=0;
        int cnt3=0;
        bool magic=false;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='.') 
            {
                cntd++;
                cnt3++;
                if(cnt3==3)
                {
                    magic=true;
                }
             }
             else if(s[i]=='#')
                {
                    cnt3=0;
                }
        }

        // cout<<cntd<<" "<<cnt3<<endl;
        if(magic) cout<<2<<"\n";
        else cout<<cntd<<'\n';
    }
    return 0;
}