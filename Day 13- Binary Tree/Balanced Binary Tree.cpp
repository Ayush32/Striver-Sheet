class Solution {
    
    int dfHeight(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        
        int leftHeight = dfHeight(root->left);
        if(leftHeight == -1)
            return -1;
        int rightHeight = dfHeight(root->right);
        if(rightHeight == -1)
            return -1;
        if(abs(leftHeight - rightHeight) > 1)
            return -1;
        
        return max(leftHeight, rightHeight) + 1;
        
    }
public:
    bool isBalanced(TreeNode* root) {
        return dfHeight(root) != -1;
    }
};
