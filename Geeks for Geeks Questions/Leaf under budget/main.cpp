/* DFS Traversal */
/* Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) */

class Solution
{
public:
    map <int,int> costofLeafNodes;
    void DFS(Node* root, int cost){
        if(!root) return;
        
        if(root->left == NULL and root->right == NULL) costofLeafNodes[cost]++;
        
        DFS(root->left, cost + 1);
        DFS(root->right, cost + 1);
        
        return;
    }
    int getCount(Node *root, int k) {
        DFS(root, 1);
        
        int cost = k, ans = 0;
        for(auto i : costofLeafNodes){
            if(i.first * i.second <= cost){
                cost -= i.first * i.second;
                ans += i.second;
            }
            else if(i.first <= cost){
                int cnt = cost / i.first;
                ans += cnt;
                cost = cost - i.first * cnt;
            }
            else break;
        }
        
        return ans;
    }
};
