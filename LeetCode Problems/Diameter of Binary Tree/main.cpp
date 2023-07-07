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
    int solve(TreeNode* root,int& ans){
        if(root == NULL) return 0;
        
        int h1 = solve(root->left,ans);
        int h2 = solve(root->right,ans);
        
        if(h1 + h2 > ans){
            ans = h1 + h2;
        }
        
        return (h1 > h2? h1 : h2) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root->left == NULL && root->right==NULL) return 0;
        int ans = 0;
        solve(root,ans);
        return ans;
    }
};
