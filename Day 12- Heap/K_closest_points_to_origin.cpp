class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        
        for(int i = 0;i<points.size();i++)
        {
            long long int square = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            
            pq.push({square,{points[i][0], points[i][1]}});
            
            if(pq.size() > k)
                pq.pop();
        }
        
        vector<vector<int>>ans;
        
        while(pq.size() > 0){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};
