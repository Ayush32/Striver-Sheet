Bottom View of Binary Tree


Given a binary tree, print the bottom view from left to right.
A node is included in bottom view if it can be seen when we look at the tree from bottom.
                      20
                    /    \
                  8       22
                /   \        \
              5      3       25
                    /   \      
                  10    14
  
  For the above tree, the bottom view is 5 10 3 14 25.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        if(root == NULL)
            return ans;
        
        queue<pair<Node*,int>>q;
        map<int,int>mp;
        q.push({root,0});
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            
            Node*curr = it.first;
            int line  = it.second;
            
            mp[line] = curr->data; // replace previous value of node with same line if possible
             
            if(curr->left)
                q.push({curr->left,line-1});
            if(curr->right)
                q.push({curr->right,line + 1});
        }
        for(auto i  : mp)
        {
            ans.push_back(i.second);
            
        }
        return ans;
    }
};
