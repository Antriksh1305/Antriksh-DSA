class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        
        unordered_map <int,int> res;
        int max = 0, min = 0;
        queue <pair<Node*,int>> q;
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int> temp = q.front();
            q.pop();
            
            Node* tempNode = temp.first;
            int hd = temp.second;
            
            res[hd] = tempNode->data;
            
            if(tempNode->left){
                q.push({tempNode->left,hd-1});
            }
            if(tempNode->right){
                q.push({tempNode->right,hd+1});
            }
            
            if(hd > max) max = hd;
            else if(hd < min) min = hd;
        }
        
        for(int i = min; i <= max; i++){
            ans.push_back(res[i]);
        }
        
        return ans;
    }
};
