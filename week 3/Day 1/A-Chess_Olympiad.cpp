#include<bits/stdc++.h>
#define dd double
using namespace std;
int main()
{
    int x,y,z;
    cin >>x>>y>>z;


    dd sum=((x*1)+(y*(0.5)));
    dd total=x+y+z;
    dd t_max=total;
    dd oponnent_have=total-sum;
    dd extra=4-total;

    dd sum1=sum+extra;

    if(sum1>oponnent_have) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}