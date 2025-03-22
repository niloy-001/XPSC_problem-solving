#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    stack<string>s;

    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        s.push(a);
    }

    set<string>ans;

    while(!s.empty())
    {

        if(ans.find(s.top())==ans.end())
        {
            string b=s.top();
            ans.insert(b);

            if(b.size()>2)
            {
                cout<<b.substr(b.size()-2);
            }
        }
        s.pop();

    }

    return 0;
    
}

// problem link: https://www.codechef.com/problems/ALTTAB
