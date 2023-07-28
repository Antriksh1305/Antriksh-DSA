void solve(Node* root, vector<vector<int>>& res, int level){
    if(root == NULL) return;
    
    if(level < res.size()){
        res[level].push_back(root->data);
    }
    else {
        res.push_back(vector<int> (1,root->data));
    }
    
    solve(root->left,res,level+1);
    solve(root->right,res,level);
    
    return;
}

vector<int> diagonal(Node *root)
{
    vector<int> ans;
    vector<vector<int>> res;
    
    solve(root,res,0);
    
    for(auto i : res){
        for(auto j : i){
            ans.push_back(j);
        }
    }
    
    return ans;
}
