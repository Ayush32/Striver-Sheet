791. Custom Sort String

You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

Return any permutation of s that satisfies this property.

 
Example 1:

Input: order = "cba", s = "abcd"
Output: "cbad"
Explanation: 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
  
 
class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        for(int i = 0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        string ans = "";
        for(int i = 0;i<order.length();i++)
        {
            if(mp.find(order[i]) != mp.end())
            {
                while(mp[order[i]]  > 0)
                {
                    ans += order[i];
                    mp[order[i]]--;
                }
            }
            
        }
        for(auto i : mp)
        {
            while(i.second > 0){
                ans += i.first;
                i.second--;
            }
        }
        return ans;
    }
};
