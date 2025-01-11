//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxi = arr[0];
        int secMaxi = -1;
        
        if(arr.size() < 2){
            return -1;
        }
        
        for(int i = 1 ; i<arr.size() ; i++){
            if(arr[i] > maxi){
                secMaxi = maxi;
                maxi = arr[i];
            }
            
            else if(arr[i] > secMaxi && arr[i] < maxi){
                secMaxi = arr[i];
            }
        }
        return secMaxi;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends