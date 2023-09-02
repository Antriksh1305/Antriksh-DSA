void printCorner(Node *root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    cout<<root->data<<" ";
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL and q.size() != 0) {
            if(q.front() != q.back()) cout<<q.front()->data<<" ";
            cout<<q.back()->data<<" ";
            
            q.push(NULL);
        }
        else if(temp != NULL) {
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}
