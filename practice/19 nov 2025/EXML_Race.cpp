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
        int ans;
        vector<int>a;

        for(int i=0;i<n;i++)
        {
            int k,l;
            cin>>k>>l;
           
            a.push_back(k/l);
        }
        int max_value=a[0];
        int max_index=0;
        for(int i=0;i<a.size();i++)
        {
           if(a[i]>max_value)
           {
            max_value=a[i];
            max_index=i;
           }
           
        }
    
        cout<<max_index+1<<endl;
        
    }
    return 0;
}
