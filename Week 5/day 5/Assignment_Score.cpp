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

        vector<int>mark(n+1);

        for(int i=0;i<n;i++)
        {
            cin>>mark[i];
        }

        int total_mark=((n+1)*100)/2;

        int total_sum=0;
        for(auto val:mark)
        {
            total_sum+=val;
        }

        if((total_mark - total_sum) > 100) cout<<"-1"<<endl;

        else
        {
            if((total_mark-total_sum)>0) cout<<(total_mark-total_sum)<<endl;
            else cout<<"0"<<endl;
        }

    }
    return 0;
}