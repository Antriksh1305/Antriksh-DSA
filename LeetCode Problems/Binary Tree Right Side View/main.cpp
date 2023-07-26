/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> rightSideView(TreeNode *root)
        {
            vector<int> ans;
            if (root == NULL) return ans;

            queue<pair<TreeNode*, int>> q;

            q.push({ root, 0 });

            while (!q.empty())
            {
                int size = q.size();

                for (int i = 0; i < size; i++)
                {
                    pair<TreeNode*, int> temp = q.front();
                    q.pop();

                    TreeNode *tempNode = temp.first;
                    int level = temp.second;

                    if (ans.size() == level) ans.push_back(tempNode->val);

                    if (tempNode->right) q.push({ tempNode->right, level + 1 });
                    if (tempNode->left) q.push({ tempNode->left, level + 1 });
                }
            }
            return ans;
        }
};
