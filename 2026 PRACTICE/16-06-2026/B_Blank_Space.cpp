#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int t;
    cin>>t;

    vector<int>a(t);

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>b(n);

        int count=0,max_count=0;

        for(int i=0;i<n;i++)
        {
            cin>>b[i];


            if(b[i]==0)
            {
                count++;
                max_count=max(count,max_count);
            }
            else
            {
                count=0;
            }
        }

        cout<<max_count<<endl;

    }
    return 0;
}