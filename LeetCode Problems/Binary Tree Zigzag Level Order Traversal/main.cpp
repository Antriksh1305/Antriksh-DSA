/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void Traversal(TreeNode *root,vector<vector<int>>& v,int height){
            if(root == NULL) return;
            
            if(height < v.size()){
                v[height].push_back(root->val);
            }
            else {
                v.push_back(vector<int> (1,root->val));
            }
            Traversal(root->left,v,height+1);
            Traversal(root->right,v,height+1);
            return;
        }
        vector<vector < int>> zigzagLevelOrder(TreeNode *root){
            vector<vector<int>> v;
            Traversal(root,v,0);
            for(int i = 0; i < v.size(); i++){
                if(i % 2 == 1){
                    reverse(v[i].begin(),v[i].end());
                }
            }
            return v;
        }
};
