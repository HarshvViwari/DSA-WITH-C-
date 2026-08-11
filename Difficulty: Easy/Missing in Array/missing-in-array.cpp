class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int l = 0, r = n - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            // If arr[mid] is correct, missing number is on right
            if(arr[mid] == mid + 1) {
                l = mid + 1;
            }
            else {
                // Missing number is on left
                r = mid - 1;
            }
        }

        return l + 1;
    }
};