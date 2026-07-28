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
    bool isValidBST(TreeNode* root) {

        return solve(root, LLONG_MIN,LLONG_MAX);
    }

    bool solve(TreeNode*r, long long minn, long long maxx){
        if(!r) return true;
        if(r->val <= minn || r->val >= maxx){
            return false;
        }

        return solve(r->left,minn,r->val) && solve(r->right,r->val,maxx);
    }
};