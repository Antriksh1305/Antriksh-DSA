/* Recursion */
/* TC-> O(N) & SC-> O(Height of Tree) */

class Solution {
public:
    vector<int> solve(TreeNode* root, vector<int> ans){
        if(!root) return ans;
        
        ans = solve(root->left,ans);
        ans.push_back(root->val);
        ans = solve(root->right,ans);
        
        return ans;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        return solve(root, vector<int> ());
    }
};

/* Iterative */
/* TC-> O(N) & SC-> O(Height of Tree) */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {        
        vector <int> ans;
        stack <TreeNode*> st;
        
        TreeNode* curr = root;
        
        while(1){
            if(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            else{
                if(!st.empty()){
                    curr = st.top();
                    st.pop();
                    
                    ans.push_back(curr->val);
                    
                    curr = curr->right;
                }
                else break;
            }
        }
        
        return ans;
    }
};
