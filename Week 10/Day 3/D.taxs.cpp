#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if(x==1) return false;

    for(int i=2;i*i<=x;i++)
    {
      if((x%i)==0)
      {
        return false;
        break;
      }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(isPrime(n)) cout<<"1"<<endl;

    else if(n%2==0) cout<<"2"<<endl;

    else
    {
        if(isPrime(n-2)) cout<<"2"<<endl;

        else cout<<"3"<<endl;
    }

    
}