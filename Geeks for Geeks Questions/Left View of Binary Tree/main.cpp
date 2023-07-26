vector<int> leftView(Node *root)
{
   vector<int> ans;
   if(root == NULL) return ans;
   
   queue<pair<Node*,int>> q;
   
   q.push({root,0});
   
   while(!q.empty()){
        int size = q.size();
       
        for(int i = 0; i < size; i++){
            pair<Node*,int> temp = q.front();
            q.pop();
       
            Node* tempNode = temp.first;
            int level = temp.second;
            
            if(ans.size() == level) ans.push_back(tempNode->data);
            
            if(tempNode->left) q.push({tempNode->left,level+1});
            if(tempNode->right) q.push({tempNode->right,level+1});
        }
   }
   return ans;
}
