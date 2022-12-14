/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root,LONG_MIN,LONG_MAX);
    }
    bool isValidBST(TreeNode* root,long min,long max)
    {
        if(root == NULL)
            return true;
        
        if(root->val >= max || root->val <= min)
            return false;
        
        // check on left // should ne lesser than root->val
        bool left = isValidBST(root->left,min,root->val);
        // check on right // should ne greater than root->val
        bool right = isValidBST(root->right,root->val,max);
        
        return left && right;
    }
};
