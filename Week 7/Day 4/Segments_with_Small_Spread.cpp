#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    multiset<long long> b;
    int l = 0, r = 0;
    long long dif = 0, ans = 0;

    while (r < n) {
        b.insert(a[r]);
        auto min_val = *b.begin();
        auto max_val = *b.rbegin();

        dif = max_val - min_val;
        if (dif <= k) {
            ans += (r - l + 1);
        } else {
            while (l <= r) {
                min_val = *b.begin();
                max_val = *b.rbegin();
                dif = max_val - min_val;
                if (dif <= k) {
                    break;
                }
                b.erase(b.find(a[l]));
                l++;
            }
            dif = *b.rbegin() - *b.begin();
            if (dif <= k) {
                ans += (r - l + 1);
            }
        }

        r++;
    }

    cout << ans << endl;
    return 0;
}
