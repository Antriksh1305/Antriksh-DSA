Node* solve(vector<int> post, int n){
    if(n == 0) return NULL;
    
    Node* root = new Node(post[n-1]);
    
    int i = 0;
    while(post[i] < post[n-1]) i++;
    
    root->left = solve(vector<int> (post.begin(), post.begin()+i), i);
    root->right = solve(vector<int> (post.begin() + i, post.end() - 1),post.size()-i-1);
    
    return root;
}

Node *constructTree (int post[], int size)
{
    vector<int> postorder(post,post+size);
    
    return solve(postorder,size);
}
