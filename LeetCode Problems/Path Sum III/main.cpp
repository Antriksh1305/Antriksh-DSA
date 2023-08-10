/* Depth-First Search */

void solve(TreeNode* root, int k, unordered_map<long long int,long long int> &mp, long long int sum, long long int &res) {
        if(root == NULL) return;
        
        if (sum + root->val == k) res++;
         
        res += mp[sum + root->val - k];
         
        mp[sum + root->val]++;
 
        solve(root->left, k, mp, sum + root->val, res);
        solve(root->right, k, mp, sum + root->val, res);
         
        mp[sum + root->val]--;
        
        return;
    }
    
    int pathSum(TreeNode* root, int k) {
        long long int res = 0;
        unordered_map<long long int,long long int> mp;
        
        solve(root, k, mp, 0, res);
        
        return res;
    }
};
