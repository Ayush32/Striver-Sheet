class Solution {
    void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<bool>>&vis, int &tmpsum,int delrow[],int delcol[]){

        vis[row][col] = 1;
        tmpsum++;
        int n = grid.size();
        int m = grid[0].size();

       
        for(int i=0;i<4;i++){
            

            int nr = row + delrow[i];
            int nc = col + delcol[i];

            if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1){
                
               dfs(nr, nc, grid, vis, tmpsum,delrow,delcol);
                
            }
                
            
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        

        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> vis( n , vector<bool> (m, 0)); 

        

        int ans = 0;
         int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int tmpsum=0;
                if(vis[i][j]==0 && grid[i][j]==1){
                    dfs(i, j, grid, vis, tmpsum,delrow,delcol);
                    ans = max(ans, tmpsum);
                }
            }
        }

        return ans;
}
};
