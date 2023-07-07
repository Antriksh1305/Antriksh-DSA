class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
      
        queue<TreeNode*> q;
        q.push(root);
        int cnt = 1;
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
        
            if(temp->left != NULL){
                q.push(temp->left);
                cnt++;
            }
            if(temp->right !=NULL){
                q.push(temp->right);
                cnt++;
            }
        }
        return cnt;
    }
};
