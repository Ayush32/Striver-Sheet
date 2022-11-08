class Solution {
    
    int findheightLeft(TreeNode* root)
    {
        int height = 0;
        while(root)
        {
            height++;
            root = root->left;
        }
        return height;
    }
    int findheightRight(TreeNode* root)
    {
        int height = 0;
        while(root)
        {
            height++;
            root = root->right;
        }
        return height;
    }
    
    
public:
    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        int lh = findheightLeft(root);
        int rh = findheightRight(root);
        
        if(lh == rh)
            return (1 << rh) - 1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);

    }
};
