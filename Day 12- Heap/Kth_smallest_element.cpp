Approach 1 - Using Sorting - O(nlogn)
  
 Approach 2 = Using Heap - O(nlogk)
  // code
  
  int kthSmallestElement(vector<int>nums)
{
  priority_queue<int>maxHeap;
  
  for(int i = 0;i<nums.size();i++)
  {
    maxHeap.push(nums[i]);
    
    if(maxHeap.size() > k)
      maxHeap.pop();
  }
  return maxHeap.top();
      
}
  
