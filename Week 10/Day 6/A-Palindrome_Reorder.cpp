#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    string s;
    cin>>s;
    int n=s.size();

    map<char,int>fre;

    for(int i=0;i<n;i++)
    {
        fre[s[i]]++;
    }

    int odd_num=0;
    char odd_char='\0';

    for(auto& val:fre)
    {
        if(val.second%2!=0)
        {
            odd_num++;
            odd_char=val.first;
        }
    }

    if(odd_num>1)
    {
        cout<<"NO SOLUTION"<<"\n";
        return 0;
    }
    else
    {
        string half;
        string paridrome;

        for(auto& pair:fre)
        {
            half+=string(pair.second/2,pair.first);
        }

        paridrome+=half;

        if(odd_num==1)
        {
           paridrome+=odd_char;
        }

        reverse(half.begin(),half.end());

        paridrome+=half;

        cout<<paridrome<<"\n";

    }

    return 0;
}
