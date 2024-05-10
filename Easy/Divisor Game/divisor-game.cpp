//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findfactors(int n){
        vector<int> ans;
        ans.push_back(1);
        for(int i = 2; i < n ; i++){
            if(n%i == 0){
                while( n > 0 && n%i == 0) n /=i;
                ans.push_back(i);
            }
        }
        return ans;
    }
    bool divisorGame(int n) {
        // code here
        return (n%2 == 0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution obj;
        bool ans = obj.divisorGame(n);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends