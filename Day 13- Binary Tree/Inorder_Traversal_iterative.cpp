class Solution {
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inOrder;
        stack<TreeNode*>st;
        if(root == NULL)
            return inOrder;
        TreeNode* curr = root;
    while(curr != NULL || st.empty() == false)
    {
        if(curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else {
            if(st.empty() == True)
                break;
            curr = st.top();
            st.pop();
            inOrder.push_back(curr->val);
            curr = curr->right;
        }
    }
        return inOrder;
    }
};
