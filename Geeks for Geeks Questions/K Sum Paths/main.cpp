class Solution{
  public:
    void solve(Node* root, int k, unordered_map<int,int> &mp, int sum, int &res) {
        if(root == NULL) return;
        
        if (sum + root->data == k) res++;
         
        res += mp[sum + root->data - k];
         
        mp[sum + root->data]++;
 
        solve(root->left, k, mp, sum + root->data, res);
        solve(root->right, k, mp, sum + root->data, res);
         
        mp[sum + root->data]--;
        
        return;
    }
    
    int sumK(Node *root,int k)
    {
        int res = 0;
        unordered_map<int,int> mp;
        solve(root, k, mp, 0, res) ;
        return res;
    }
};
