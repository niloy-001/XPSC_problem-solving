#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        vector<int> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        int ans = -1;

        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;

           
            auto it = lower_bound(prefix_sum.begin(), prefix_sum.end(), x);

            if (it != prefix_sum.end()) {
                cout << (it - prefix_sum.begin()) << "\n";
            } else {
                cout << -1 << "\n"; 
            }
        }

    }

    return 0;
}
