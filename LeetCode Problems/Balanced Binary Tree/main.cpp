/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root,bool& ans){
        if(root == NULL) return 0;
        
        int h1 = solve(root->left,ans);
        int h2 = solve(root->right,ans);
        
        if(abs(h1 - h2) > 1) ans = false;
        
        return (h1 > h2? h1 : h2) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        bool ans = true;
        solve(root,ans);
        return ans;
    }
};
