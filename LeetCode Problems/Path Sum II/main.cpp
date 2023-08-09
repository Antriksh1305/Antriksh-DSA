/* Depth-First Search */
class Solution {
public:
    vector<vector<int>> solve(TreeNode* root, vector<vector<int>> ans, vector<int> output, int sum, int target){
        if(root == NULL) return ans;
        
        output.push_back(root->val);
        int x = sum + root->val;
        
        if(root->left == NULL and root->right == NULL and x == target){
            ans.push_back(output);
            output = {};
            return ans;
        }
        
        ans = solve(root->left, ans, output, x, target);
        ans = solve(root->right, ans, output, x, target);
        
        return ans;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        return solve(root, {}, {}, 0, targetSum);
    }
};
