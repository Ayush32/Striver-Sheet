class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            
            Node* curr = it.first;
            int line  = it.second;
            
            if(mp.find(line) == mp.end()) // if line not exist in map then store with node value
                mp[line] = curr->data;
            
            if(curr->left != NULL)
                q.push({curr->left,line - 1});  // if line is on left part
            if(curr->right != NULL)
                q.push({curr->right,line+1}); // if line is on right part;
            
        }
        
        for(auto it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
        
    }

};
