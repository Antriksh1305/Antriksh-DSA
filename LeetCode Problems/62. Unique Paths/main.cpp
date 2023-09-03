/* Dynamic Programming with memoization */
/* TC-> O(m*n) & SC-> O(m*n) */

class Solution {
public:
    int solve(int row, int col, int m, int n, vector<vector<int>>& dp) {
        if(row > m or col > n) return 0;
        if(row == m and col == n){
            return 1;
        }
        
        if(dp[row-1][col-1] != -1) return dp[row-1][col-1]; 

        return dp[row-1][col-1] = solve(row+1,col,m,n,dp) + solve(row,col+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        if(m == 1 and n == 1) return 1;
        vector<vector<int>> dp (m, (vector<int> (n, -1)));
        solve(1,1,m,n,dp);

        return dp[0][0];
    }
};
