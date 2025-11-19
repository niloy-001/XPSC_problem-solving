#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int c1 = 0, c2 = 0, c3 = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            if (x == 1) c1++;
            else if (x == 2) c2++;
            else if (x == 3) c3++;
        }

        int keep = max(c1, c3);
        if (c2 > 0) keep++;

        cout << (N - keep) << "\n";
    }

    return 0;
}
