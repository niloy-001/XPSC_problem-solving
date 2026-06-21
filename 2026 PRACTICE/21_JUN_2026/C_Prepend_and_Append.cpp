#include <iostream>
#include <string> 
using namespace std;

int main() {
    // আইও (I/O) অপ্টিমাইজেশন
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s; 

        int left = 0;
        int right = n - 1; 
        int cnt = 0;

        while(left < right)
        {
           
           if((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0'))
           {
                cnt += 2;
           }
           else
           {
                break;
           }

           left++;
           right--;
        }

        cout << n - cnt << "\n";
    }
    return 0;
}