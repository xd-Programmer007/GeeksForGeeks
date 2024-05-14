//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
  
    bool isValid(int newX, int newY, int m, int n,vector<vector<bool>>& vis){
        return newX >=0 and newX <m and newY >=0 and newY < n and !vis[newX][newY];
    }
    int check(vector<vector<int>>& M, int mid){
        int m = M.size(), n = M[0].size();
        vector<vector<bool>> vis(m , vector<bool>(n, false));
        vis[0][0] = true;
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,-1,0,1};
        queue<pair<int,int>> q;
        q.push({0,0});
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            if(curr.first == m-1 and  curr.second == n-1){
                return true;
            }
            for(int i = 0 ; i < 4 ; i++){
                int newX = curr.first + dx[i];
                int newY = curr.second + dy[i];
                if(isValid(newX,newY,m,n,vis) and abs(M[newX][newY]-M[curr.first][curr.second]) <= mid){
                    vis[newX][newY] = true;
                    q.push({newX, newY});
                }
            }
            
        }
        return false;
    }
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // code here
        int low = 0, high = 1e6;
        while( low < high){
            int mid = low + (high - low)/2;
            if(check(heights, mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int rows;
        scanf("%d", &rows);

        int columns;
        scanf("%d", &columns);

        vector<vector<int>> heights(rows, vector<int>(columns));
        Matrix::input(heights, rows, columns);

        Solution obj;
        int res = obj.MinimumEffort(rows, columns, heights);

        cout << res << endl;
    }
}

// } Driver Code Ends