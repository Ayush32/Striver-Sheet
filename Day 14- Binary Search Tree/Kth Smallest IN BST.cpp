T.C - O(N) , S.C - O(N)
  
  class Solution {
    
    void helper(TreeNode*root,vector<int>&v)
    {
        if(root == NULL)
            return;
        
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int>v;
        helper(root,v);
    
        
        return v[k-1];
    }
};
