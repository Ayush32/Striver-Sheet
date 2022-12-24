vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
          queue<int> Queue;
        vector<int> indeg(N,0);
        vector<pair<int,int>> adj[N];
        
        for(int i=0;i<M;i++)
        {
            int src = edges[i][0];
            int dest = edges[i][1];
            int weight = edges[i][2];
            indeg[dest]++;
            adj[src].push_back({dest,weight});
        }
        
        for(int i=0;i<N;i++)
            if(indeg[i]==0) Queue.push(i);
            
        vector<int> distance(N,INT_MAX);
        distance[0] = 0;
        while(!Queue.empty())
        {
            int temp = Queue.front();
            Queue.pop();
            for(auto it : adj[temp])
            {
                int dest = it.first;
                int weight = it.second;
                indeg[dest]--;
                if(indeg[dest] == 0) Queue.push(dest);
                if(distance[temp]!=INT_MAX and distance[temp]+weight < distance[dest])
                    distance[dest] = distance[temp]+weight;
            }
        }
            
        for(int i=0;i<N;i++)
            if(distance[i]==INT_MAX)
                distance[i] = -1;

        return distance;
        
    }
};
