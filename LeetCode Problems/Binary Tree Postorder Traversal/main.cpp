/* Recursion */
/* TC-> O(N) & SC-> O(Height of Tree) */

class Solution {
public:
    vector<int> solve(TreeNode* root, vector<int> ans){
        if(!root) return ans;
        
        ans = solve(root->left,ans);
        ans = solve(root->right,ans);
        
        ans.push_back(root->val);
        
        return ans;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        return solve(root,vector<int> ());
    }
};

/* Iterative */
/* TC-> O(N) & SC-> O(Height of Tree) */

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> ans;
        stack <TreeNode*> st;
        
        TreeNode* curr = root;
        int i = 0;
        
        while(1){
            if(curr != NULL){
                st.push(curr);
                st.push(curr);
                curr = curr->left;
            }
            else{
                if(!st.empty()){
                    curr = st.top();
                    st.pop();
                    
                    if(!st.empty() and curr == st.top()){
                        curr = curr->right;
                    }
                    else{
                        ans.push_back(curr->val);
                        curr = NULL;
                    } 
                }
                else break;
            }
        }
        
        return ans;
    }
};
