#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char>s;
    
     char c;

    while (cin >> c) {
        s.push_back(c);
    }

    int n = s.size();

    map<char, vector<int>> m;


    for (int i = 0; i < n; i++) {
        m[s[i]].push_back(i + 1); 
    }

 
    // for (const auto& pair : m) {
    //     cout << pair.first << ": ";
    //     for (int index : pair.second) {
    //         cout << index << " ";
    //     }
    //     cout << endl;
    // }

    int cost=abs(s[n-1]-s[0]);
    vector<int>path;

    // if(s[0]>s[n-1])
    // {
    //    for()
    // }

    // Find the positions of s[0] in the map
vector<int> positions = m[s[0]];

// Output the positions
cout << "Positions of '" << s[0] << "' in the input: ";
for (int pos : positions) {
    cout << pos << " ";
}
cout << endl;


    return 0;
}
