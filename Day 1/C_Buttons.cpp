#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    int a2=(2*a-1);
    int b2=(2*b-1);
    int sum=a+b;

    
    cout<<max(sum,max(a2,b2))<<endl;
}
