#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<char>a(n);
        vector<char>b(n);

        vector<bool> Ab(n, false);
        vector<bool> Ba(n, false);


        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]== 'G' || a[i]=='B')  Ab[i]=true;
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]== 'G' || b[i]=='B')  Ba[i]=true;
        } 

        bool final=true;
        for(int i=0;i<n;i++)
        {
            if(Ab[i]!=Ba[i]) 
            {
                final=false;
                break;
            }    
        
        } 

        if(final) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
