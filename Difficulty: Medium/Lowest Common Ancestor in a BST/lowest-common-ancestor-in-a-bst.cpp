/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* findLCA(Node* root, Node* n1, Node* n2) {
        // code here
        if(!root) return NULL;
        
        if( root == n1 || root == n2) return root;
        
        Node* l = findLCA(root->left, n1, n2);
        Node* r = findLCA(root->right, n1, n2);
        
        if(l && r) return root;
        
        if(!l) return r;
        
        return l;
        
    }
};