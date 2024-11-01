#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;

    vector<pair<int,int>> period(n);

    for (int i = 0; i < n; i++) {
        cin >> period[i].first >> period[i].second;
    }

    int t_power= 0;

    for(int i=0;i<n;i++)
    {
        int l=period[i].first;
        int r=period[i].second;

        int t_work=(r-l);
        t_power+= p1*t_work;

        if(i<n-1)
        {
            int next=period[i+1].first;
            int extra=(next-r);

            if(extra<=t1)
            { 
                t_power+=extra*p1;
            }
            else if(extra<=t1+t2) 
            {
                t_power+= (t1*p1) + ((extra-t1)*p2);
            }
            else 
            {
                t_power+= (t1*p1)+(t2*p2)+((extra-(t1+t2))*p3);   
            }
        }

    }

    cout<<t_power<<endl;


}