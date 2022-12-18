207. Course Schedule

There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. 
  You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
Return true if you can finish all courses. Otherwise, return false.
class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {
         vector<int>adj[V];
	    for(auto it : prerequisites){
	        adj[it[1]].push_back(it[0]);
	    }
	    // find indegree for each node
	    vector<int>indegree(V,0);
	    for(int i = 0;i<V;i++){
	        for(auto it : adj[i])
	        {
	            indegree[it]++;
	        }
	    }
	    queue<int>q;
	    vector<int>topo;
	    
	    for(int i = 0;i<V;i++)
	    {
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        for(auto it : adj[node]){
	            indegree[it]--;
	            if(indegree[it] == 0){
	                q.push(it);
	            }
	        }
	    }
	    if(topo.size() == V)
	        return true;
	    return false;
    }
};
