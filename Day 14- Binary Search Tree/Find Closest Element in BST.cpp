
Find the Closest Element in BST
// MediumAccuracy: 47.51%Submissions: 44157Points: 4
Given a BST and an integer. Find the least absolute difference between any node value of the BST and the given integer.
  
  
class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
        //Your code here
        //Your code here
         int ans=abs(root->data-K);
        while(root!=NULL){
            ans=min(ans,abs(root->data-K));
            if(root->data<K) root=root->right;
            else root=root->left;
        }
        return ans;
    }
};
