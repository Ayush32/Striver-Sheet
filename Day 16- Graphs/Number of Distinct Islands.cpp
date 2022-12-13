Given a boolean 2D matrix grid of size n * m. You have to find the number of distinct islands where a group of connected 1s (horizontally or vertically) forms an 
island. Two islands are considered to be distinct if and only if one island is not equal to another (not rotated or reflected).

Example 1:
class Solution {
    
    void dfs(int row,int col,vector<vector<int>>& grid,vector<vector<int>>&vis,vector<pair<int,int>>&vec,int row0,int col0)
    {
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col] = 1;
        vec.push_back({row-row0,col-col0});
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,-1,0,1};
        
        for(int i = 0;i<4;i++)
        {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                dfs(nrow,ncol,grid,vis,vec,row0,col0);
            }
        }
    }

  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j] == 1){
                    vector<pair<int,int>>vec;
                    dfs(i,j,grid,vis,vec,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
