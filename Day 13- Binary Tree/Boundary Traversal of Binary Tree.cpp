class Solution {
    bool isLeafNode(Node* root)
    {
        if(root->left == NULL && root->right == NULL)
            return true;
        return false;
    }
    
    void addLeftBoundary(Node* root,vector<int>&ans)
    {
        Node* curr = root->left;
        
        while(curr)
        {
            if(!isLeafNode(curr))
                ans.push_back(curr->data);
            if(curr->left)
                curr = curr->left;
            else
                curr = curr->right;
        }
    }
    void addRightBoundary(Node* root,vector<int>&ans)
    {
        Node* curr = root->right;
        stack<int>s;
        while(curr)
        {
            if(!isLeafNode(curr))
                s.push(curr->data);
            if(curr->right)
                curr = curr->right;
            else
                curr = curr->left;
        }
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
    }
    void addLeaf(Node*root, vector<int>&ans)
    {
        if(isLeafNode(root))
        {
            ans.push_back(root->data);
            return;
        }
        if(root->left)
            addLeaf(root->left,ans);
        if(root->right)
            addLeaf(root->right,ans);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(!root)
            return ans;
        if(!isLeafNode(root))
            ans.push_back(root->data);
        
        addLeftBoundary(root,ans);
        addLeaf(root,ans);
        addRightBoundary(root,ans);
        
        return ans;
        
    }
};
