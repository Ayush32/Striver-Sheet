// using one stack

vector<int> postOrderIterative(struct Node* root)
{
    vector<int> postOrderList;
    stack<Node*> st;
    while (true) {
        while (root) {
            st.push(root);
            st.push(root);
            root = root->left;
        }
        if (st.empty())
            return postOrderList;
        root = st.top();
        st.pop();
        if (!st.empty() && st.top() == root)
            root = root->right;
        else {
            postOrderList.push_back(root->data);
            root = NULL;
        }
    }
    return postOrderList;
}
