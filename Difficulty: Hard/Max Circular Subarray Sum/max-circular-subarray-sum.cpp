//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        // your code here
        int n = arr.size();
        int max_straight_SUM = INT_MIN;  
        int min_straight_SUM = INT_MAX; 
        int array_SUM = 0;             
    
        int temp_maxSUM = 0;  
        int temp_minSUM = 0;  
    
        for (int i = 0; i < n; ++i) {
            array_SUM += arr[i]; 
    
            temp_maxSUM += arr[i];
            max_straight_SUM = max(max_straight_SUM, temp_maxSUM);
            temp_maxSUM = max(temp_maxSUM, 0);
    
            temp_minSUM += arr[i];
            min_straight_SUM = min(min_straight_SUM, temp_minSUM);
            temp_minSUM = min(temp_minSUM, 0);
        }
    

        if (array_SUM == min_straight_SUM)
            return max_straight_SUM;
    
        return max(max_straight_SUM, array_SUM - min_straight_SUM);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends