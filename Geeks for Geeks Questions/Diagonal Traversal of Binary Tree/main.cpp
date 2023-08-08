/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

void solve(vector<vector<int>>& res, int left, int right, Node* root){
    if(root == NULL) return;
    
    if(left + 1 > res.size()){
        res.push_back(vector<int>{root->data});
    }
    else {
        res[left].push_back(root->data);
    }
    
    solve(res,left+1,right,root->left);
    solve(res,left,right+1,root->right);
}

vector<int> diagonal(Node *root)
{
    vector<vector<int>> res;
    solve(res,0,0,root);
    
    vector<int> ans;
    
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            ans.push_back(res[i][j]);
        }
    }
    
    return ans;
}
