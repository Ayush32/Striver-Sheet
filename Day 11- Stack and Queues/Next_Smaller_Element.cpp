Using Stack - T.C- O(n),

#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
    vector < int > nexSmallerElements(vector < int > & nums) {
      int n = nums.size();
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = 2 * n -1; i >= 0; i--) {
        while (!st.empty() && st.top() >= nums[i % n]) {
          st.pop();
        }

      
          if (i < n) {
          if (!st.empty()) nge[i] = st.top();
        }
        
        st.push(nums[i % n]);
      }
      return nge;
    }
};
int main() {
  Solution obj;
  vector < int > v {2, 1, 5, 6, 2, 3, 1};
  vector < int > res = obj.nextGreaterElements(v);
  cout << "The next greater elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
