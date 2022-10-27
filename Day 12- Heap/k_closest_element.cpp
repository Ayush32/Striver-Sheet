class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        
        priority_queue<pair<int,int>>maxHeap;
        
        for(int i = 0;i<arr.size();i++)
        {
            int diff = abs(arr[i] - x);
            maxHeap.push({diff,arr[i]});
            
            if(maxHeap.size() > k)
                maxHeap.pop();
        }
        while(maxHeap.size() > 0){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
T.C - O(nlogK), 
