#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);

    long t; 
    cin >> t;
    while(t--){
        long n, m; 
        cin >> n >> m;
        string s;
        cin >> s;
        set<long> t;
        for(long p = 0; p < m; p++){
            long x; 
            cin >> x;
            t.insert(--x);
        }
        string r; 
        cin >> r;
        sort(r.begin(), r.end());

        long idx(0);
        for(set<long>::iterator it = t.begin(); it != t.end(); it++){
            long pos = *it;
            s[pos] = r[idx++];
        }

        cout << s << endl;
    }

}
