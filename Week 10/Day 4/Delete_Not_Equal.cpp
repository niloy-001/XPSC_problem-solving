#include <bits/stdc++.h>
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
	    string s;
	    cin>>s;

	    int x=0,y=0;

	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0') x++;
	        
            else y++;

	    }
	    
        if(x==n||y==n)  cout<<n<<endl;
	    else  cout<<"1"<<endl;

	}
    return 0;

}