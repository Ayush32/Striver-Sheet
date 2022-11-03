// using recursion

class Solution {
public:
    int maxDepth(TreeNode* root) {
        // using recursion
        if(root == NULL)
            return 0;
        
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        
        return 1 + max(lh,rh);
    }
};

// using level order traversal iterative solution
class Solution {
public:
if(root == NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int depth = 0;
        while(!q.empty())
        {
            int size = q.size();
            depth++;
            
            for(int i = 0;i<size;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
            }
        }
        return depth;
}
};
