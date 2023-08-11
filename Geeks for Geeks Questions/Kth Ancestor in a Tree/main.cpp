void solve(Node *root, int k, int node, stack<int> st, int &ans){
    if(!root) return;
    
    st.push(root->data);
    
    if(root->data == node){
        if(st.size() > k){
            while(k--){
                st.pop();
            }
            ans = st.top();
        } 
        else ans = -1;
    }
    
    solve(root->left,k,node,st,ans);
    solve(root->right,k,node,st,ans);
    
    st.pop();
    
    return;
}
int kthAncestor(Node *root, int k, int node)
{
    int ans = 0;
    solve(root,k,node,stack<int> (),ans);
    
    return ans;
}
