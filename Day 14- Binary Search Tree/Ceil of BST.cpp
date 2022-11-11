Ceil in BST
Given a BST and a number X, find Ceil of X.
Note: Ceil(X) is a number that is either equal to X or is immediately greater than X.
  
  
int findCeil(Node* root, int input) {
    int c = 0;
    
    while(root)
    {
        if(root->data == input)
        {
            c = root->data;
            return c;
        }
        
        if(input > root->data){
            root = root->right;
        }
        else{
            c = root->data;
            root = root->left;
        }
    }
    return c;

    // Your code here
}
