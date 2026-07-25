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
    int val =0;
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);

        return val;
    }
    int dfs(TreeNode* r){
        if(r == nullptr) return 0;

        int l = dfs(r->left);
        int ri = dfs(r->right);

        val = max(val,l+ri);
        return 1 + max(l,ri);

    }
};