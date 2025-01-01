#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
	cin>>t;
   
    while(t--)
	{
	    long long n;
	    cin>>n;
	    vector<long long>a(n);

	    for(long long i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    long long p=a[0];
        
        sort(a.begin(),a.end());
        auto it=find(a.begin(),a.end(),p);

	    long long c=1;
        long long e=1e6;

	    long long x=it-a.begin();
	    if (x<n-1)
	    {
            long long r = a[x+1];
            e =min(e,((p+r)/2));
        }
        if (x>0) 
        {
            long long l = a[x-1];
            c =max(c,((p+l+1)/2));
        }
        
        long long o=e-c+1;
        long long ans=max(0LL,o);

        cout<<ans<<endl;
	}

    return 0;
}