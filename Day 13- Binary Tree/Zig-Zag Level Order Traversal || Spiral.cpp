
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL)
            return ans;
        queue<TreeNode*>q;
        
        q.push(root);
        bool leftToRight = true;  // true - L to R
                                    // false - R to L
        while(!q.empty())
        {
            int size = q.size();
            vector<int>level(size);
            
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                int index = leftToRight ?  i : (size-1- i);
                
                level[index] = node->val;
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
            }
            // after the level complete
            leftToRight = !leftToRight;
            ans.push_back(level);
        }
        return ans;
    }
};
