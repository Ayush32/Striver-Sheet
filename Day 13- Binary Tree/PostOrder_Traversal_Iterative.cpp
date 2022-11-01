class Solution {
   
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postOrder;
        stack<TreeNode*> s1,s2;
        
        if(root == NULL)
            return postOrder;
        s1.push(root); //push the top node in stack 1
        while(!s1.empty())
        {
            root = s1.top(); // take the top of stack 1
            s1.pop();
            s2.push(root);  //and push into stack 2
            
            if(root->left != NULL){
                s1.push(root->left);  // check if left is exists then push into stack 1
            }
            if(root->right != NULL){
                s1.push(root->right); // check if right is exists then push into stack 1
            }
            
            
        }
        while(!s2.empty())
        {
            postOrder.push_back(s2.top()->val);  // pop all the element from stack 2 and push into vector ans
            s2.pop();
        }
        return postOrder;
    }
};
