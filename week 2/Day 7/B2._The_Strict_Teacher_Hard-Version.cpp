#include<bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, m, q;
        scin >> n >> m >> q;
        
        std::vector<long> b(m);
        for (long p = 0; p < m; p++) {
            cin >> b[p];
        }
        
        std::sort(b.begin(), b.end());
        
        while (q--) {
            long a;
            cin >> a;
            long pos = std::upper_bound(b.begin(), b.end(), a) - b.begin();
            long res = 0;
            
            if (pos == 0) {
                res = b[0] - 1;
            } else if (pos == m) {
                res = n - b.back();
            } else {
                res = (b[pos] - b[pos - 1]) / 2;
            }
            
            cout << res << endl;
        }
    }

    return 0;
}
