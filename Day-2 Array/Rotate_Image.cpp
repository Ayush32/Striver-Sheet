Approach - 1 - T.C - O(N*N) , S.C - O(N*N) 
 using Dummy matrix, change first row of matrix into last column of dummy matrix
 change second row of matrix into second last column of dummy matrix and so on.
  
 Approach 2 - T.C - O(N*N), S.C - O(1)
  a - Transpose pf matrix
  b - reverse the matrix by row
  
  // code
  
  void rotateImage(Vector<vector<int>> m){
      int n = m.size();
      
      for(int i = 0;i<n;i++){
      for(int j = 0;j<i;j++)
      {
          swap(m[i][j], m[j][i]);
      }
      }
      for(int i = 0;i<n;i++){
      reverse(m[i].begin(), m[i].end());
      }
  }
