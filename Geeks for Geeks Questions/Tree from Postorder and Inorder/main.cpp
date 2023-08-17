Node* solve(vector<int> in, vector<int> post, int n){
    if(n == 0) return NULL;
    
    Node* root = new Node(post[n-1]);
    if(n == 1) return root;
    
    vector<int> inLeft, inRight, postLeft, postRight;
    
    int i = 0;
    while(in[i] != post[n-1]){
        inLeft.push_back( in[i] );
        postLeft.push_back( post[i] );
        i++;
    }
    
    i++;
    while(i < n){
        inRight.push_back( in[i] );
        postRight.push_back( post[i-1] );
        i++;
    }
    
    root->left = solve(inLeft , postLeft, inLeft.size());
    root->right = solve(inRight , postRight, inRight.size());
    
    return root;
}

Node *buildTree(int in[], int post[], int n) {
    vector <int> inorder(in,in+n);
    vector <int> postorder(post,post+n);
        
    return solve(inorder,postorder,n);
}
