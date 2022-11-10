Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. 
Now your task is to complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to the tree and returns it.
Note: The structure of the tree must be maintained. Multiple nodes can have the same data.

class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int>ans;
        
        if(root == NULL)
            return ans;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node* node = q.front();
            q.pop();
            
            if(node == NULL)
                ans.push_back(-1);
            else
                ans.push_back(node->data);
            
            if(node != NULL) {
                q.push(node->left);
                q.push(node->right);
            }
            
        }
        return ans;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(A.size() == 0)
        return NULL;
        
        Node* root = new Node(A[0]);
        queue<Node*>q;
        q.push(root);
        int i = 1;
        while(!q.empty())
        {
            Node* curr = q.front();
            q.pop();
            // left
            if(A[i] == -1)
                {
                    curr->left = NULL;
                }
                else{
                    Node* leftNode = new Node(A[i]);
                    curr->left = leftNode;
                    q.push(leftNode);
                }
                
            // right
            if(A[i + 1] == -1)
                {
                    curr->right = NULL;
                }
                else{
                    Node* rightNode = new Node(A[i+1]);
                    curr->right = rightNode;
                    q.push(rightNode);
                }
                i +=2;
        }
        return root;
    }

};
