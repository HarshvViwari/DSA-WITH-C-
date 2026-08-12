/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    int maxe = INT_MIN;
    
    int mine = INT_MAX;
    
    int findMax(Node *root) {
        // code here
        maxe = max(maxe, root->data);
        
        if(root->left){
            findMax(root->left);
        }
        
        if(root->right){
            findMax(root->right);
        }
        
        return maxe;
        
    }

    int findMin(Node *root) {
        // code here
        mine = min(mine, root->data);
        
        if(root->left){
            findMin(root->left);
        }
        
        if(root->right){
            findMin(root->right);
        }
        
        return mine;
        
    }
};