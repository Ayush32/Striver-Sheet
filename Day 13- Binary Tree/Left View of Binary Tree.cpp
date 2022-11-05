Iterative way - 
  
  class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode *temp = q.front();
            res.push_back(temp->val);
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode *curr = q.front();
                q.pop();
              if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
                
            }
        }
        return res;
    }
};

Recursive Way
 
 class Solution {
    void recursion(TreeNode* root,int level,vector<int>&ans)
    {
        if(root == NULL)
            return;
        if(level == ans.size())
        {
            ans.push_back(root->val);
        }
         recursion(root->left,level+1,ans);
        recursion(root->right,level+1,ans);
       

    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int level = 0;
        recursion(root,0,ans);
        return ans;
    }
};
