/* BFS */
/* Expected Time Complexity: O(n*m)
Expected Auxiliary Space: O(n*m) */

class Solution{
public:
    void solve(vector<vector<char>>& ans, vector<vector<char>>& mat, vector<vector<bool>>& visited, int i, int j, int& n, int& m) {
        // pair<row,col>
        queue<pair<int,int>> q;
        q.push({i,j});
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            if(visited[row][col] == true) continue;
            else visited[row][col] = true;
            
            if(row > 0 and mat[row-1][col] == 'O' and !visited[row-1][col]){
                ans[row-1][col] = 'O';
                q.push({row-1,col});
            }
            if(col > 0 and mat[row][col-1] == 'O' and !visited[row][col-1]){
                ans[row][col-1] = 'O';
                q.push({row,col-1});
            }
            if(row < n-1 and mat[row+1][col] == 'O' and !visited[row+1][col]){
                ans[row+1][col] = 'O';
                q.push({row+1,col});
            }
            if(col < m-1 and mat[row][col+1] == 'O' and !visited[row][col+1]){
                ans[row][col+1] = 'O';
                q.push({row,col+1});
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<char>> ans(n, vector<char> (m , 'X'));
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        
        // change the boundaries in the ans
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((i == 0 or j == 0 or i == n-1 or j == m-1) and mat[i][j] == 'O'){
                    ans[i][j] = 'O';
                }
            }
        }
        
        // Left border
        for(int i = 0; i < n; i++)
            if(ans[i][0] == 'O') solve(ans,mat,visited,i,0,n,m);
        
        // Top border
        for(int j = 0; j < m; j++)
            if(ans[0][j] == 'O') solve(ans,mat,visited,0,j,n,m);
        
        // Right border
        for(int i = 0; i < n; i++)
            if(ans[i][m-1] == 'O') solve(ans,mat,visited,i,m-1,n,m);
        
        // Bottom border
        for(int j = 0;j < m; j++)
            if(ans[n-1][j] == 'O') solve(ans,mat,visited,n-1,j,n,m);
        
        
        return ans;
    }
};
