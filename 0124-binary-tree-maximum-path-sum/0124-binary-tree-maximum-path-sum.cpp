/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root, int s= INT_MIN ) {
        
        function<int(TreeNode*)> dfs;
        dfs = [&](TreeNode* n) -> int
        {
            if (!n) return 0;
            int l = max(0, dfs(n->left));
            int r = max(0, dfs(n->right));
            s = max(s, l + r + n->val);
            return n->val + max(l, r);
        };
        
        dfs(root);
        return s;
    }
    
};