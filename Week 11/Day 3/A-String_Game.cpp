#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        stack<int>s;
        int valid_move=0;

        string s1;
        cin >> s1;
        
        for (int i = 0; i < n; i++)
        {
           
            if(s.empty())
            {
                s.push(s1[i]);
            }
            else
            {
                if(s.top()!=s1[i])
                {
                    s.pop();
                    valid_move++;
                }
                else
                {
                    s.push(s1[i]);
                }
            }

        }

        if(valid_move%2==0)
        {
            cout<<"Ramos"<<"\n";
        }
        else
        {
            cout<<"Zlatan"<<"\n";
        }
        
    }
    

    return 0;
}
