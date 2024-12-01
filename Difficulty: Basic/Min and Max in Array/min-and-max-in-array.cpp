//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        int minimum=INT_MAX;
        int maxi=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
            if(arr[i]<minimum)
            {
                minimum=arr[i];
            }
        }
        
        return {minimum,maxi};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends