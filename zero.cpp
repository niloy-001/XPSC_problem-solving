#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arraySize;
        cin >> arraySize;

        int inputArray[arraySize];
        bool isSolutionFound = true;

        int index = 0;
        while (index < arraySize) {
            cin >> inputArray[index];
            index++;
        }

        int xorCandidate = 0;
        while (xorCandidate < (1 << 8)) {
            int cumulativeXOR = 0;
            int currentIndex = 0;

            while (currentIndex < arraySize) {
                int tempXOR = cumulativeXOR ^ (inputArray[currentIndex] ^ xorCandidate);
                cumulativeXOR = tempXOR;
                currentIndex++;
            }

            if (cumulativeXOR == 0) {
                cout << xorCandidate << endl;
                isSolutionFound = false;
                break;
            }
            xorCandidate++;
        }

        if (isSolutionFound) {
            cout << -1 << endl;
        }
    }

    return 0;
}
