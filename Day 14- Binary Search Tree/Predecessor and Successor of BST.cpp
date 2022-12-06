Predecessor and Successor
MediumAccuracy: 47.36%Submissions: 54190Points: 4
There is BST given with root node with key part as an integer only. You need to find the in-order successor and predecessor of a given key. If either predecessor or successor is not found, then set it to NULL.

Example:
T.C = O(H);
S.C = O(1)

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    pre = NULL;
    suc = NULL;
    
    Node* temp = root;
    
    while(temp != NULL)
    {
        if(temp->key <= key) {
            temp = temp->right;
        }
        else{
            suc = temp;
            temp = temp->left;
        }
    }
    temp = root;
    while(temp != NULL)
    {
        if(temp->key >= key) {
            temp = temp->left;
        }
        else{
            pre = temp;
            temp = temp->right;
        }
    }

// Your code goes here

}
