class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int>adj[N];
        for(auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>dist(N,-1);
        dist[src] = 0;
        queue<pair<int,int>>q;
        q.push({src,0});
        while(!q.empty()) {
            int node = q.front().first;
            int wt = q.front().second;
            q.pop();
            for(auto it : adj[node]){
                if(dist[it] == -1) {
                    dist[it] = wt + 1;
                    q.push({it,wt + 1});
                }
            }
        }
        // vector<int>ans(N,-1);
        // for(int i = 0;i<N;i++){
        //     if(ans[i] != 1e9)
        //         ans[i] = dist[i];
        // }
        return dist;
    }
};
