//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    vector<int> computeLPS(const string &str) {
        int n = str.length();
        vector<int> lps(n, 0);
        int len = 0; 
        int i = 1;
    
        while (i < n) {
            if (str[i] == str[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
    
    int minChar(string& s) {
        // Write your code here
        string reversed_s = s;
        reverse(reversed_s.begin(), reversed_s.end());
        string combined = s + '#' + reversed_s;
        vector<int> lps = computeLPS(combined);
        int longestPalindromicSuffix = lps.back();
    
        return s.length() - longestPalindromicSuffix;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends