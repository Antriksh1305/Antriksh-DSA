class Solution{
    public:
    Node* solve(vector<int> in, vector<int> pre, int n){
        if(n == 0) return NULL;
        
        Node* root = new Node(pre[0]);
        if(n == 1) return root;
        
        vector<int> inLeft, inRight, preLeft, preRight;
        
        int i = 0;
        while(in[i] != pre[0]){
            inLeft.push_back( in[i] );
            preLeft.push_back( pre[i+1] );
            i++;
        }
        
        i++;
        while(i < n){
            inRight.push_back(in[i]);
            preRight.push_back(pre[i]);
            i++;
        }
        
        root->left = solve(inLeft , preLeft, inLeft.size());
        root->right = solve(inRight , preRight, inRight.size());
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        vector <int> inorder(in,in+n);
        vector <int> preorder(pre,pre+n);
        
        return solve(inorder,preorder,n);
    }
};
