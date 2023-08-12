/* Recursion */
/* TC-> O(N) & SC-> O(Height of Tree) */

class Solution {
public:
    vector<int> solve(TreeNode* root, vector<int> ans){
        if(!root) return ans;
        
        ans.push_back(root->val);
        
        ans = solve(root->left,ans);
        ans = solve(root->right,ans);
        
        return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        return solve(root, vector<int> ());
    }
};

/* Iterative */
/* TC-> O(N) & SC-> O(Height of Tree) */

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        stack <TreeNode*> st;
        
        TreeNode* curr = root;
        
        while(1){
            if(curr != NULL){
                st.push(curr);
                ans.push_back(curr->val);
                
                curr = curr->left;
            }
            else{
                if(!st.empty()){
                    curr = st.top();
                    st.pop();
                    
                    curr = curr->right;
                }
                else break;
            }
        }
        
        return ans;
    }
};
