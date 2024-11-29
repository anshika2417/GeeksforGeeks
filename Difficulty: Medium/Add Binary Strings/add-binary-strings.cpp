//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        string result = "";
    int carry = 0;
    int n1 = s1.size(), n2 = s2.size();

    int i = n1 - 1, j = n2 - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int bit1 = (i >= 0 && s1[i] == '1') ? 1 : 0; 
        int bit2 = (j >= 0 && s2[j] == '1') ? 1 : 0;

        int sum = bit1 + bit2 + carry; 
        result = char((sum % 2) + '0') + result; 
        carry = sum / 2;                      

        i--;
        j--;
    }

    int k = 0;
    while (k < result.size() && result[k] == '0') {
        k++;
    }

    if (k == result.size()) {
        return "0";
    }

    string finalResult = "";
    for (int m = k; m < result.size(); m++) {
        finalResult += result[m];
    }

    return finalResult;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends