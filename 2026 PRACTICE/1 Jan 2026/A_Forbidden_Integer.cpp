#include <bits/stdc++.h>
#define ll long long
using namespace std;
 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        
        if(x!=1)
        {
            cout<<"YES"<<"\n"<<n<<"\n";
            for(int i=0;i<n;i++)
            {
               cout<<"1"<<" ";
            }
        }

        else
        {
            if(k==1 || (k==2 && n%2==1)) cout<<"NO";
            else
            {
                cout<<"YES"<<"\n";
                if(n%2==0)
                {
                    cout<<n/2<<"\n";

                    for(int i=0;i<n/2;i++)
                    {
                        cout<<"2"<<" ";
                    }
                }
                else
                {
                    cout<<(n-3)/2+1<<"\n"<<3<<" ";

                    for(int i=0;i<(n-3)/2;i++)
                    {
                        cout<<2<<" ";
                    }
                }
            }

        }

        cout<<"\n";


    }
    return 0;
}
 