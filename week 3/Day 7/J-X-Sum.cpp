#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        int a[n][m];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        int mx=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int now=0;

                int x=i;int y=j;
                while(x>=0 && x<n && y>=0 && y<m)
                {
                    now+=a[x][y];
                    x--;y--;
                }

                 x=i; y=j;
                while(x>=0 && x<n && y>=0 && y<m)
                {
                    now+=a[x][y];
                    x--;y++;
                }

                x=i; y=j;
                while(x>=0 && x<n && y>=0 && y<m)
                {
                    now+=a[x][y];
                    x++;y--;
                }

               x=i; y=j;
                while(x>=0 && x<n && y>=0 && y<m)
                {
                    now+=a[x][y];
                    x++;y++;
                }

                now-=a[i][j]*3;
                mx=max(mx,now);
            }
        }

        cout << mx <<"\n";
    }
}