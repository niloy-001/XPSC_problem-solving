#include<bits/stdc++.h>
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
        vector<vector<int>>a(n,vector<int>(n-1));

        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n-1;j++)
          {
            cin>>a[i][j];
          }
        }

        deque<int>dq;
        
         for(int i=0;i<n;i++)
        {
          for(int j=0;j<n-1;j++)
          {
 
            if(find(dq.begin(),dq.end(),a[i][0])!=dq.end()  && find(dq.begin(),dq.end(),a[i][j])==dq.end())
            {
                dq.push_back(a[i][j]);
            }
            else if(find(dq.begin(),dq.end(),a[i][0])==dq.end()  && find(dq.begin(),dq.end(),a[i][j])==dq.end())
            {
                dq.push_front(a[i][j]);
            }
          }

        }

        for(auto val:dq)
        {
            cout<<val<<" ";
        }

        cout<<endl;
    }
}