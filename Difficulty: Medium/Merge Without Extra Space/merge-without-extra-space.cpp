class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        vector<int> vec;

        int i = 0, j = 0;
        int n = a.size(), m = b.size();

        while(i < n && j < m) {
            if(a[i] <= b[j]) {
                vec.push_back(a[i]);
                i++;
            }
            else {
                vec.push_back(b[j]);
                j++;
            }
        }

        while(i < n) {
            vec.push_back(a[i]);
            i++;
        }

        while(j < m) {
            vec.push_back(b[j]);
            j++;
        }

        int k = 0;

        for(int i = 0; i < n; i++)
            a[i] = vec[k++];

        for(int i = 0; i < m; i++)
            b[i] = vec[k++];
    }
};