
Approach - 1 - using two loops - T.C - O(N^2), S.C - O(1)
  
Approach 2 - Optimal  - T.C - O(N) , S.C - O(N)
  // using hashmaps
  
  int maxLen(vector<int>nums)
{
  int sum = 0;
  int maxlen = 0;
  
  unordered_map<int,int>hash;
  
  for(int i = 0;i<nums.size();i++;) {
    sum += arr[i];
    
    if(nums[i] == 0 && maxlen == 0)
      maxlen = 1;
    if(sum ==0)
      maxlen = i + 1;
    
    if(hash.find(sum) != hash.end()) 
    {
      maxlen = max(maxlen, i - hash[sum]);
    }
    else {
      hash[sum] = i;
    }

  }  
  return maxlen;
}
