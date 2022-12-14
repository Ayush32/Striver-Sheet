Given an array arr[] of size n, find the first repeating element. The element should occurs more than once and the index of its first occurrence should be the smallest.

 

Example 1:

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
Explanation: 

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int>umap;
        for(int i = 0;i<n;i++)
        {
            umap[arr[i]]++;
        }
        for(int i = 0;i<n;i++)
        {
            if(umap[arr[i]] >= 2)
                return i+1;
            
            
        }
         return -1; 
    }
};
