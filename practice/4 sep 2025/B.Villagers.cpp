//problem link: https://codeforces.com/contest/2133/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int cost = 0;
        int n;
        cin >> n;

        vector<long long int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = n - 1; i > 0; i -= 2) {
            cost += max(a[i] , a[i - 1]);
        }

        if (n % 2 != 0) cost += a[0];

        cout << cost << "\n";
    }
    return 0;
}
