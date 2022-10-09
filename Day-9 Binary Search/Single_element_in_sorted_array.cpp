Approach 1 - Using Hashing - T.C - O(N), S.C - O(n)
  
Approach 2- Using XOR - T.C - O(N), S.C - O(1)
  
 Approach 3 - Using binary Search - T.C - O(LogN), S.C - O(1)

// code
   int singleNonDuplicate(vector<int>& nums) {
        int left = 0 , right = nums.size()-2;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if((mid%2 == 0 && nums[mid] == nums[mid+1]) || (mid%2 == 1 && nums[mid] == nums[mid-1]))
                left = mid+1;
            else
                right = mid-1;
            }
        return nums[left];
    }
