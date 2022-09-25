Approach - 1 - Naive Approach - T.C - O(M*N) , S.C - O(1) , m- number of columns , n - number of rows
// using loops 
bool search(int mat[4][4], int n, int x)
{
    if (n == 0)
        return -1;
 
    // traverse through the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
           
            if (mat[i][j] == x) {
                return true;
            }
    }
 
    
    return false;
}

Approach 2 - T.C - O(log(M+N)) , S.C - O(1)
  //code
      bool searchMatrix(vector<vector<int>>& mat, int x) {
  int i  = 0, j = mat[0].size()- 1;
      int R=mat.size();
      int C=mat[0].size();
	while(i < R && j >= 0)
	{
		if(mat[i][j] == x)
		{
			return true;
		}
		else if(mat[i][j] > x)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
	return false;
    }

Approach 3 - Using Binary Search - O(mlogN)
  
  // code
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int s = 0;
        int e = row * col -1;
        int mid = s + (e -s)/2;
        while(s <= e) {
            
            
            int element = matrix[mid /col][mid % col];
            
            if(element == target)
                return 1;
            if(element < target)
                s= mid + 1;
            else
                e = mid - 1;
            mid = s + (e -s)/2;
        }
        return 0;
    }
