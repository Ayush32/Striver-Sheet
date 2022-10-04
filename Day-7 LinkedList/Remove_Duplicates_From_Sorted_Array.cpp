Approach 1 - T.C - O(NlogN) , S.C - O(N)
//   using set
  
  unordered_set<int>s;
for(auto i : nums){
  s.insert(i);
  int k = s.size();
  
  int j = 0;
  for(auto x : s)
  {
    arr[j++] = x;
  }
  return k;
}

Approach 2 - Two Pointers Approach - T.C - O(N) , S.C - O(1)
  // code
  int i = 0;
  for(int j = 1;j<n;i++)
  {
    if(arr[i] != arr[j])
    {
      i++;
      arr[i] = arr[j];
    }
    return i + 1;
  }
