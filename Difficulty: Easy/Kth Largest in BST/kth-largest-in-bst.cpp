class Solution {
public:
    vector<int> vec;

    int kthLargest(Node* root, int k) {
        if(!root)
            return -1;

        vec.clear();

        solve(root);

        sort(vec.begin(), vec.end());

        int n = vec.size();

        return vec[n - k];
    }

    void solve(Node* root) {
        if(!root)
            return;

        vec.push_back(root->data);

        solve(root->left);
        solve(root->right);
    }
};