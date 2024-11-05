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

        vector<int>f_digit(n);

        for(int i=0;i<n;i++)
        {
            cin>>f_digit[i];
        }

        vector<int>i_digit(n);

        for(int i=0;i<n;i++)
        {
            int b_i;
            string move;

            cin>>b_i>>move;

            int current=f_digit[i];

            for(char mo: move)
            {
                if(mo== 'U') 
                {
                     current=(((current-1)+10)%10);
                }
                if(mo== 'D')
                {
                    current=((current+1)%10);
                }

                i_digit[i]=current;
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<i_digit[i]<<" ";
        }
        cout<<endl;
    }
}