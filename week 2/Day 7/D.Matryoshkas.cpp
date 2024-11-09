#include<bits/stdc++.h>
using namespace std;
int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<long> v(n, 0);
        
        for (long p = 0; p < n; p++) {
            cin >> v[p];
        }
        
        sort(v.begin(), v.end());
        v.push_back(1e9 + 3);

        long prev = v[0], cur = 1, cnt = 0, run = 0;
        
        for (long p = 1; p <= n; p++) {
            if (v[p] == prev) {
                ++cur;
            } else {
                if (cur < run) {
                    cnt += (run - cur);
                    run = cur;
                } else {
                    run = cur;
                }

                if (v[p] > prev + 1) {
                    cnt += run;
                    run = 0;
                }

                cur = 1;
            }

            prev = v[p];
        }

        cout << cnt << endl;
    }

    return 0;
}
