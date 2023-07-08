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
    void solve(TreeNode* root, string s, int& sum){
        if(root == NULL) return;
        if(root->left == NULL and root->right == NULL){
            s = s + to_string(root->val);
            sum += stoi(s);
            return;
        }
        
        s = s + to_string(root->val);
        
        solve(root->left,s,sum);
        solve(root->right,s,sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        string s = "";
        solve(root,s,sum);
        return sum;
    }
};
