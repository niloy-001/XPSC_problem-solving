#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    sort(s.begin(),s.end());

    char nf;
    int j=0;
    bool flag=true;

    for(int i='a';i<='z';i++)
    {
        
    if (s.find(i) == string::npos) 
        {
            flag = false;
            nf=i;
            break;
        }

    }

    if(flag) cout<<"NO";
    else cout<<nf<<endl;    

}