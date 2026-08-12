/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int ans = -1;
    int kthSmallest(Node *root, int k) {
        // code here
        solve(root, k);
        
        return ans;
    }
    
    void solve(Node* root, int& k){
        if(!root) return;
        
        solve(root->left,k);
        
        if(--k == 0){
            ans = root->data;
            return;
        } 
        
        solve(root->right, k);
    }
};