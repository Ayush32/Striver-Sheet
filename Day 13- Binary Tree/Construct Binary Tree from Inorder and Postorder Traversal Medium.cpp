class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size())
            return NULL;
        
        map<int,int>mp;
        
        for(int i = 0;i<inorder.size();i++)
        {
            mp[inorder[i]] = i;
        }
        
        TreeNode* root = buildBinary(inorder,0,inorder.size()- 1,postorder,0,postorder.size()-1,mp);
        
        return root;
    }
    TreeNode* buildBinary(vector<int>&inorder,int inS,int inE,vector<int>&postorder,int psS,int psE, map<int,int>&mp)
    {
        if(inS > inE || psS > psE)
            return NULL;
        
        TreeNode* root = new TreeNode(postorder[psE]);
        int inRoot = mp[postorder[psE]];
        int numsLeft = inRoot - inS;
        
        root->left = buildBinary(inorder,inS,inRoot-1,postorder,psS,psS + numsLeft -1,mp);
        root->right = buildBinary(inorder,inRoot + 1,inE,postorder,psS+numsLeft,psE - 1,mp);
        
        return root;
    }
};
