Approach - 1- Using Brute Force - T.C - O(n^2) , S.C - O(1)
  // using two nested loops 
 
Approach 2 - Two Pointer Approach - T.C - (NlognN) , T.C - O(1)
 // first sort the array
  .// take two pointers
 
Approach 3 - Using Hashmap - T.C - O(N) , S.C - O(N)
  
  vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        
        vector<int>ans;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            
            mp[nums[i]] = i;
        }
        return ans;
