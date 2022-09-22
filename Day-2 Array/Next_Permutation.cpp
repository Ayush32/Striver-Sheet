Approach 1 - Using Builtin Function -
  
Approach 2 - Optimal Approach  T.C - O(n) + O(n) + O(n) = O(n), S.C - O(1)
  
  // code
  
  void permutation(vector<int>v)
{
  int n = v.size(),k,l;
  
  for(k = n - 2;k >= 0;k--)
  {
    if(v[k] <v[k+1])
    {
      break;
    }
  }
  if(k < 0){
    reverse(v.begin(),v.end());
  }
  else{
    for(l = n - 1;l >= 0;l--)
  {
    if(v[l] > v[k])
      break;
    
  }
  }
  swap(v[k],v[l]);
  reverse(v.begin() + k + 1,v.end());
  
  
}
