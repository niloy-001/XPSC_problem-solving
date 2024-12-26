#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, k;
    cin >> n >> k;

    vector<long long> divisor;

    for (long long i = 1; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            divisor.push_back(i);
            if (i != n / i) 
            {
                divisor.push_back(n / i);
            }
        }    
    }

    sort(divisor.begin(), divisor.end());

    // for (auto v : divisor)
    // {
    //     cout << v << " ";
    // }

    if(k<=divisor.size())
    {
        cout<<divisor[k-1]<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}
