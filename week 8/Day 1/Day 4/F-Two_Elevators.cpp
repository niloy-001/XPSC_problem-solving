#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int d1 = a-1;
        int d2=(abs(b-c)+abs(c-1));
        
        if(d1<d2) cout<<"1"<<"\n";
        else if(d1==d2) cout<<"3"<<"\n";
        else cout<<"2"<<'\n';

    }
}