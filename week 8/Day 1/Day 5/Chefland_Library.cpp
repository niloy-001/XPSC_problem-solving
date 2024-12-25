#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	
    int t;
	cin>>t;
	while(t--)
	{
	    long long n;    cin>>n;

	    map<long long,long long>a;

	    for(long long i=1;i<=n;i++)
	    {
	        long long x;
	        cin>>x;
	        a[x]=max(a[x],i);
	    }

	    long long sum=0;

	    for(auto b:a)
	    {
	        sum+=b.second;
	    }

	    cout<<sum<<"\n";
	}

}