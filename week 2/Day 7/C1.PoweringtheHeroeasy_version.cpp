#include<bits/stdc++.h>
using namespace std;
int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        priority_queue<long long> ds;
        long long res = 0;

        for (long p = 0; p < n; p++) {
            long long x;
            std::cin >> x;
            if (x) {
                ds.push(x);
            } else if (!ds.empty()) {
                res += ds.top();
                ds.pop();
            }
        }

        cout << res << std::endl;
    }

    return 0;
}
