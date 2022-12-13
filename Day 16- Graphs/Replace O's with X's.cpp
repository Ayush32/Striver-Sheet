Replace O's with X's
MediumAccuracy: 34.0%Submissions: 24K+Points: 4
Given a matrix mat of size N x M where every element is either ‘O’ or ‘X’.
Replace all ‘O’ with ‘X’ that are surrounded by ‘X’.
A ‘O’ (or a set of ‘O’) is considered to be by surrounded by ‘X’ if there are ‘X’ at locations just below, just above, just left and just right of it.

class Solution{
    
    void dfs(int row,int col,vector<vector<char>> &mat,vector<vector<int>>&vis,int delRow[],int delCol[])
    {
        int n = mat.size();
        int m = mat[0].size();
        vis[row][col]  = 1;
        for(int i = 0;i<4;i++)
        {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O')
            {
                dfs(nrow,ncol,mat,vis,delRow,delCol);
            }
        }
        
    }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,-1,0,1};
        vector<vector<int>> vis(n,vector<int>(m,0));
         // check for unvisited Os in the boundary rows

        // first row 
        for(int j = 0;j<m;j++)
        {
            if(!vis[0][j] && mat[0][j] == 'O')
                {
                    dfs(0,j,mat,vis,delRow,delCol);
                }
                     
            // last row
     
            if(!vis[n-1][j] && mat[n-1][j] == 'O')
                {
                    dfs(n-1,j,mat,vis,delRow,delCol);
                }
        }
         // check for unvisited Os in the boundary column

        // first column 
        for(int i = 0;i<n;i++)
        {
            if(!vis[i][0] && mat[i][0] == 'O')
                {
                    dfs(i,0,mat,vis,delRow,delCol);
                }
                     
            // last coloumn
     
            if(!vis[i][m-1] && mat[i][m-1] == 'O')
                {
                    dfs(i,m-1,mat,vis,delRow,delCol);
                }
        }
        
        // if unvisited then converted to X
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(!vis[i][j] && mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};
