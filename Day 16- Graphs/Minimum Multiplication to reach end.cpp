int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        int mod = 100000;
        queue<pair<int,int>>q;;
        q.push({start,0});
        vector<int>dist(100000,1e9);
        dist[start] = 0;
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            int node = it.first;
            int steps = it.second;
            
            for(auto i :  arr){
                int num = (i * node) % mod;
                if(steps + 1 < dist[num]){
                    dist[num] = steps + 1;
                    if(num == end) return steps + 1;
                    q.push({num,steps + 1});
                    
                }
            }
        }
        return -1;
    }
};
