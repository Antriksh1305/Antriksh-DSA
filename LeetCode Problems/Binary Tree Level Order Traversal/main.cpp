/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution {
    public:
        void solve(TreeNode *root, vector<vector < int>> &v, int height) {
            if (root == NULL) return;

            if (height < v.size()) {
                v[height].push_back(root->val);
            }
            else {
                v.push_back(vector<int> (1, root->val));
            }
            solve(root->left, v, height + 1);
            solve(root->right, v, height + 1);
            return;
        }
    vector<vector < int>> levelOrder(TreeNode *root) {
        vector<vector < int>> v;
        solve(root, v, 0);
        return v;
    }
};
