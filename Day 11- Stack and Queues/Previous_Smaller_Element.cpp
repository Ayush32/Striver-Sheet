Approach - 1 Using Stack - T.C- O(n)

#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
    vector < int > prevSmallerElements(vector < int > & nums) {
      int n = nums.size();
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = 0; i< n; i++) {
        while (!st.empty() && st.top() >= nums[i]) {
          st.pop();
        }

      
          if (i < n) {
          if (!st.empty()) nge[i] = st.top();
        }
        
        st.push(nums[i]);
      }
      return nge;
    }
};
int main() {
  Solution obj;
  vector < int > v {2, 1, 5, 6, 2, 3, 1};
  vector < int > res = obj.prevSmallerElements(v);
  cout << "The next greater elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
}
