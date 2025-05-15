#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        int zero=0,nzero=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]==0) 
            {
                zero++;
            }
            else 
            {
                nzero++;
            }    

        }


            if(zero==0)
            {
                cout<<"0"<<"\n";
            }
            else
            {
                if(zero-1 <= nzero)
                {
                    cout<<"0"<<"\n";
                }
                else
                {
                    int mx=*max_element(a.begin(),a.end());
                    if(mx==1)
                    {
                        cout<<"2"<<"\n";
                    }
                    else
                    {
                        cout<<"1"<<"\n";
                    }
                }
            }
            // cout<<zero<<" "<<nzero<<"\n";

        }
         return 0;
    }
    
