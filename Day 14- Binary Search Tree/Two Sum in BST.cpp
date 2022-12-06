same as itertor bst question 
approach 1 -  store inorder traversal and use two pointer on vector to find pair sum equal to k
class BSTIterator {
     private:
     stack<TreeNode*>st;

     public:
            BSTIterator(TreeNode* root,int flag)
            {
                if(flag == 1)
                {
                    while(root != NULL)
                    {
                        st.push(root);
                        root = root->right;
                    }
                }
                else {
                     while(root != NULL)
                    {
                        st.push(root);
                        root = root->left;
                    }
                }
            }

            int next()
            {
                TreeNode* curNode = st.top();
                st.pop();
                if(curNode->right != NULL){
                    TreeNode* temp = curNode->right;
                    while(temp != NULL)
                    {
                        st.push(temp);
                        temp = temp->left;
                    }
                }
                return curNode->val;
            }
             int before()
            {
                TreeNode* curNode = st.top();
                st.pop();
                if(curNode->left != NULL){
                    TreeNode* temp = curNode->left;
                    while(temp != NULL)
                    {
                        st.push(temp);
                        temp = temp->right;
                    }
                }
             return curNode->val;

            }

 };
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
            return false;

        BSTIterator l(root,0); // next;
        BSTIterator r(root,1); // before;

        int i = l.next();
        int j = r.before();

        while(i < j)
        {
            if(i + j == k)
                return true;
            else if(i + j > k)
                               j = r.before();

            else
             i = l.next();
        }
        return false;

    }
};
