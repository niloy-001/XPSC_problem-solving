#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int h,l,w;
        cin>>h>>l>>w;

        int n;
        n=2*((h*l)+(l*w)+(w*h));

        cout<<1000/n<<endl;
    }
    return 0;
}
