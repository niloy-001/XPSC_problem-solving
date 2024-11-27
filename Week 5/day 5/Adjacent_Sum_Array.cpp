#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Size of array A
        vector<int> B(N - 1);

        for (int i = 0; i < N - 1; i++) {
            cin >> B[i];
        }

        // Sort B to process in order
        // sort(B.begin(), B.end());

        vector<int> A;
        // Initialize A[0] with a valid assumption
        A.push_back(B[0] / 2); 

        for (int i = 0; i < N - 1; i++) {
            // Deduce A[i+1] from B[i] and A[i]
            A.push_back(B[i] - A.back());
        }
        reverse(A.begin(),A.end());

        // Print the result for this test case
        for (int i = 0; i < N; i++) {
            cout << A[i] << (i == N - 1 ? "\n" : " ");
        }

    }
}

int main() {
    solve();
    return 0;
}
