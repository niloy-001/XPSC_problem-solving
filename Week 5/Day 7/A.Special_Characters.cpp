#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(n%2==0)
        {
            cout<<"YES"<< "\n";

            for(int i=0;i<n/2;i++)
            {
                if(i%2==0) cout<<"AA";
                else cout<<"BB";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
}