47. Permutations II
Medium

6567

114

Add to List

Share
Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

 class Solution {
    void recurPermute(vector<int>&ds,vector<int>&nums,set<vector<int>>&res,int freq[])
        
    {
        if(ds.size() == nums.size()){
            // sort(ds.begin(), ds.end());
        res.insert(ds);
            return;
        }
        
        for(int i = 0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1; // marked
                recurPermute(ds,nums,res,freq);
                freq[i]= 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>res;
        vector<int>ds;
        int freq[nums.size()];
        for(int i = 0;i<nums.size();i++)
        {
            freq[i] = 0;
        }
        recurPermute(ds,nums,res,freq);
        for (auto it = res.begin(); it != res.end(); it++) {
                ans.push_back( * it);
    }
        return ans;
    
    }
};
