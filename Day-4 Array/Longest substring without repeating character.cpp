Approach - 1 - Using Two Pointers - T.C - O(N), S.C - O(N)
  
  class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start =0;
        int end = 0;
        set<char>Set;
        int Max = 0;
        while(start < s.size())
        {
            if(Set.find(s[start]) == Set.end())
            {
                if(Max < start - end + 1){
                    Max = start-end + 1;
                }
                Set.insert(s[start]);
                start++;
                
            }
            else{
                Set.erase(s[end]);
                end++;
            }
        }
        return Max;
    }
};
  
