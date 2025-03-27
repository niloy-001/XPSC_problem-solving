#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, c;
        cin >> n >> c;
 
        vector<int> costValues(n);
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            costValues[i] = value + i + 1;
        }
 
        sort(costValues.begin(), costValues.end());
 
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (c >= costValues[i]) {
                c -= costValues[i];
                count++;
            } else {
                break;
            }
        }
 
        cout << count << "\n";
    }  
 
    return 0;
}