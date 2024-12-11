#include <bits/stdc++.h>
using namespace std;
int main() 
{
	 ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t; cin>>t;

     while(t--)
     {
     int n,k,p;  cin>>n>>k>>p;

     vector<int>chair(n);
     int sum=0;

     for(int i=0;i<n;i++)
     {
        cin>>chair[i];
        sum+=chair[i];
     }

     sort(chair.begin(),chair.end());

     k+=chair[n-1];
     p=p+sum-chair[n-1];
     

    //  cout<<k<<" "<<p<<endl;

     if(k>p) cout<<"Ved\n";
     else if(p>k) cout<<"Varun\n";
     else cout<<"Equal\n";

    }


}