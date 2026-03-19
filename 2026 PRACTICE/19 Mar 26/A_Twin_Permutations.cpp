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
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);

        int i=0;
        while(i<n)
        {
           cin>>a[i];
           b[i]=n+1-a[i];
           i++; 
        }

         i=0;
         while(i<n)
        {
           cout<<b[i]<<" ";
           i++;
        }
        cout<<"\n";
            
    }
    cout<<"\n";
    return 0;
}
