#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        
        bool foundPalindrome = false;
        
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                string substring1 = s1.substr(i);
                string substring2 = s2.substr(j);
                
                string concatenated = substring1 + substring2;
                
                if (isPalindrome(concatenated)) {
                    foundPalindrome = true;
                    break;
                }
            }
            if (foundPalindrome) {
                break;
            }
        }
        
        if (foundPalindrome) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
