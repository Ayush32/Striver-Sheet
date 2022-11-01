class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)
            return ans;
        
        queue<TreeNode*> q;
        q.push(root); // push the top node
        
        while(!q.empty())
        {
            int size =  q.size();
            vector<int>level; // to store every level;
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left) // if left exixts
                    q.push(node->left);
                if(node->right) // if right exists;
                    q.push(node->right);
                
                level.push_back(node->val);
            }
            ans.push_back(level);
            
        }
        return ans;
        
    }
};
