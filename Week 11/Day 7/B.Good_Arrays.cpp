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

 
        long long sum=0;
        long long cnt1=0;
        
        for(int i=0;i<n;i++)
        {
          int x;
          cin>>x;
   
         sum+=x;
         if(x==1) cnt1++;

        }
        
        if(sum-n >= cnt1 && n>1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
       
    }
    
    return 0;
}