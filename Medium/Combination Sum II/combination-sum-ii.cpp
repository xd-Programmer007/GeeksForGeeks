//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int ind, int k, vector<int> &ds, vector<vector<int>> &ans, 
                vector<int> &arr, int &n){
                
        if(k<0) return; 
        /* if remaining sum becomes negative return directly because input contains only
           positive elements*/
        
        if(ind>=n){
            if(k==0){
                ans.push_back(ds);
            }
            return;
        }
        
        // pick
        ds.push_back(arr[ind]);
        solve(ind+1, k-arr[ind], ds, ans, arr, n);
        ds.pop_back();
        
        // Not pick
    /* As we have sorted the input array duplicate combination will only occur when we 
    perform not pick and then pick operation on the adjacent elements which are equal*/
        int i = ind;
        while(i<n && arr[i]==arr[ind]) i++;
        solve(i, k, ds, ans, arr, n);
        
        return;
    }

    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(begin(arr), end(arr)); // will be helpful to put only distinct combination
        vector<int> ds;
        vector<vector<int>> ans;
        solve(0, k, ds, ans, arr, n);
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends