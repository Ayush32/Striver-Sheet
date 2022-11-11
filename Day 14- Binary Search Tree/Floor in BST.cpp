int findCeil(Node* root, int input) {
    int f = 0;
    
    while(root)
    {
        if(root->data == input)
        {
            c = root->data;
            return c;
        }
        
        if(input > root->data)
            f = root->data;
            
            root = root->right;
        }
        else{
            
            root = root->left;
        }
    }
    return f;

    // Your code here
}
