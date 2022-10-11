Approach 1 - Using Linear Search - T.C - O(N), S.C - O(1)

 Approach 2 - Using Binary Search - T.C - O(LogN), S.C - O(1)
  // code
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        
        while(low <= high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] == target)
                return mid;
            if(nums[low] <= nums[mid]) // if left part is sorted
            {
                if(nums[low] <= target && nums[mid] >= target)
                {
                    high = mid - 1;
                }
                
                else{
                    low = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            
        }
        return -1;
    }
};
