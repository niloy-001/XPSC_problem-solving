#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n,xorans=0 ;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++)
        {
         cin>>a[i];

         xorans^=a[i];
        }

        if(n%2 == 0 && xorans==0)
        {
            cout<<"0"<<"\n";
        }
        else if(n%2!=0)
        {
            cout<<xorans<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
    }
    return 0;
}