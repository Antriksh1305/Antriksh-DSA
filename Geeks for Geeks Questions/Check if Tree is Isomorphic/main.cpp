/* DFS Traversal */
/* Expected Time Complexity: O(min(M, N)) where M and N are the sizes of the two trees.
Expected Auxiliary Space: O(min(H1, H2)) where H1 and H2 are the heights of the two trees. */

class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool solve(Node* root1, Node* root2){
        if(!root1 and !root2) return true;
        if( (!root1 and root2) or (root1 and !root2) or (root1->data != root2->data) ) return false;
        
        return (solve(root1->left,root2->left) and solve(root1->right,root2->right)) or (solve(root1->right,root2->left) and solve(root1->left,root2->right));
    }
    bool isIsomorphic(Node *root1,Node *root2) {
        return solve(root1,root2);
    }
};
