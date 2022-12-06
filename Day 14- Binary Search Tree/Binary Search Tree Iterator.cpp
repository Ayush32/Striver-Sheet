class BSTIterator {
    private:

    stack<TreeNode*>mystack;
public:
    BSTIterator(TreeNode* root) {
        TreeNode* temp = root;
        while(temp != NULL)
        {
            //push all the left node
            mystack.push(temp);
            temp = temp->left;
        }
    }
    
    int next() {
        TreeNode* tmpNode = mystack.top();
        mystack.pop();
        if(tmpNode->right != NULL)
        {
            find_left(tmpNode->right);
            
        }
        return tmpNode->val;
    }
    
    bool hasNext() {
        return !mystack.empty();
    }

    void find_left(TreeNode* root)
    {
        TreeNode* p = root;
        while(p != NULL)
        {
            mystack.push(p);
            p = p->left;
        }
    }
};
