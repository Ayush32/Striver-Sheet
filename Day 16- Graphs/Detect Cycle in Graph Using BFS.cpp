Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 
  
class Solution {
    private:
        bool detectCycle(int src,vector<int>adj[],int vis[])
        {
            vis[src] = 1;
            queue<pair<int,int>>q;
            q.push({src,-1});
            
            while(!q.empty())
            {
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                
                // traversing it all neighbour
                
                for( auto adjacentNode : adj[node]){
                    // if univisited
                    if(!vis[adjacentNode]) {
                        vis[adjacentNode] = 1;
                        q.push({adjacentNode,node});
                    }
                    else if(parent != adjacentNode)
                        {
                            return true;
                        }
                }
            }
            return false;
        }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        
        for(int i = 0;i<V;i++)
        {
            if(!vis[i]) {
                if(detectCycle(i,adj,vis))
                    return true;
            }
        }
        return false;
    }
};
