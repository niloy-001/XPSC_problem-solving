#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
    int n;
    cin>>n;

    string s;
    cin>>s;

    long long int min_change=0;
    vector<long long>displacement;
    long long int total=0;

    for(int i=0;i<n;i++)
    {
        long long L=i;
        long long R=(n-i-1);

        if(s[i]=='L')
        {
            if(L<R)
            {
                min_change++;
                displacement.push_back(R-L);
                total+=R;
            }
            else
            {
                total+=L;
            }
        }
        else
        {
            if(L>R)
            {
                min_change++;
                displacement.push_back(L-R);
                total+=L;
            }
            else
            {
                total+=R;
            }
        }
    }    

        vector<long long>ans(n+1);

        for(int i=min_change;i<=n;i++)
        {
            ans[i]=total;
        }

        sort(displacement.begin(), displacement.end(), greater<long long>());

        for(int i=min_change-1;i>=1;i--)
        {
            total-=displacement.back();
            displacement.pop_back();
            ans[i]=total;
        }

        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
