//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    bool PalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            int rev=0;
            int num=arr[i];
            
            while(num){
                rev=rev*10+num%10;
                num=num/10;
            }
            if(arr[i] != rev)
            {
                return false;
            }
        }
        return true;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends