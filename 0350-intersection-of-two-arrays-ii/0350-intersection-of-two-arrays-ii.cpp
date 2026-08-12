class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>mp;

        for(int i: nums1){
            mp[i]++;
        }

        for(int i : nums2){
            if(mp.find(i) != mp.end()){
                if(mp[i] <= 0) continue;

                mp[i]--;
                ans.push_back(i);
                //mp.erase(i);
            }
        }
        return ans;
    }
};