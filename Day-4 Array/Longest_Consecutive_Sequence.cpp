Approach 1 - Naive Approach - T.C - (NlogN), S.C - O(1)
  // sort the array
  int longestConsecutive(vector<int> nums) {
        if(nums.size() == 0 ){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        int prev = nums[0];
        int cur = 1;
        
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == prev+1){
                cur++;
            }
            else if(nums[i] != prev){
                cur = 1;
            }
            prev = nums[i];
            ans = max(ans, cur);
        }
        return ans;
    }

Approach 2 - Optimal Approach - T.C - O(N)
//   using set
  
  int longestSequence(vector<int>nums)
{
  unordered_set<int>s;
  
  for(int i = 0;i<nums.size();i++)
  {
    s.insert(nums[i]);
  }
  int ans = 0;
  for(int i = 0;i<nums.size();i++) {
    if(s.find(nums[i]) != s.end()){
      continue;
    }
    else{
      int count  = 0;
      int current = nums[i];
      while(s.find(current) != s.end())
      {
        count++;
        current++;
        
      }
      ans = max(ans,count);
      }
  }
  return ans;
}
  
