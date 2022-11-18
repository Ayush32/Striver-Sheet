class Solution {
    
   static bool mycomp(pair<int,int>p1,pair<int,int>p2)
    {
        if(p1.second == p2.second)
            return p1.first > p2.first;
        else
            return p1.second< p2.second;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>umap;
        
        for(int i = 0;i<nums.size();i++)
        {
            umap[nums[i]]++;
        }
        vector<pair<int,int>> p(umap.begin(),umap.end());
        sort(p.begin(),p.end(),mycomp);
        for(auto i : p)
        {      
                while(i.second--){
                    ans.push_back(i.first);
                }
        }
    
        
        return ans;
    
}


};
