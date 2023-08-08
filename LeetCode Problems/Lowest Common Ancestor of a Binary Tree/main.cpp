/* Depth-First Search */
class Solution {
public:
    int solve(TreeNode* root ,int n1 ,int n2,int found, TreeNode* &ans){
        if(root == NULL) return found;
        
        found = solve(root->left, n1, n2, found, ans) + solve(root->right, n1, n2, found, ans);
        
        if(root->val == n1 or root->val == n2) found++;
        
        if(ans == NULL and found == 2) ans = root;
        
        return found;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = NULL;
        solve(root, p->val, q->val, 0, ans);
        
        return ans;
    }
};
