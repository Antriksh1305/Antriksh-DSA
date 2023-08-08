/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    
    int solve(Node* root ,int n1 ,int n2,int found, Node* &ans){
        if(root == NULL) return found;
        
        found = solve(root->left,n1,n2,found,ans) + solve(root->right,n1,n2,found,ans);
        
        if(root->data == n1 or root->data == n2) found++;
        
        if(ans == NULL and found == 2) ans = root;
        
        return found;
    }
    
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        Node* ans = NULL;
        solve(root,n1,n2,0,ans);
        
        return ans;
    }
};
