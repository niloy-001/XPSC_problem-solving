#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int MAX_N = 1e5; 

vector<long long> factorial(MAX_N + 1); 

void precompute_factorials() {
    factorial[0] = 1; 
    for (int i = 1; i <= MAX_N; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD; 
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    precompute_factorials();

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cout<<factorial[n]<<endl;

    }


    return 0;
}