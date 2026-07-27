class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        vector<pair<int, int>> minv, maxv;

        int row = arrays.size();

        for (int i = 0; i < row; i++) {
            minv.push_back({arrays[i][0], i});
            maxv.push_back({arrays[i].back(), i});
        }

        sort(minv.begin(), minv.end());      // ascending by minimum
        sort(maxv.begin(), maxv.end());      // ascending by maximum

        int n = row;

       
        if (maxv[n - 1].second != minv[0].second)
            return maxv[n - 1].first - minv[0].first;

        
        return max(
            maxv[n - 1].first - minv[1].first,
            maxv[n - 2].first - minv[0].first
        );
    }
};