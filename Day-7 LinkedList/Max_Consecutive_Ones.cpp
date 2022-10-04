Apporoach 1 - Linear Traversal Iteration - T.C - O(N), S.C - O(1)
  // code
  
  int count = 0;
  int max_count  = 0;
  for(auto i : nums)
  {
    if(i == 1)
      count++;
    else
      count  = 0;
    
    max_count = max(max_count,count);
    
    return max_count;
  }
