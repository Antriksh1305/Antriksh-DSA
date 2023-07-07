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
    int findheight(TreeNode* root, int cnt){
        
        if(root == NULL) return 0;
        
        int hleft = findheight(root->left,cnt);
        int hright = findheight(root->right,cnt);
        
        return (hleft > hright? hleft : hright) + 1;
    }
    int maxDepth(TreeNode* root) {
        return root == NULL? 0 : findheight(root,0);
    }
};
