//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int p) {
        // code here
        int T = 0 , i = 0;
        while( true){
            i++;
            T = ((2*i + 1)*(2*i + 1) - 1)/8;
            if(T >= p){
                break;
            }
           
        }
        int n = i , d =  T - p;
        while(d & 1){
            n += 1;
            d += n;
        }
        return n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends